Essa pasta contém os 3 arquivos necessários para o compilador.

Dados.h, que possui as implementações referentes à geração de código e a Tabela de Símbolos.
yacc.y, que possui a implementação do analisador sintático.
lex.l, que possui a implementação do analisador léxico.

Para executar o compilador, basta abrir o Terminal do Gnome, certificar-se de que você está nesse diretório e executar o comando

make

para compilar os arquivos e gerar o compilador a partir do Makefile.

caso o Makefile não funcione (o que seria estranho), basta executar os seguintes comandos no terminal:

yacc -d yacc.y
lex lex.l
gcc lex.yy.c y.tab.c -o bas.exe

para executar o compilador, utilize o comando:

./bas.exe


