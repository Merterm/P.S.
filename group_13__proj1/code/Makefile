CC     = g++
CXX    = g++
LEX    = flex
PROG   = ps

all: $(PROG)

lex.yy.c: $(PROG).l
	$(LEX) $(PROG).l  

$(PROG): lex.yy.c
	$(CXX) -o $(PROG) lex.yy.c -ll

test: ../samples/sample1.txt ../samples/sample2.txt ../samples/sample3.txt
	cat ../samples/sample1.txt | ./$(PROG)
	cat ../samples/sample2.txt | ./$(PROG)
	cat ../samples/sample3.txt | ./$(PROG)

clean:
	-rm -f lex.yy.c
	-rm -f $(PROG)

