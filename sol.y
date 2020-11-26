%{
	#include<stdio.h> 
	#include<stdlib.h>
	#include "requredfunc/str.h"
	int error=1; 
	int nd=0;
	int varc=0;
	void yyerror(const char *str);
%}
%union{clss *ptr;}

%token AND ASSIGN COLON COMMA DEF DIV DOT ELSE END EQ EXITLOOP FLOAT FLOAT_CONST FORMAT FROM FUN GE GLOBAL GT ID IF INT INT_CONST LEFT_PAREN LEFT_SQ_BKT LE LT MINUS MOD MULT NE NOT NUL OR PLUS PRINT PRODUCT READ RETURN RETURNS RIGHT_PAREN RIGHT_SQ_BKT SEMICOLON SKIP STEP STRING TO WHILE 

%type <ptr> exp id assignmentStmt dotId stmt stmtList stmtList0 bExp ifStmt elsePart relOP EQ LE LT GE GT NE whileStmt

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
		{	//printf("%d\n",nd);
			for(int i=1;i<=nd;i++)
			{printf("%s\n",strs[i]);}
		}	|  ;

stmtList: stmtList SEMICOLON stmt 
		{	char * code;
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
|whileStmt
	{	$$=$1;
	} 
|loopStmt |callStmt |returnStmt |exitLoop |skip;

assignmentStmt: dotId ASSIGN exp
{	char *code;
	nd++;
	code=funadd5(in_tos(nd)," ",$1->code," = ",$3->evar);
	//printf("%s\n",code);
	strs[nd]=code;
	if($3->st_ln==0)
		$$=createnode(code,nd,1+$3->no_ln);
	else
		$$=createnode(code,$3->st_ln,1+$3->no_ln);
};

dotId: id 
	{	$$ = $1;
	}
	|id DOT dotId ;

readStmt: READ FORMAT exp ;

printStmt: PRINT STRING |PRINT FORMAT exp ;

ifStmt: IF bExp {nd++;} COLON stmtList {nd++;}elsePart END 
	{	char * code=funadd5(in_tos($2->st_ln+$2->no_ln)," jmpn ",$2->evar," ",in_tos($7->st_ln));
		//printf("%s\n",code);
		strs[$2->st_ln+$2->no_ln]=code;
		$$=createnode(code,$2->st_ln,$2->no_ln+$5->no_ln+$7->no_ln+2);
		strs[$5->st_ln+$5->no_ln]=funadd3(in_tos($5->st_ln+$5->no_ln)," goto ",in_tos($7->st_ln+$7->no_ln));
		//$$=createnode("",$2->st_ln,$2->no_ln+$5->no_ln+$6->no_ln+1);
	};

elsePart: ELSE stmtList
		{	$$=$2;
			//printf("hi");
		}
		|
		{	$$=createnode("",0,0);
		}  
		;

whileStmt: WHILE bExp {nd++;}COLON stmtList END
		{	char * code=funadd5(in_tos($2->st_ln+$2->no_ln)," jmpn ",$2->evar," ",in_tos($5->st_ln+$5->no_ln+1));
			strs[$2->st_ln+$2->no_ln]=code;
			nd++;
			strs[nd]=funadd3(in_tos(nd)," goto ",in_tos($2->st_ln));
			$$=createnode(code,$2->st_ln,$2->no_ln+$5->no_ln+2);
		} 
		;

loopStmt: FROM id ASSIGN exp TO exp stepPart COLON stmtListO END ;

stepPart: STEP exp | ;

callStmt: LEFT_PAREN ID COLON actParamList RIGHT_PAREN;

returnStmt: RETURN expO;

expO: exp |  ;

exitLoop: EXITLOOP ;

skip: SKIP ;

id: ID indxListO 
	{	$$=yylval.ptr;
		$$->evar=$$->code;
	};

indxListO: indxList | ;

indxList: indxList LEFT_SQ_BKT exp RIGHT_SQ_BKT | LEFT_SQ_BKT exp RIGHT_SQ_BKT;

bExp: bExp OR bExp
	{$$=expr2($1,$3,"or",&nd,&varc);} 
 | bExp AND bExp  | NOT bExp  | LEFT_PAREN bExp RIGHT_PAREN | exp relOP exp
{	$$=expr2($1,$3,$2->code,&nd,&varc);
}
;

relOP: EQ {$$ = createnode("=",0,0);} | LE{$$ = createnode("<=",0,0);} | LT {$$ = createnode("<",0,0);} 
| GE {$$ = createnode(">=",0,0);} | GT {$$ = createnode(">",0,0);} 
| NE {$$ = createnode("<>",0,0);} ;

exp: exp PLUS exp 
	{ $$=expr2($1 ,$3," + ",&nd,&varc);}
	| exp MINUS exp
	{ $$=expr2($1 ,$3," - ",&nd,&varc);} 
	| exp MULT exp
	{ $$=expr2($1 ,$3," * ",&nd,&varc);} 
	| exp DIV exp
	{ $$=expr2($1 ,$3," / ",&nd,&varc);} 
	| exp MOD exp
	{ $$=expr2($1 ,$3," % ",&nd,&varc);} 
	| MINUS exp 
	| PLUS exp | exp DOT exp | LEFT_PAREN exp RIGHT_PAREN
	{ $$=$2;} 
	| id
	{ $$=$1;} 
	| LEFT_PAREN ID COLON actParamListO RIGHT_PAREN | 
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
