%{
	#include<stdio.h> 
	#include "lex.yy.c"
	int error=1; 
	void yyerror(const char *str);
	int nd=0;
	typedef struct cls
	{	int node;
		char *code;
	} clss;
%}


%token AND ASSIGN COLON COMMA DEF DIV DOT ELSE END EQ EXITLOOP FLOAT  FORMAT FROM FUN GE GLOBAL GT IF INT  LEFT_PAREN LEFT_SQ_BKT LE LT MINUS MOD MULT NE NOT NUL OR PLUS PRINT PRODUCT READ RETURN RETURNS RIGHT_PAREN RIGHT_SQ_BKT SEMICOLON SKIP STEP  TO WHILE 

%union {char * var;
		char * str;
		int int_const;
		float float_const; 
		clss * ptr;
		}   
%token<var> ID
%token<str> STRING
%token<int_const> INT_CONST		
%token<float_const> FLOAT_CONST

%left PLUS MINUS
%left MULT DIV MOD
%nonassoc UMINUS UPLUS 
%nonassoc DOT
%left AND OR
%nonassoc NOT
%start prog

%% 

prog : GLOBAL declList stmtListO END 
{printf("Parsed  Successfull...\nCode is valid....\n\n"); 
	return 0; } ;

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

stmtListO: stmtList|  ;

stmtList: stmtList SEMICOLON stmt | stmt;

stmt: assignmentStmt |readStmt |printStmt |ifStmt |whileStmt |loopStmt |callStmt |returnStmt |exitLoop |skip;

assignmentStmt: dotId ASSIGN exp;

dotId: id |id DOT dotId ;

readStmt: READ FORMAT exp ;

printStmt: PRINT STRING |PRINT FORMAT exp ;

ifStmt: IF bExp COLON stmtList elsePart END ;

elsePart: ELSE stmtList|  ;

whileStmt: WHILE bExp COLON stmtList END ;

loopStmt: FROM id ASSIGN exp TO exp stepPart COLON stmtListO END ;

stepPart: STEP exp | ;

callStmt: LEFT_PAREN ID COLON actParamList RIGHT_PAREN;

returnStmt: RETURN expO;

expO: exp |  ;

exitLoop: EXITLOOP ;

skip: SKIP ;

id: ID indxListO ;

indxListO: indxList | ;

indxList: indxList LEFT_SQ_BKT exp RIGHT_SQ_BKT | LEFT_SQ_BKT exp RIGHT_SQ_BKT;

bExp: bExp OR bExp  | bExp AND bExp  | NOT bExp  | LEFT_PAREN bExp RIGHT_PAREN | exp relOP exp;

relOP: EQ |LE |LT |GE |GT |NE ;

exp: exp PLUS exp | exp MINUS exp | exp MULT exp | exp DIV exp | 
exp MOD exp | MINUS exp | PLUS exp | exp DOT exp | LEFT_PAREN exp RIGHT_PAREN 
| id | LEFT_PAREN ID COLON actParamListO RIGHT_PAREN | INT_CONST | FLOAT_CONST ;

actParamListO: actParamList   | ;

actParamList: actParamList COMMA exp | exp;

%% 
 
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
