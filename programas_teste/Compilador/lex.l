%{

#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
void yyerror(char*);
void count();
void count2();
void msgErro();
%}

DIGIT            [0-9]
LETRA            [a-zA-Z]
IDEN            [a-zA-Z][a-zA-Z0-9_]*
WHITESPACE        [ \t\n\r]

%%

">"                {count(); return('>');}
">="                {count(); return(GE);}
"<"                {count(); return('<');}
"<="                {count(); return(LE);}
"=="                {count(); return(IGUAL);}
"!="                {count(); return(DIFERENTE);}
"="                {count(); return('=');}
","                {count(); return(',');}
"-"                {count(); return('-');}
"+"                {count(); return('+');}
"/"                {count(); return('/');}
"*"                {count(); return('*');}
"%"                {count(); return('%');}
"["                {count(); return('[');}
"]"                {count(); return(']');}
"}"                {count(); return('}');}
"{"                {count(); return('{');}
"("                {count(); return('(');}
")"                {count(); return(')');}
"&&"                {count(); return(AND);}
";"                {count(); return(';');}
"|"                {count(); return('|');}
"||"                {count(); return(OR);}
"->"                {count(); return(IMPLICA);}
"<->"                {count(); return(BIIMPLICA);}
"booleano"            {count(); return(TIPO_BOOLEANO);}        //TRATAR OS OUTROS CASOS
"flutuante"            {count(); return(TIPO_FLOAT);}
"caractere"            {count(); return(TIPO_CHAR);}
"string"            {count(); return(TIPO_STRING);}
"inteiro"            {count(); return(TIPO_INTEIRO);}
"programa"            {count(); return(PROGRAMA);}
"verdadeiro"            {count(); return(VERDADEIRO);}
"falso"                {count(); return(FALSO);}
"procedimento"            {count(); return(PROCEDIMENTO);}
"retorne"            {count(); return(RETORNE);}
"ate"                {count(); return(ATE);}
"enquanto"            {count(); return(ENQUANTO);}
"faca"                {count(); return(FACA);}
"leia"                {count(); return(LEIA);}
"escreva"            {count(); return(ESCREVA);}
"se"                {count(); return(SE);}
"senao"                {count(); return(SENAO);}

{DIGIT}+ {
    count();
    yylval.valor = malloc(sizeof(char) * yyleng);
    strcpy(yylval.valor, yytext); 
    return INTEIRO;
}

[0-9]+(\.[0-9]+)?(E[+\-]?[0-9]+)? {
    count(); 
    yylval.valor = malloc(sizeof(char) * yyleng);
    strcpy(yylval.valor, yytext); 
    return FLOAT;
}

\"(\\.|[^\\"])*\" {
    count(); 
    yylval.valor = malloc(sizeof(char) * yyleng);
    strcpy(yylval.valor, yytext); 
    return(STRING); 
}

\'(\\|[^\\"])\' {
    count(); 
    yylval.valor = malloc(sizeof(char) * yyleng);
    strcpy(yylval.valor, yytext); 

    return(CHAR); 
}

{IDEN}+ {
    count();
    yylval.valor = malloc(sizeof(char) * yyleng);
    strcpy(yylval.valor, yytext); 

    return(ID);
}

{WHITESPACE}+          		{count();}
[\0]                		{return(FIM);}
"//"(.|\t)*"\n"             {count2();}
"/*"(.|{WHITESPACE}*)*"*/"  {count2();}
.                 			{count(); msgErro(); return(ERRO);}

%%

int yywrap(void) {
    return 1;
}

int column = 0;
int linha = 1;

void msgErro()
{
    printf("Erro de sintaxe na linha %d: [%s]\n", linha, yytext);
}

void count()
{
    int i;

    for (i = 0; yytext[i] != '\0'; i++)
        if (yytext[i] == '\n'){
            column = 0;
            printf("\n");
            linha++;
        }
        else if (yytext[i] == '\t')
            column += 8 - (column % 8);
        else
                column++;
}

void count2()
{
    int i;

    for (i = 0; yytext[i] != '\0'; i++)
        if (yytext[i] == '\n'){
            column = 0;
            linha++;
        }
        else if (yytext[i] == '\t')
            column += 8 - (column % 8);
        else
            column++;
}




/*main() {
    char c;
    while((c = yylex()) != FIM){
        printf(" %c", c);        
    }
}*/



