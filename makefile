CC = gcc
LEX = flex
YACC = yacc
CFLAGS = -Wall -g

all: compiler

compiler: scanner.o parser.o symbol_table.o
	$(CC) $(CFLAGS) -o compiler scanner.o parser.o symbol_table.o -ll

scanner.o: scanner.l
	$(LEX) scanner.l
	$(CC) $(CFLAGS) -c lex.yy.c -o scanner.o

parser.o: parser.y
	$(YACC) -d -v parser.y
	$(CC) $(CFLAGS) -c y.tab.c -o parser.o

symbol_table.o: symbol_table.c
	$(CC) $(CFLAGS) -c symbol_table.c -o symbol_table.o

clean:
	rm -f *.o compiler lex.yy.c y.tab.c y.tab.h

run: compiler
	./compiler < input.txt
