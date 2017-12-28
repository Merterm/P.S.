#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "ps.y"
 
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
#line 32 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define END_OF_PRGM 257
#define END_OF_MAIN 258
#define MAIN 259
#define FUNCTION 260
#define FUNCT_NAME 261
#define END_OF_DEF 262
#define USR_DEF_SHAPE 263
#define USR_SHAPE_NAME 264
#define INHERITANCE 265
#define ID 266
#define DRAW 267
#define SHAPE 268
#define END_OF_INPUT 269
#define POSITION 270
#define POS_X_POS_Y 271
#define WIDTH 272
#define NUM 273
#define HEIGHT 274
#define STROKE 275
#define COLOR 276
#define RND_CRNRS 277
#define NAME 278
#define START 279
#define END 280
#define ARROW_STRT 281
#define ARROW_END 282
#define DIR 283
#define DIR_VAL 284
#define RED 285
#define BLUE 286
#define GREEN 287
#define YELLOW 288
#define BLACK 289
#define WHITE 290
#define IF 291
#define PARAMETER 292
#define AND 293
#define OR 294
#define GRTR 295
#define LESS 296
#define LOG_EQ 297
#define GRTR_EQ 298
#define LESS_EQ 299
#define ELSE 300
#define ASSIGNMENT 301
#define BEGIN_OF_BLOCK 302
#define END_OF_BLOCK 303
#define WHILE 304
#define FOR 305
#define RETURN 306
#define TRUE 307
#define FALSE 308
#define USR_DEF_VAR 309
#define OP 310
#define ACCESS 311
#define PARAM_DELIM 312
#define FILL_STATE 313
#define FILL_COLOR 314
#define BORDR_STATE 315
#define BORDR_COLR 316
#define TYPECAST 317
#define STRING 318
#define CHAR 319
#define RGB 320
#define USR_DEF_PARAM 321
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    2,    2,    2,    2,    1,    1,    1,    3,
    3,    6,    6,    6,    8,    8,    8,    8,   10,   10,
   16,    5,   15,   15,    7,   17,   17,   18,   18,   18,
   19,   19,    9,    9,    9,   20,   20,   14,   22,   22,
   21,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   21,   21,   21,   21,   21,
   23,   23,   24,   24,   24,   24,   24,   24,   24,   11,
   25,   28,   28,   28,   27,   29,   29,   29,   29,   29,
   29,   26,   26,   30,   30,   13,   13,   31,   31,   31,
   31,   31,   31,   32,   32,    4,    4,    4,   12,   12,
   33,   33,   34,   34,
};
static const short yylen[] = {                            2,
    2,    2,    2,    1,    1,    0,    3,    2,    2,    2,
    2,    1,    1,    0,    2,    2,    2,    2,    1,    0,
    0,   17,    1,    1,   10,    4,    2,    2,    1,    1,
    4,    0,    2,    2,    1,    2,    2,    2,    2,    1,
    2,    2,    2,    2,    2,    1,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    0,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    5,
    2,    2,    2,    0,    2,    2,    2,    2,    2,    2,
    0,    2,    2,    4,    0,    3,    4,    1,    1,    1,
    1,    1,    2,    1,    1,    3,    2,    2,    5,    4,
    1,    1,    2,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   35,    2,    0,
    0,    0,    0,    0,    0,   46,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   33,
    0,    0,   34,   37,    0,    0,    0,    0,    1,    8,
   97,   19,   15,   16,   17,   18,    7,   41,   62,   61,
   42,   43,   44,   63,   64,   65,   66,   67,   68,   69,
   45,   47,   48,   49,   50,   51,   52,   89,   88,   90,
   91,    0,   92,   86,    0,   53,   54,   55,   56,   57,
   58,   59,   40,    0,   38,   36,    0,    0,    0,    0,
   96,    0,   95,   94,   93,   87,   39,  102,    0,  100,
    0,    0,    0,    0,    0,   75,    0,    0,    0,   71,
    0,   76,   77,   78,   79,   80,    0,    0,   70,   72,
   73,   99,    0,   83,   82,    0,    0,   84,
};
static const short yydgoto[] = {                         10,
   11,    0,    0,   12,    0,    0,    0,   13,   14,   53,
   15,   16,   17,   40,    0,    0,    0,    0,    0,   18,
   41,   95,   61,   83,   99,  129,  100,  120,  116,  134,
   84,  105,  110,    0,
};
static const short yysindex[] = {                       -35,
  -19, -179, -215, -248, -138, -288, -236, -188, -211,    0,
  -35, -161, -201, -188, -188, -188, -188,    0,    0, -149,
 -160, -254, -254, -254, -135,    0, -153, -154, -151, -150,
 -147, -166, -262, -142, -224, -135, -203, -135, -144,    0,
 -239, -138,    0,    0, -159, -119, -143, -119,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -244,    0,    0, -262,    0,    0,    0,    0,    0,
    0,    0,    0, -108,    0,    0, -179, -168, -121, -240,
    0, -112,    0,    0,    0,    0,    0,    0, -201,    0,
 -119, -119, -119, -119, -119,    0, -179, -119, -119,    0,
 -179,    0,    0,    0,    0,    0, -118, -287,    0,    0,
    0,    0, -188,    0,    0, -116, -179,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,  -83,    0,  -83,    0,    0,    0,    0,    0,
    0,    0,    0, -253, -253, -253, -253,    0,    0,  -13,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -83,    0,    0,    0,    0, -110,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -223,    0, -105,
    0,    0,    0,    0,    0,    0,    0,    0,  -94,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -55,  -39,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                       177,
    0,    0,    0,   -2,    0,    0,    0,   -7,    0,   76,
    0,    0,    0,   10,    0,    0,    0,    0,    0,  185,
    0,    0,   84,   -4,  -46,    0,   55,    0,    0,   63,
  108,    0,   74,    0,
};
#define YYTABLESIZE 291
static const short yytable[] = {                         20,
   47,  102,   20,   78,   20,   20,   52,   52,   52,   52,
   79,   59,  133,   19,   44,   51,   45,   42,   60,    5,
   71,  103,   64,   65,   66,   67,   68,   69,  104,   93,
   21,   88,   22,   91,   23,   24,   25,   26,   27,   28,
   29,   30,   31,   32,   80,   81,   20,   82,   20,   20,
   94,   96,  118,  119,   21,   46,   22,   70,   23,   24,
   25,   26,   27,   28,   29,   30,   31,   32,   81,   81,
   81,  130,  131,   35,   36,   37,   38,    3,    4,    5,
   48,   39,   86,   87,    6,   33,    3,    4,    5,  109,
   54,   55,   56,    6,  108,   34,   50,   35,   36,   37,
   38,   51,    7,   89,   90,   39,   62,   63,   57,  128,
   58,    7,   72,  109,  127,    9,   73,   77,  108,   74,
   75,   92,    8,   76,    9,  136,  111,  112,  113,  114,
  115,   21,   97,   22,  138,   23,   24,   25,   26,   27,
   28,   29,   30,   31,   32,   98,   98,   98,   98,   64,
   65,   66,   67,   68,   69,   98,   98,   98,   85,  101,
  107,  101,   98,  101,  101,  122,  123,  124,  125,  126,
  117,  101,  101,  101,   35,   36,   37,   38,  101,  121,
   98,  133,   39,  137,   70,   60,   74,   49,   43,   98,
  135,   98,  106,   98,  132,    0,  101,    0,    0,    0,
   85,    0,   85,   85,    0,  101,    0,  101,    0,  101,
   85,   85,   85,    0,    0,    0,   85,   85,   85,   85,
    1,    0,    0,    2,    0,    0,   85,   85,   85,    0,
    3,    4,    5,   85,    0,   85,    0,    6,    0,    0,
    0,    0,    9,    0,    0,    9,   85,   85,   85,    0,
    0,   85,    9,    9,    9,    7,    0,    0,    0,    9,
    0,    0,   85,    0,   85,    0,    8,    0,    9,    0,
    0,    0,    0,    0,    0,    0,    0,    9,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    9,    0,
    9,
};
static const short yycheck[] = {                          2,
    8,   48,  256,  266,  258,  259,   14,   15,   16,   17,
  273,  266,  300,   33,    5,  303,  305,  266,  273,  268,
   25,  266,  285,  286,  287,  288,  289,  290,  273,  269,
  270,   36,  272,   38,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  307,  308,  300,  310,  302,  303,
   41,   42,  293,  294,  270,  292,  272,  320,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  292,  293,
  294,  118,  119,  313,  314,  315,  316,  266,  267,  268,
  292,  321,  307,  308,  273,  301,  266,  267,  268,   97,
   15,   16,   17,  273,   97,  311,  258,  313,  314,  315,
  316,  303,  291,  307,  308,  321,   23,   24,  258,  117,
  271,  291,  266,  121,  117,  304,  271,  284,  121,  271,
  271,  266,  302,  271,  304,  133,  295,  296,  297,  298,
  299,  270,  292,  272,  137,  274,  275,  276,  277,  278,
  279,  280,  281,  282,  283,  256,  266,  258,  259,  285,
  286,  287,  288,  289,  290,  266,  267,  268,  301,  303,
  269,  256,  273,  258,  259,  111,  112,  113,  114,  115,
  292,  266,  267,  268,  313,  314,  315,  316,  273,  292,
  291,  300,  321,  300,  320,  269,  292,   11,    4,  300,
  128,  302,   85,  304,  121,   -1,  291,   -1,   -1,   -1,
  256,   -1,  258,  259,   -1,  300,   -1,  302,   -1,  304,
  266,  267,  268,   -1,   -1,   -1,  256,  273,  258,  259,
  256,   -1,   -1,  259,   -1,   -1,  266,  267,  268,   -1,
  266,  267,  268,  273,   -1,  291,   -1,  273,   -1,   -1,
   -1,   -1,  256,   -1,   -1,  259,  302,  303,  304,   -1,
   -1,  291,  266,  267,  268,  291,   -1,   -1,   -1,  273,
   -1,   -1,  302,   -1,  304,   -1,  302,   -1,  304,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  291,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  302,   -1,
  304,
};
#define YYFINAL 10
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 321
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"END_OF_PRGM","END_OF_MAIN",
"MAIN","FUNCTION","FUNCT_NAME","END_OF_DEF","USR_DEF_SHAPE","USR_SHAPE_NAME",
"INHERITANCE","ID","DRAW","SHAPE","END_OF_INPUT","POSITION","POS_X_POS_Y",
"WIDTH","NUM","HEIGHT","STROKE","COLOR","RND_CRNRS","NAME","START","END",
"ARROW_STRT","ARROW_END","DIR","DIR_VAL","RED","BLUE","GREEN","YELLOW","BLACK",
"WHITE","IF","PARAMETER","AND","OR","GRTR","LESS","LOG_EQ","GRTR_EQ","LESS_EQ",
"ELSE","ASSIGNMENT","BEGIN_OF_BLOCK","END_OF_BLOCK","WHILE","FOR","RETURN",
"TRUE","FALSE","USR_DEF_VAR","OP","ACCESS","PARAM_DELIM","FILL_STATE",
"FILL_COLOR","BORDR_STATE","BORDR_COLR","TYPECAST","STRING","CHAR","RGB",
"USR_DEF_PARAM","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : letter_declaration",
"letter_declaration : main_declaration letter_declaration",
"letter_declaration : error '!'",
"letter_tail : post_declaration END_OF_PRGM",
"letter_tail : END_OF_PRGM",
"letter_tail : post_declaration",
"letter_tail :",
"main_declaration : MAIN block_statement END_OF_MAIN",
"main_declaration : block_statement END_OF_MAIN",
"main_declaration : MAIN block_statement",
"post_declaration : ps post_tail",
"post_declaration : pps post_tail",
"post_tail : ps",
"post_tail : pps",
"post_tail :",
"statement : functional_statement statement_tail",
"statement : if_statement statement_tail",
"statement : loop_statement statement_tail",
"statement : assignment statement_tail",
"statement_tail : statement",
"statement_tail :",
"$$1 :",
"ps : FUNCTION FUNCT_NAME ID expression END_OF_DEF ps_statement FUNCTION ID expression END_OF_DEF ps_statement $$1 FUNCTION FUNCT_NAME ID expression ps_statement",
"ps_statement : statement",
"ps_statement : block_statement",
"pps : USR_DEF_SHAPE USR_SHAPE_NAME ID expression pps_tail FUNCTION USR_SHAPE_NAME ID expression pps_tail",
"pps_tail : INHERITANCE ID END_OF_DEF pps_statement",
"pps_tail : END_OF_DEF pps_statement",
"pps_statement : user_def_variable pps_statement",
"pps_statement : statement",
"pps_statement : block_statement",
"user_def_variable : ID USR_DEF_VAR ID expression",
"user_def_variable :",
"functional_statement : ID expression",
"functional_statement : DRAW functional_tail",
"functional_statement : functional_tail",
"functional_tail : ID expression",
"functional_tail : SHAPE expression",
"expression : parameter expression_tail",
"expression_tail : expression END_OF_INPUT",
"expression_tail : END_OF_INPUT",
"parameter : POSITION POS_X_POS_Y",
"parameter : WIDTH term",
"parameter : HEIGHT term",
"parameter : STROKE term",
"parameter : COLOR color",
"parameter : RND_CRNRS",
"parameter : NAME ID",
"parameter : START POS_X_POS_Y",
"parameter : END POS_X_POS_Y",
"parameter : ARROW_STRT POS_X_POS_Y",
"parameter : ARROW_END POS_X_POS_Y",
"parameter : DIR DIR_VAL",
"parameter : FILL_STATE TRUE",
"parameter : FILL_STATE FALSE",
"parameter : FILL_COLOR color",
"parameter : BORDR_STATE TRUE",
"parameter : BORDR_STATE FALSE",
"parameter : BORDR_COLR color",
"parameter : USR_DEF_PARAM ID",
"parameter :",
"term : NUM",
"term : ID",
"color : RED",
"color : BLUE",
"color : GREEN",
"color : YELLOW",
"color : BLACK",
"color : WHITE",
"color : RGB",
"if_statement : IF PARAMETER conditional PARAMETER if_tail",
"conditional : condition conditional_tail",
"conditional_tail : AND conditional",
"conditional_tail : OR conditional",
"conditional_tail :",
"condition : ID condition_tail",
"condition_tail : GRTR condition",
"condition_tail : LESS condition",
"condition_tail : LOG_EQ condition",
"condition_tail : GRTR_EQ condition",
"condition_tail : LESS_EQ condition",
"condition_tail :",
"if_tail : statement else_tail",
"if_tail : block_statement else_tail",
"else_tail : ELSE statement ELSE block_statement",
"else_tail :",
"assignment : ID ASSIGNMENT assignment_tail",
"assignment : ID ACCESS ASSIGNMENT assignment_tail",
"assignment_tail : NUM",
"assignment_tail : ID",
"assignment_tail : TRUE",
"assignment_tail : FALSE",
"assignment_tail : color",
"assignment_tail : OP operand",
"operand : NUM",
"operand : ID",
"block_statement : BEGIN_OF_BLOCK statement END_OF_BLOCK",
"block_statement : statement END_OF_BLOCK",
"block_statement : BEGIN_OF_BLOCK statement",
"loop_statement : WHILE PARAMETER conditional PARAMETER loop_tail",
"loop_statement : NUM FOR PARAMETER loop_tail",
"loop_tail : statement",
"loop_tail : block_statement",
"return_statement : RETURN ID",
"return_statement : RETURN NUM",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 295 "ps.y"

int main(void) {
	yyparse();
	return 0;
}
#line 460 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 5:
#line 93 "ps.y"
	{yyerror ("No exclamation mark to denote the end of file!");}
break;
case 6:
#line 94 "ps.y"
	{yyerror ("No exclamation mark to denote the end of file!");}
break;
case 8:
#line 99 "ps.y"
	{yyerror ("Main should start with Dear Kakubo!");}
break;
case 9:
#line 100 "ps.y"
	{yyerror ("Main should end with Best Wishes!");}
break;
case 21:
#line 128 "ps.y"
	{yyerror ("P.S. should start with I defined!");}
break;
case 22:
#line 129 "ps.y"
	{yyerror ("P.S. should end with as the following!");}
break;
case 25:
#line 139 "ps.y"
	{yyerror ("P.S. used instead of P.P.S.!");}
break;
case 35:
#line 161 "ps.y"
	{yyerror ("Draw keyword missing in draw function!");}
break;
case 97:
#line 275 "ps.y"
	{yyerror ("Block does not begin with Please!");}
break;
case 98:
#line 276 "ps.y"
	{yyerror ("Block does not end with Thank You!");}
break;
#line 702 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
