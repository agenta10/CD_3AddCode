%{
	#include<stdio.h> 
	#include<stdlib.h>
	#include "requredfunc/str.h"
	int error=1; 
	int nd=0;
	void yyerror(const char *str);
%}
%union{clss *ptr;}

%token AND ASSIGN COLON COMMA DEF DIV DOT ELSE END EQ EXITLOOP FLOAT FLOAT_CONST FORMAT FROM FUN GE GLOBAL GT ID IF INT INT_CONST LEFT_PAREN LEFT_SQ_BKT LE LT MINUS MOD MULT NE NOT NUL OR PLUS PRINT PRODUCT READ RETURN RETURNS RIGHT_PAREN RIGHT_SQ_BKT SEMICOLON SKIP STEP STRING TO WHILE 

%type <ptr> exp id assignmentStmt dotId stmt stmtList stmtList0

%left PLUS MINUS
%left MULT DIV MOD
%nonassoc UMINUS UPLUS 
%nonassoc DOT
%left AND OR
%nonassoc NOT
%start prog

%% 

prog : GLOBAL declList stmtListO END  ;

declList: decl declList 
			{	printf("hi declist");
			}
			| ;

decl: DEF typeList END | FUN funDef END ;

typeList: typeList SEMICOLON varList COLON type |varList COLON type |typeDef ;

varList: var COMMA varList|var;

var: ID sizeListO ;

sizeListO: sizeList |  ;

sizeList: sizeList LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT |LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT ;

type: INT |FLOAT |STRING | NUL | typeDef |ID ;
typeDef: ID ASSIGN PRODUCT typeList END ;

funDef: funID fParamListO RETURNS type funBody ;

funID: ID ;

fParamListO: fParamList|   ;

fParamList: fParamList SEMICOLON pList COLON type |pList COLON type;

pList: pList COMMA idP |idP ;

idP: ID sizeListO;

funBody: declList stmtListO;

stmtListO: stmtList
		{	printf("%s",$1->code);
		}	|  ;

stmtList: stmtList SEMICOLON stmt 
		{	char * code=funadd3($1->code,"\n",$3->code);
			$$=createnode(code, $1->st_ln, $1->no_ln+$3->no_ln);
		}		
		| stmt
		{	$$=$1;
		};

stmt: assignmentStmt
	{	$$=$1;
	} 
|readStmt |printStmt |ifStmt 
	{	$$=$1;
	}
|whileStmt |loopStmt |callStmt |returnStmt |exitLoop |skip;

assignmentStmt: dotId ASSIGN exp
{	char *code;
	printf("%d",nd);
	if($$->st_ln!=0)
	{	code=funadd5($3->code,"\n",in_tos(nd+$3->st_ln+$3->no_ln)," ",$1->code);
		code=funadd3(code," = ",$3->evar);
	}
	else
	{	code=funadd5(in_tos(nd+$3->st_ln+$3->no_ln+1)," ",$1->code," = ",$3->evar);
	}
	$$=createnode(code,1,1+$3->no_ln);
	nd+=($3->no_ln+1);
};

dotId: id 
	{	$$ = $1;
	}
	|id DOT dotId ;

readStmt: READ FORMAT exp ;

printStmt: PRINT STRING |PRINT FORMAT exp ;

ifStmt: IF bExp COLON stmtList elsePart END 
	{	char *code;
	varc++;
	if($3->st_ln!=0 && $1-st_ln!=0)	
	{	code=funadd5($1->code,"\n",$3->code,"\n",in_tos(nd+$3->st_ln+$3->no_ln + $1->st_ln+$1->no_ln-1));
		code=funadd5(code,"var",in_tos(varc),$1->evar," <> ");
		code=funadd2(code,$3->evar);
	}
	else if($3->st_ln==0 && $3->st_ln==0)
	{	code=funadd5(in_to(nd+1),"var",in_tos(varc),$1->evar," <> ");
		code=funadd2(code,$3->evar);
	}
	$$=createnode(code,1,1+$3->no_ln);
	nd+=$3->st_ln+$3->no_ln;
	};

elsePart: ELSE stmtList|  ;

whileStmt: WHILE bExp COLON stmtList END ;

loopStmt: FROM id ASSIGN exp TO exp stepPart COLON stmtListO END ;

stepPart: STEP exp | ;

callStmt: LEFT_PAREN ID COLON actParamList RIGHT_PAREN;

returnStmt: RETURN expO;

expO: exp |  ;

exitLoop: EXITLOOP ;

skip: SKIP ;

id: ID indxListO 
	{	$$=yylval.ptr;
	};

indxListO: indxList | ;

indxList: indxList LEFT_SQ_BKT exp RIGHT_SQ_BKT | LEFT_SQ_BKT exp RIGHT_SQ_BKT;

bExp: bExp OR bExp  | bExp AND bExp  | NOT bExp  | LEFT_PAREN bExp RIGHT_PAREN | exp relOP exp
{	
}
;

relOP: EQ |LE |LT |GE |GT |NE ;

exp: exp PLUS exp | exp MINUS exp | exp MULT exp | exp DIV exp | 
exp MOD exp | MINUS exp | PLUS exp | exp DOT exp | LEFT_PAREN exp RIGHT_PAREN 
| id | LEFT_PAREN ID COLON actParamListO RIGHT_PAREN | 
INT_CONST
{	//printf("%s",yylval.ptr->code);
	$$ = yylval.ptr;
	$$->evar=$$->code;
} 
| FLOAT_CONST
{	$$ = yylval.ptr;
	$$->evar=$$->code;
} ;

actParamListO: actParamList   | ;

actParamList: actParamList COMMA exp | exp;

%% 

#include "lex.yy.c" 
extern int yylex();
extern int yyparse();
extern int line_num;

int main() 
{ 
	extern FILE *yyin;  
	yyin = fopen("sampleInput/input3.txt","r");
	yyparse(); 
	if(error!=1) 
		printf("\nInValid Program..!!!!\n\n"); 

	return 0;
} 

void yyerror(const char *str) 
{ 
	fprintf(stderr, "Error at line %d: %s\n", yylineno, str);
	error=0; 
} 
