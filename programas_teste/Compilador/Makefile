all:
	yacc -d yacc.y
	lex lex.l
	gcc lex.yy.c y.tab.c -o bas.exe

clean:
	rm -rf lex.yy.c y.tab.c y.tab.h bas.exe
