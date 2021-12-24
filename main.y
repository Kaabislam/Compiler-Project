%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int sym[60];
%}
/* bison declarations */

%token NUM VAR IF ELSE ARRAY MAIN INT FLOAT CHAR BRACKETSTART BRACKETEND FOR WHILE ODDEVEN PRINTFUNCTION SIN COS TAN LOG FACTORIAL CASE DEFAULT SWITCH CLASS TRY CATCH FUNCTION MOD DEFINE STRUCT OR AND XOR POW ISGREATER PRIVATE ISLESS ISEQUAL PUBLIC STRING STRCMP HEADER BOOL ISDIVISIBLE
%nonassoc IFX
%nonassoc ELSE

%left '|' '&' '^'
%left '<' '>'
%left '+' '-'
%left '*' '/'

/* Grammar rules and actions follow.  */

%%

program: MAIN ':' line  {printf("Main function END\n");}
	 ;

line: /* NULL */

	| line statement
	;

statement: ';'			
	| declaration ';'		{ printf("Declaration\n"); }

	| expression ';' 			{   printf("\nvalue of expression: %d\n", $1); $$=$1;
							printf("\n---------------------------------------------------\n");
		
		}
	
	| VAR '=' expression ';' { 				
							printf("\nValue of the variable: %d\n",$3);
							sym[$1]=$3;
							$$=$3;
							printf("\n---------------------------------------------------\n");
						
						} 
	| '-' '>' HEADER 		{
					printf("\nheader file declared\n");
					printf("\n---------------------------------------------------\n");

					
					}
	| '-' '>' DEFINE VAR expression ';' {
							sym[$4] = $5;
							$$=$5;
							printf("\nDefine declaration\n");
							printf("Preprocess for %c is %d\n",$4+'a',$5);  
							printf("\n---------------------------------------------------\n");

							}
	| VAR '>' VAR '?' '?' expression  expression ';'{
							printf("\n Ternary operators executed\n");
							if($1 > $3){
								printf("\nFirst expression is executed : %d\n",$5);
							}
							else{
								printf("\nSecond expression is executed : %d\n",$6);
							}
							printf("\n---------------------------------------------------\n");

						}
	| VAR '<' VAR '?''?' expression  expression ';'{
							printf("\n Ternary operators executed\n");
							if($1 < $3){
								printf("\nFirst one is executed : %d\n",$6);
							}
							else{
								printf("\nSecond one is executed : %d\n",$7);
							}
							printf("\n---------------------------------------------------\n");

						}
	| VAR '=' VAR '?' '?' expression  expression ';'{
							printf("\n Ternary operators executed\n");
							if($1 == $3){
								printf("\nFirst one is executed : %d\n",$6);
							}
							else{
								printf("\nSecond one is executed : %d\n",$7);
							}
							printf("\n---------------------------------------------------\n");

						}
	

	| MOD '(' NUM ',' NUM ')' ';'	{
								printf("\nMOD DEFINED!\n");
								printf("Remainder of %d divided by %d is : %d",$3,$5,$3%$5);
								printf("\n---------------------------------------------------\n");
								
		
							   }
	| ISDIVISIBLE '(' NUM ',' NUM ')' ';'{
									printf("\nISDIVISIBLE Function defined!\n");
									if($3%$5 == 0){
										printf("\n%d is divisible by %d\n",$3,$5);
									}
									else{
										printf("\n%d is not divisible by %d\n",$3,$5);
									}
									printf("\n---------------------------------------------------\n");

								}
	| OR '(' NUM ',' NUM ')' ';'	{
								printf("\nBITWISE OR OPERATION EXECUTED!\n");
								printf("BITWISE OR OF %d and %d is : %d",$3,$5,$3|$5);
								printf("\n---------------------------------------------------\n");
								
							   }
	| AND '(' NUM ',' NUM ')' ';'	{
								printf("\nBITWISE AND OPERATION EXECUTED!\n");
								printf("BITWISE AND OF %d and %d is : %d",$3,$5,$3&$5);
								printf("\n---------------------------------------------------\n");
								
							   }

	| XOR '(' NUM ',' NUM ')' ';'	{
								printf("\nBITWISE XOR OPERATION EXECUTED!\n");
								printf("BITWISE XOR OF %d and %d is : %d",$3,$5,$3^$5);
								printf("\n---------------------------------------------------\n");
								
							   }
	
	| ISGREATER '(' NUM ',' NUM ')' ';'	{
								printf("\nISGREAER EXECUTED!\n");
								if($3 > $5){
									printf("\nFirst argument is bettter than second argument!!\n");
								}
								else{
									printf("\First argument is not bettter than second argument !!\n");
								}
								printf("\n---------------------------------------------------\n");
							   }
	| ISLESS '(' NUM ',' NUM ')' ';'	{
								printf("\nISLESS Function EXECUTED!\n");
								if($3 < $5){
									printf("\nFirst argument is less than second argument!!\n");
								}
								else{
									printf("\First argument is not less than second argument !!\n");
								}
								printf("\n---------------------------------------------------\n");
							   }
	| ISEQUAL '(' NUM ',' NUM ')' ';'	{
								printf("\nISEQUAL Function EXECUTED!\n");
								if($3 == $5){
									printf("\nFirst argument is equal to the second argument!!\n");
								}
								else{
									printf("\First argument is not equal to the second argument !!\n");
								}
								printf("\n---------------------------------------------------\n");
							   }
			
	| POW '(' NUM ',' NUM ')' ';'   {
								
								printf("\nPOWER FUNCTION DEFINED!!\n");
								int x = pow($3,$5);
								printf("POWER OF %d to the power %d is : %d",$3,$5,x);
								printf("\n---------------------------------------------------\n");
							}
 
	| IF '(' expression ')' BRACKETSTART statement BRACKETEND %prec IFX {
								if($3){
									printf("\nvalue of expression in IF: %d\n",$6);
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}

								printf("\n---------------------------------------------------\n");
								
							}

	| IF '(' expression ')' BRACKETSTART statement BRACKETEND ELSE BRACKETSTART statement BRACKETEND {
								if($3){
									printf("value of expression in IF: %d\n",$6);
								}
								else{
									printf("value of expression in ELSE: %d\n",$11);
								}
								
								printf("\n---------------------------------------------------\n");
							}
	| FACTORIAL '(' NUM ')' ';' {
		printf("\nFACTORIAL declaration\n");
		int i;
		int ans=1;
		for(i=1;i<=$3;i++)
		{
			ans=ans*i;
		}
		printf("FACTORIAL of %d is : %d\n",$3,ans);
		printf("\n---------------------------------------------------\n");

		
		}
	
	| ODDEVEN '(' NUM ')' ';' {
		printf("Odd Even Number detection \n");

		if($3 %2 ==0){
			printf("Number : %d is -> Even\n",$3);
		}
		else{
			printf("Number is :%d is -> Odd\n",$3);
		}
		printf("\n---------------------------------------------------\n");
		
		}
	| PRINTFUNCTION '(' expression ')' ';' {
							printf("\nPrint Expression %d\n",$3);
							printf("\n---------------------------------------------------\n");
						}

	| FUNCTION VAR '(' ')' BRACKETSTART statement BRACKETEND {
		printf("FUNCTION found :  \n");
		printf("Function with no parameter has been called\n");
		printf("Function internal block statement : %d\n",$6);
		printf("\n---------------------------------------------------\n");
	}

	| FUNCTION VAR '(' expression ')' BRACKETSTART statement BRACKETEND {
		printf("FUNCTION found :  \n");
		printf("Function Parameter : %d\n",$4);
		printf("Function internal block statement : %d\n",$7);
		printf("\n---------------------------------------------------\n");
	}

	| FUNCTION VAR '(' expression ',' expression ')' BRACKETSTART statement BRACKETEND {
		printf("FUNCTION with two parameters found!  \n");
		printf("First parameter of this function is : %d\n",$4);
		printf("Second parameter of this function is : %d\n",$6);
		printf("Expression in the body of Function is : %d\n",$9);
		printf("\n---------------------------------------------------\n");
	}
	
	

	| ARRAY '-' '>' TYPE '-' '>' VAR '(' NUM ')' ';' {
		printf("ARRAY Declaration\n");
		printf("Size of the ARRAY is : %d\n",$9);

		printf("\n---------------------------------------------------\n");
	}

	| SWITCH '(' NUM ')' BRACKETSTART  SWITCHCASE BRACKETEND {
		printf("\nSWITCH CASE Declaration\n");
		printf("\nFinally Choose Case number :-> %d\n",$3);
		printf("\n---------------------------------------------------\n");
		
	}

	| STRUCT VAR BRACKETSTART statement BRACKETEND{
		printf("\nStruct Declaration\n");
		printf("\nName of the struct is : %c\n",$2+'a');
	    printf("\n---------------------------------------------------\n");

	}
	| CLASS VAR ':' PRIVATE BRACKETSTART statement BRACKETEND{
		printf("\nPRIVATE Class Declaration\n");
		printf("\nName of the struct is : %c\n",$2+'a');
		printf("Expression : %d\n",$6);
		printf("\n---------------------------------------------------\n");

		
	}
	| CLASS VAR ':' PUBLIC BRACKETSTART statement BRACKETEND{
		printf("\PUBLIC Class Declaration\n");
		printf("\nName of the class is : %c\n",$2+'a');
		printf("Expression : %d\n",$6);
		printf("\n---------------------------------------------------\n");


	}

	| CLASS VAR  BRACKETSTART statement BRACKETEND {
		printf("By Default Public Class Declaration\n");
		printf("Expression : %d\n",$4);
		printf("Name of the class is : %c\n",$2+'a');
		printf("\n---------------------------------------------------\n");

	
	}

	| CLASS VAR ':' VAR  BRACKETSTART statement BRACKETEND {

		printf("Declaration of class with inheritance Occur\n");
		printf("class %c is inherited from %c\n",$2+'a',$4+'a');
		printf("Name of the class is : %c\n",$2+'a');
		printf("\n---------------------------------------------------\n");

	}

	| FOR '(' NUM ',' NUM ',' NUM ')' BRACKETSTART  statement BRACKETEND {
	                                int i;
	                                printf("FOR Loop execution");
	                                for(i=$3 ; i<$5 ; i=i+$7 ) 
	                                {printf("\nvalue of the  i: %d expression value : %d\n", i,$10);}
									printf("\n---------------------------------------------------\n");

				        
				               }
	| WHILE '(' NUM '<' NUM ')' BRACKETSTART statement BRACKETEND  {
	                                int i;
	                                printf("WHILE Loop execution");
	                                for(i=$3 ; i<$5 ; i++) {printf("\nvalue of the loop: %d expression value: %d\n", i,$8);}
									printf("\n---------------------------------------------------\n");
				    
				               }
	| TRY BRACKETSTART  statement BRACKETEND  CATCH '(' expression ')' BRACKETSTART statement BRACKETEND{
		printf("TRY CATCH block found\n");
		printf("TRY Block operation : %d\n",$3);
		printf("CATCH Value : %d\n",$7);
		printf("Catch Block operation :%d\n",$10);
		printf("\n---------------------------------------------------\n");

		
	}

	
	;
	

	
declaration : TYPE ID1   {printf("\nvariable Dection\n");
						printf("\n---------------------------------------------------\n");
						}
            ;


TYPE : INT   {printf("interger declaration\n");}
     | FLOAT  {printf("float declaration\n");}
     | CHAR   {printf("char declaration\n");}
	 | BOOL   {printf("bool declaration\n");}
     ;



ID1 : ID1 ',' VAR  
    |VAR  
    ;

 SWITCHCASE: casegrammer
 			|casegrammer defaultgrammer
 			;

 casegrammer: /*empty*/
 			| casegrammer casenumber
 			;

 casenumber: CASE NUM ':' expression ';' {printf("Case No : %d & expression value :%d \n",$2,$4);}
 			;
 defaultgrammer: DEFAULT ':' expression ';' {
 				printf("\nDefault case & expression value : %d",$3);
 			}
 		;


expression: NUM					{ printf("\nNumber :  %d\n",$1 ); $$ = $1;  }

	| VAR						{ $$ = sym[$1]; }
	
	| expression '+' expression	{printf("\nAddition :%d+%d = %d \n",$1,$3,$1+$3 );  $$ = $1 + $3;}

	| expression '-' expression	{printf("\nSubtraction :%d-%d = %d \n ",$1,$3,$1-$3); $$ = $1 - $3; }

	| expression '*' expression	{printf("\nMultiplication :%d*%d = %d \n ",$1,$3,$1*$3); $$ = $1 * $3; }

	| expression '|' expression {printf("\nnBitwise Or operation of : %d|%d is -> %d \n ",$1,$3,$1|$3); $$ = $1 | $3;}

	| expression '&' expression {printf("\nBitwise AND operation of : %d&%d  -> %d\n",$1,$3,$1&$3); $$ = $1 & $3;}
	
	| expression '^' expression {printf("\nBitwise XOR operation of : %d^%d  -> %d\n",$1,$3,$1^$3); $$ = $1 ^ $3;}

	| expression '/' expression	{ if($3){
				     					printf("\nDivision :%d/%d \n ",$1,$3,$1/$3);
				     					$$ = $1 / $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\ndivision by zero\n\t");
				  					} 	
				    			}
	| expression '%' expression	{ if($3){
				     					printf("\nMod :%d % %d \n",$1,$3,$1 % $3);
				     					$$ = $1 % $3;
				     					
				  					}
				  					else{
										$$ = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			}
	| expression '<' expression	{printf("\nLess Than :%d < %d \n",$1,$3,$1 < $3); $$ = $1 < $3 ; }
	
	| expression '>' expression	{printf("\nGreater than :%d > %d \n ",$1,$3,$1 > $3); $$ = $1 > $3; }

	| '(' expression ')'		{	 $$ = $2; }
	
	;
%%


int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
	yyparse();

	printf("\n**********************************\n");

	printf("\nCOMPLETED! \n");

	return 0;
}