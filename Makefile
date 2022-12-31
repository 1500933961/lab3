all: calc.tab.c lex.yy.c main.c ast.h ast.c
	#gcc lex.yy.c calc.tab.c ast.c main.c -o calc.exe
	gcc lex.yy.c calc.tab.c ast.c main.c -g 
lex.yy.c: calc.l calc.y 
	flex calc.l
calc.tab.c: calc.y ast.h ast.c
	bison -d calc.y


.PHONY : clean
clean:
	$(RM) *.o *.exe *.out calc.tab.c calc.tab.h lex.yy.c
