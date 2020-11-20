sol.lex  lex file to generate token for the given inputfile code
sol.y    to create parser

Input 
1. input is contained in sampleInput folder
2. Specify the desired input from sol.y file.


How to run

yacc -d sol.y
flex sol.lex
gcc sol.tab.c 
./a.out


Output

Input1
Parsed  Successfull...
Code is valid....

Input 2
Error at line 13: syntax error
InValid Program..!!!!

Input3
Error at line 34: syntax error
InValid Program..!!!!
