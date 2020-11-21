%{
	#include<stdio.h>
	#include<stdlib.h>
	#include "y.tab.h" 
	int line_num = 1;
%}
%option yylineno 

%%
[/][/].*["\n"] 	{}
and {return AND;}
:= { return ASSIGN;}
: {return COLON;}
[\t\n" "] {}; 


 
%%
int yywrap() { return 1; }
