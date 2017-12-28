%{ 
	#include <stdio.h>
	#include <iostream>
	int yylex(void);
	void yyerror(const char *s) {
		fprintf (stderr, "%s\n", s);
		printf("\n");
		printf("\n");
		printf(s);
		printf("\n");
		printf("\n");
	}
%}

%token END_OF_PRGM
%token END_OF_MAIN
%token MAIN
%token FUNCTION
%token FUNCT_NAME
%token END_OF_DEF
%token USR_DEF_SHAPE
%token USR_SHAPE_NAME
%token INHERITANCE
%token ID
%token DRAW
%token SHAPE
%token END_OF_INPUT
%token POSITION
%token POS_X_POS_Y
%token WIDTH
%token NUM
%token HEIGHT
%token STROKE
%token COLOR
%token RND_CRNRS
%token NAME
%token START
%token END
%token ARROW_STRT
%token ARROW_END
%token DIR
%token DIR_VAL
%token RED
%token BLUE
%token GREEN
%token YELLOW
%token BLACK
%token WHITE
%token IF
%token PARAMETER
%token AND
%token OR
%token GRTR
%token LESS
%token LOG_EQ
%token GRTR_EQ
%token LESS_EQ
%token ELSE
%token ASSIGNMENT
%token BEGIN_OF_BLOCK
%token END_OF_BLOCK
%token WHILE
%token FOR
%token RETURN
%token TRUE
%token FALSE
%token USR_DEF_VAR
%token OP
%token ACCESS
%token PARAM_DELIM
%token FILL_STATE
%token FILL_COLOR
%token BORDR_STATE
%token BORDR_COLR
%token TYPECAST
%token STRING
%token CHAR
%token RGB
%token USR_DEF_PARAM

%start letter_declaration

%%

letter_declaration:
					main_declaration letter_declaration
					|error '!'
					;

letter_tail:		
					post_declaration END_OF_PRGM
					| END_OF_PRGM
					| post_declaration {yyerror ("No exclamation mark to denote the end of file!");}
					| {yyerror ("No exclamation mark to denote the end of file!");}
					;

main_declaration:
					MAIN block_statement END_OF_MAIN
					| block_statement END_OF_MAIN {yyerror ("Main should start with Dear Kakubo!");}
					| MAIN block_statement {yyerror ("Main should end with Best Wishes!");}
					;

post_declaration:
					ps post_tail
					| pps post_tail
					;

post_tail:
					ps
					| pps
					|
					;

statement:
					functional_statement statement_tail
					| if_statement statement_tail
					| loop_statement statement_tail
					| assignment statement_tail
					;

statement_tail:
					statement
					|
					;

ps:
					FUNCTION FUNCT_NAME ID expression END_OF_DEF ps_statement
					FUNCTION ID expression END_OF_DEF ps_statement {yyerror ("P.S. should start with I defined!");}
					FUNCTION FUNCT_NAME ID expression ps_statement {yyerror ("P.S. should end with as the following!");}
					;

ps_statement:
					statement
					| block_statement
					;

pps:
					USR_DEF_SHAPE USR_SHAPE_NAME ID expression pps_tail
					FUNCTION USR_SHAPE_NAME ID expression pps_tail {yyerror ("P.S. used instead of P.P.S.!");}
					;

pps_tail:
					INHERITANCE ID END_OF_DEF pps_statement
					| END_OF_DEF pps_statement
					;

pps_statement:		
					user_def_variable pps_statement						
					| statement
					| block_statement
					;

user_def_variable:
					ID USR_DEF_VAR ID expression
					|
					;

functional_statement:
					ID expression
					| DRAW functional_tail
					| functional_tail {yyerror ("Draw keyword missing in draw function!");}
					;

functional_tail:
					ID expression
					| SHAPE expression
					;

expression:
					parameter expression_tail
					;

expression_tail:	
					expression END_OF_INPUT
					| END_OF_INPUT
					;

parameter:	
					POSITION POS_X_POS_Y
					| WIDTH term
					| HEIGHT term
					| STROKE term
					| COLOR color
					| RND_CRNRS
					| NAME ID
					| START POS_X_POS_Y
					| END POS_X_POS_Y
					| ARROW_STRT POS_X_POS_Y
					| ARROW_END POS_X_POS_Y
					| DIR DIR_VAL
					| FILL_STATE TRUE
					| FILL_STATE FALSE
					| FILL_COLOR color
					| BORDR_STATE TRUE
					| BORDR_STATE FALSE
					| BORDR_COLR color
					| USR_DEF_PARAM ID
					|
					;

term:
					NUM
					| ID
					;

color:
					RED
					| BLUE
					| GREEN
					| YELLOW
					| BLACK
					| WHITE
					| RGB
					;

if_statement:
					IF PARAMETER conditional PARAMETER if_tail
					;

conditional:
					condition conditional_tail
					;

conditional_tail:
					AND conditional
					| OR conditional
					|
					;

condition:
					ID condition_tail
					;

condition_tail:	
					GRTR condition
					| LESS condition
					| LOG_EQ condition
					| GRTR_EQ condition
					| LESS_EQ condition
					|
					;

if_tail:
					statement else_tail
					| block_statement else_tail
					;

else_tail:
					ELSE statement
					ELSE block_statement
					|
					;

assignment:
					ID ASSIGNMENT assignment_tail
					| ID ACCESS ASSIGNMENT assignment_tail
					;

assignment_tail:	
					NUM
					| ID
					| TRUE
					| FALSE
					| color
					| OP operand
					;

operand:
					NUM
					| ID
					;

block_statement:
					BEGIN_OF_BLOCK statement END_OF_BLOCK
					| statement END_OF_BLOCK {yyerror ("Block does not begin with Please!");}
					| BEGIN_OF_BLOCK statement {yyerror ("Block does not end with Thank You!");}
					;

loop_statement:
					WHILE PARAMETER conditional PARAMETER loop_tail
					| NUM FOR PARAMETER loop_tail
					;

loop_tail:
					statement
					| block_statement
					;

return_statement:
					RETURN ID
					| RETURN NUM
					;

%%

int main(void) {
	yyparse();
	return 0;
}
