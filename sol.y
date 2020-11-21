%{
	#include<stdio.h> 
	#include<stdlib.h>
	int error=1;  
	float VE,VT,VF,VG=100; 
	#include "lex.yy.c" 
	void yyerror(const char *str);
	int nd=0;
	typedef struct cls
	{	int x;char *code;
	} clss;
%}
//%union {float num;struct cls *ptr;int x;int y;} 
%token AND ASSIGN COLON 

%start prog

%% 
	prog: AND;

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
