%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "main.tab.h"
%}
variable [a-zA-Z]
digit [0-9]
comment   !.*

%%
"DEFINE" 		{return DEFINE;}
"CASE" 			{return CASE;}
"SWITCHCASE" 		{return SWITCH;}
"DEFAULTCASE" 		{return DEFAULT;}
{digit}+	   {yylval = atoi(yytext); return NUM; }
"PRINTFUNCTION" 	{return PRINTFUNCTION; } 
"IF" 			   {return IF;}
"ELSE" 		   {return ELSE; }
"{" 		   {return BRACKETSTART;  }
"}"  		   {return BRACKETEND;	}
"FSPIN" 		   {return FOR;}
"WSPIN"		   {return WHILE;}
"FACTORIAL"		{return FACTORIAL;}
"ISDIVISIBLE"	{return ISDIVISIBLE;}
"MOD"	       {return MOD;}
"OR"		   {return OR;}
"AND"		   {return AND;}
"XOR"			{return XOR;}
"POW"			{return POW;}
"ISGREATER"		   {return ISGREATER;}
"ISLESS"		{return ISLESS;}
"ISEQUAL"		{return ISEQUAL;}
"ODDEVEN"		{return ODDEVEN;}
"TAN"          {return TAN;}
"INTEGER"  		{return INT;}
"BOOL"			{return BOOL;}
"CHAR" 		     {return CHAR;}
"FLOAT"			 {return FLOAT;}
"ARRAY"			{return ARRAY;}
"TRY"			{return TRY;}
"CATCH"			{return CATCH;}
"FUNCTION"		{printf(" "); return FUNCTION;}
"STRUCT"		{return STRUCT;}
"CLASS"			{return CLASS;}
"PRIVATE"		{return PRIVATE;}
"PUBLIC"		{return PUBLIC;}
"STRCMP"			{return STRCMP;}
"MAIN"	   {printf("\nMain Function Start\n"); return MAIN; }
{comment}		{printf("\nSingle liness Comment found :: ");printf("\n");}
"IMPORT".*			{return HEADER;}
[-+/*<>=,():;%|&?^^]     {yylval = yytext[0];	return *yytext;	}
{variable}	    {printf("\n"); yylval = *yytext - 'a'; return	VAR; }
{variable}+     {yylval = atoi(yytext);printf("\nstring found!\n");return STRING;}
[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("\nUnknown Syntax : %s\n",yytext);}



%%