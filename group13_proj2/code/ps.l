%{
	#include <string>
	#include <iostream>
	#include "y.tab.h"
	using namespace std;
	int commentLevel = 0;
%}

%x IN_COMMENT

/*Definitions of Some Basic Tokens */
INT	[0-9]+
FLOAT	0"."[0-9]+
CHAR	[a-zA-Z\-\\\*]
ID	[a-zA-Z\-\\\*]+
NUM	"["({INT}|{FLOAT})"]"
POS	\[({INT}|{FLOAT}|{ID}),({INT}|{FLOAT}|{ID})\]
RGB	\[({INT}|{FLOAT}|{ID}),({INT}|{FLOAT}|{ID}),({INT}|{FLOAT}|{ID})\]	 

%%

<INITIAL>("d"|"D")"ear "("k"|"K")"akubo"[,]?			{printf("<MAIN>"); return MAIN;}
<INITIAL>("p"|"P")"lease"[,]?							{printf("<BEGIN_OF_BLOCK>"); return BEGIN_OF_BLOCK;}
<INITIAL>("t"|"T")"hank you"["."]?						{printf("<END_OF_BLOCK>"); return END_OF_BLOCK;}
<INITIAL>[\!] 											{printf("<END_OF_PRGM>"); return END_OF_PRGM;}
<INITIAL>"."											{printf("<END_OF_INPUT>"); return END_OF_INPUT;}
<INITIAL>("b"|"B")"est "("w"|"W")"ishes"["."]?			{printf("<END_OF_MAIN>"); return END_OF_MAIN;}
<INITIAL>"P.S."											{printf("<FUNCTION>"); return FUNCTION;}
<INITIAL>"P.P.S."										{printf("<USR_DEF_SHAPE>"); return USR_DEF_SHAPE;}
<INITIAL>("I"|"i")" defined the function"				{printf("<FUNCT_NAME>"); return FUNCT_NAME;}
<INITIAL>"as the following:"							{printf("<END_OF_DEF>"); return END_OF_DEF;}
<INITIAL>"which is a"									{printf("<INHERITANCE>"); return INHERITANCE;}
<INITIAL>("R"|"r")"eturn"								{printf("<RETURN>"); return RETURN;}
<INITIAL>("I"|"i")" defined"							{printf("<USR_SHAPE_NAME>"); return USR_SHAPE_NAME;}
<INITIAL>"also"											{printf("<PARAM_DELIM>"); return PARAM_DELIM;}
<INITIAL>("d"|"D")"raw"									{printf("<DRAW>"); return DRAW;}
<INITIAL>"position"										{printf("<POSITION>"); return POSITION;}
<INITIAL>"width"										{printf("<WIDTH>"); return WIDTH;}
<INITIAL>"height"										{printf("<HEIGHT>"); return HEIGHT;}
<INITIAL>"stroke"										{printf("<STROKE>"); return STROKE;}
<INITIAL>"color"										{printf("<COLOR>"); return COLOR;}
<INITIAL>"fill state"									{printf("<FILL_STATE>"); return FILL_STATE;}
<INITIAL>"fill color"									{printf("<FILL_COLOR>"); return FILL_COLOR;}
<INITIAL>"border state"									{printf("<BORDR_STATE>"); return BORDR_STATE;}
<INITIAL>"border color" 								{printf("<BORDR_COLR>"); return BORDR_COLR;}
<INITIAL>"red"											{printf("<RED>"); return RED;}
<INITIAL>"blue"											{printf("<BLUE>"); return BLUE;}
<INITIAL>"green"										{printf("<GREEN>"); return GREEN;}
<INITIAL>"yellow"										{printf("<YELLOW>"); return YELLOW;}
<INITIAL>"black"										{printf("<BLACK>"); return BLACK;}
<INITIAL>"white"										{printf("<WHITE>"); return WHITE;}
<INITIAL>"rounded corners"								{printf("<RND_CRNRS>"); return RND_CRNRS;}
<INITIAL>"name"											{printf("<NAME>"); return NAME;}
<INITIAL>"start"										{printf("<START>"); return  START;}
<INITIAL>"end"											{printf("<END>"); return END;}
<INITIAL>"arrow start"									{printf("<ARROW_STRT>"); return ARROW_STRT;}
<INITIAL>"arrow end"																	{printf("<ARROW_END>"); return ARROW_END;}
<INITIAL>("o"|"O")"val"|("r"|"R")"ectangle"|("l"|"L")"ine"								{printf("<SHAPE>"); return SHAPE;}
<INITIAL>"direction"																	{printf("<DIR>"); return DIR;}
<INITIAL>("N"|"W"|"S"|"E"|"NW"|"NE"|"SW"|"SE")											{printf("<DIR_VAL>"); return DIR_VAL;}
<INITIAL>"~"("character"|"char"|"integer"|"int")"~"										{printf("<TYPECAST>"); return TYPECAST;}
<INITIAL>"if"|"with the condition that"|"in case of"|"in case that"|"on the occasion"	{printf("<IF>"); return IF;}
<INITIAL>"else"|"if not"																{printf("<ELSE>"); return ELSE;}
<INITIAL>[\+|\-|\*|\/|\%]|"add"|"plus"|"minus"|"subtract"|"multiply"|"divide"|"modulo"	{printf("<OP>"); return OP;}
<INITIAL>("T"|"t")"rue"																	{printf("<TRUE>"); return TRUE;}
<INITIAL>("F"|"f")"alse"																{printf("<FALSE>"); return FALSE;}
<INITIAL>("greater"|"bigger"|"larger")"than"|[>]										{printf("<GRTR>"); return GRTR;}
<INITIAL>("smaller"|"less")"than"|[<]													{printf("<LESS>"); return LESS;}
<INITIAL>[\=]|"is"|"assign"																{printf("<ASSIGNMENT>"); return ASSIGNMENT;}
<INITIAL>"is equal to"|[\=\=]															{printf("<LOG_EQ>"); return LOG_EQ;}
<INITIAL>"is "("greater"|"bigger"|"larger")" than or equal to"|">="						{printf("<GRTR_EQ>"); return GRTR_EQ;}
<INITIAL>"is "("less"|"smaller")" than or equal to"|"<="								{printf("<LESS_EQ>"); return LESS_EQ;}
<INITIAL>"&&"|"and"																		{printf("<AND>"); return AND;}
<INITIAL>"||"|"or"																		{printf("<OR>"); return OR;}
<INITIAL>"times"																		{printf("<FOR>"); return FOR;}
<INITIAL>("U"|"u")"ntil"																{printf("<WHILE>"); return WHILE;}
<INITIAL>"["({INT}|{FLOAT})"]"															{printf("<NUM>"); return NUM;}
<INITIAL>\"([^\"\\\n]|\\\"|\\n|\\t|\\\\)*\" 											{printf("<STRING>"); return STRING;}
<INITIAL>\'{CHAR}\'																		{printf("<CHAR>"); return CHAR;}
<INITIAL>{RGB}																			{printf("<RGB>"); return RGB;}
<INITIAL>{POS}																			{printf("<POS_X_POS_Y>"); return POS_X_POS_Y;}
<INITIAL>","																			{printf("<PARAMETER>"); return PARAMETER;}
<INITIAL>"with"																			{printf("<USR_DEF_PARAM>"); return USR_DEF_PARAM;}
<INITIAL>"'s"																			{printf("<ACCESS>"); return ACCESS;}
<INITIAL>"has"																			{printf("<USR_DEF_VAR>"); return USR_DEF_VAR;}
<INITIAL>"at"|"using"|"a " | "an "														;
<INITIAL>"(".*")"																		;
<INITIAL>{ID}																			{printf("<ID>"); return ID;}
<INITIAL>[ \t\n]+ 																		;

%%
int yywrap(void) {
  return 1;
}
