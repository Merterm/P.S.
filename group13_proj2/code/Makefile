CC     = g++
CXX    = g++
LEX    = flex
YACC   = byacc -d
PROG   = parser
PS     = ps

all: $(PROG)

lex.yy.c: $(PS).l
	$(LEX) $(PS).l  

y.tab.c: $(PS).y
	$(YACC) $(PS).y

$(PROG): lex.yy.c y.tab.c
	$(CXX) -o $(PROG) y.tab.c lex.yy.c -ll

test: ../samples/error1.txt ../samples/error2.txt ../samples/error3.txt ../samples/error4.txt ../samples/error5.txt ../samples/error6.txt ../samples/error7.txt ../samples/error8.txt ../samples/error9.txt ../samples/error10.txt ../samples/1_bundle_of_grapes.txt ../samples/2_house.txt ../samples/3_chain.txt
	cat ../samples/error1.txt | ./$(PROG)
	cat ../samples/error2.txt | ./$(PROG)
	cat ../samples/error3.txt | ./$(PROG)
	cat ../samples/error4.txt | ./$(PROG)
	cat ../samples/error5.txt | ./$(PROG)
	cat ../samples/error6.txt | ./$(PROG)
	cat ../samples/error7.txt | ./$(PROG)
	cat ../samples/error8.txt | ./$(PROG)
	cat ../samples/error9.txt | ./$(PROG)
	cat ../samples/error10.txt | ./$(PROG)
	cat ../samples/1_bundle_of_grapes.txt | ./$(PROG)
	cat ../samples/2_house.txt | ./$(PROG)
	cat ../samples/3_chain.txt | ./$(PROG)

clean:
	-rm -f lex.yy.c
	-rm -f y.tab.c
	-rm -f y.tab.h
	-rm -f $(PROG)

