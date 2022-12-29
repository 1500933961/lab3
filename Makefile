all: calc.tab.c lex.yy.c main.c ast.h ast.c
	gcc lex.yy.c calc.tab.c ast.c main.c -o calc.exe
lex.yy.c: calc.l calc.tab.h
	flex calc.l
calc.tab.c: calc.y ast.h ast.c
	bison -d calc.y


.PHONY : clean
clean:
	$(RM) *.o *.exe calc.tab.c calc.tab.h lex.yy.c
