simple:	simple.tab.c simple.lex.c
	gcc -o simple simple.tab.c lex.yy.c -lm
simple.tab.c:	simple.y
	bison -dv simple.y
simple.lex.c:	simple.l
	flex simple.l
clean:
	rm  simple.tab.c simple.tab.h simple.output lex.yy.c simple
