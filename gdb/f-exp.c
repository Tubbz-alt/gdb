/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     STRING_LITERAL = 260,
     BOOLEAN_LITERAL = 261,
     NAME = 262,
     TYPENAME = 263,
     NAME_OR_INT = 264,
     SIZEOF = 265,
     ERROR = 266,
     INT_KEYWORD = 267,
     INT_S2_KEYWORD = 268,
     LOGICAL_S1_KEYWORD = 269,
     LOGICAL_S2_KEYWORD = 270,
     LOGICAL_S8_KEYWORD = 271,
     LOGICAL_KEYWORD = 272,
     REAL_KEYWORD = 273,
     REAL_S8_KEYWORD = 274,
     REAL_S16_KEYWORD = 275,
     COMPLEX_S8_KEYWORD = 276,
     COMPLEX_S16_KEYWORD = 277,
     COMPLEX_S32_KEYWORD = 278,
     BOOL_AND = 279,
     BOOL_OR = 280,
     BOOL_NOT = 281,
     CHARACTER = 282,
     VARIABLE = 283,
     ASSIGN_MODIFY = 284,
     ABOVE_COMMA = 285,
     NOTEQUAL = 286,
     EQUAL = 287,
     GEQ = 288,
     LEQ = 289,
     GREATERTHAN = 290,
     LESSTHAN = 291,
     RSH = 292,
     LSH = 293,
     STARSTAR = 294,
     UNARY = 295
   };
#endif
#define INT 258
#define FLOAT 259
#define STRING_LITERAL 260
#define BOOLEAN_LITERAL 261
#define NAME 262
#define TYPENAME 263
#define NAME_OR_INT 264
#define SIZEOF 265
#define ERROR 266
#define INT_KEYWORD 267
#define INT_S2_KEYWORD 268
#define LOGICAL_S1_KEYWORD 269
#define LOGICAL_S2_KEYWORD 270
#define LOGICAL_S8_KEYWORD 271
#define LOGICAL_KEYWORD 272
#define REAL_KEYWORD 273
#define REAL_S8_KEYWORD 274
#define REAL_S16_KEYWORD 275
#define COMPLEX_S8_KEYWORD 276
#define COMPLEX_S16_KEYWORD 277
#define COMPLEX_S32_KEYWORD 278
#define BOOL_AND 279
#define BOOL_OR 280
#define BOOL_NOT 281
#define CHARACTER 282
#define VARIABLE 283
#define ASSIGN_MODIFY 284
#define ABOVE_COMMA 285
#define NOTEQUAL 286
#define EQUAL 287
#define GEQ 288
#define LEQ 289
#define GREATERTHAN 290
#define LESSTHAN 291
#define RSH 292
#define LSH 293
#define STARSTAR 294
#define UNARY 295




/* Copy the first part of user declarations.  */
#line 43 "f-exp.y"


#include "defs.h"
#include "gdb_string.h"
#include "expression.h"
#include "value.h"
#include "parser-defs.h"
#include "language.h"
#include "f-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols */
#include "block.h"
#include <ctype.h>

#define parse_type builtin_type (parse_gdbarch)
#define parse_f_type builtin_f_type (parse_gdbarch)

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror, etc),
   as well as gratuitiously global symbol names, so we can have multiple
   yacc generated parsers in gdb.  Note that these are only the variables
   produced by yacc.  If other parser generators (bison, byacc, etc) produce
   additional global names that conflict at link time, then those parser
   generators need to be fixed instead of adding those names to this list.  */

#define	yymaxdepth f_maxdepth
#define	yyparse	f_parse
#define	yylex	f_lex
#define	yyerror	f_error
#define	yylval	f_lval
#define	yychar	f_char
#define	yydebug	f_debug
#define	yypact	f_pact	
#define	yyr1	f_r1			
#define	yyr2	f_r2			
#define	yydef	f_def		
#define	yychk	f_chk		
#define	yypgo	f_pgo		
#define	yyact	f_act		
#define	yyexca	f_exca
#define yyerrflag f_errflag
#define yynerrs	f_nerrs
#define	yyps	f_ps
#define	yypv	f_pv
#define	yys	f_s
#define	yy_yys	f_yys
#define	yystate	f_state
#define	yytmp	f_tmp
#define	yyv	f_v
#define	yy_yyv	f_yyv
#define	yyval	f_val
#define	yylloc	f_lloc
#define yyreds	f_reds		/* With YYDEBUG defined */
#define yytoks	f_toks		/* With YYDEBUG defined */
#define yyname	f_name		/* With YYDEBUG defined */
#define yyrule	f_rule		/* With YYDEBUG defined */
#define yylhs	f_yylhs
#define yylen	f_yylen
#define yydefred f_yydefred
#define yydgoto	f_yydgoto
#define yysindex f_yysindex
#define yyrindex f_yyrindex
#define yygindex f_yygindex
#define yytable	 f_yytable
#define yycheck	 f_yycheck

#ifndef YYDEBUG
#define	YYDEBUG	1		/* Default to yydebug support */
#endif

#define YYFPRINTF parser_fprintf

int yyparse (void);

static int yylex (void);

void yyerror (char *);

static void growbuf_by_size (int);

static int match_string_literal (void);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 132 "f-exp.y"
typedef union YYSTYPE {
    LONGEST lval;
    struct {
      LONGEST val;
      struct type *type;
    } typed_val;
    DOUBLEST dval;
    struct symbol *sym;
    struct type *tval;
    struct stoken sval;
    struct ttype tsym;
    struct symtoken ssym;
    int voidval;
    struct block *bval;
    enum exp_opcode opcode;
    struct internalvar *ivar;

    struct type **tvec;
    int *ivec;
  } YYSTYPE;
/* Line 191 of yacc.c.  */
#line 261 "f-exp.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 153 "f-exp.y"

/* YYSTYPE gets defined by %union */
static int parse_number (char *, int, int, YYSTYPE *);


/* Line 214 of yacc.c.  */
#line 277 "f-exp.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE xfree
# endif
# ifndef YYMALLOC
#  define YYMALLOC xmalloc
# endif

/* The parser invokes alloca or xmalloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   529

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  18
/* YYNRULES -- Number of rules. */
#define YYNRULES  86
/* YYNRULES -- Number of states. */
#define YYNSTATES  131

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    51,    36,     2,
      53,    54,    48,    46,    30,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,     2,
       2,    32,     2,    33,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    35,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    34,     2,    55,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    31,    37,    38,    39,    40,
      41,    42,    43,    44,    50,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    16,    19,    22,
      25,    28,    31,    32,    38,    39,    41,    43,    47,    51,
      54,    57,    59,    63,    67,    72,    76,    80,    84,    88,
      92,    96,   100,   104,   108,   112,   116,   120,   124,   128,
     132,   136,   140,   144,   148,   152,   156,   160,   162,   164,
     166,   168,   170,   175,   177,   179,   181,   183,   185,   188,
     190,   193,   195,   198,   200,   204,   207,   209,   212,   216,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   240,   242,   244,   246,   250,   252
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      58,     0,    -1,    60,    -1,    59,    -1,    66,    -1,    53,
      60,    54,    -1,    48,    60,    -1,    36,    60,    -1,    47,
      60,    -1,    26,    60,    -1,    55,    60,    -1,    10,    60,
      -1,    -1,    60,    53,    61,    62,    54,    -1,    -1,    60,
      -1,    63,    -1,    62,    30,    60,    -1,    60,    56,    60,
      -1,    60,    56,    -1,    56,    60,    -1,    56,    -1,    60,
      30,    60,    -1,    53,    64,    54,    -1,    53,    66,    54,
      60,    -1,    60,    51,    73,    -1,    60,    45,    60,    -1,
      60,    50,    60,    -1,    60,    48,    60,    -1,    60,    49,
      60,    -1,    60,    46,    60,    -1,    60,    47,    60,    -1,
      60,    44,    60,    -1,    60,    43,    60,    -1,    60,    38,
      60,    -1,    60,    37,    60,    -1,    60,    40,    60,    -1,
      60,    39,    60,    -1,    60,    42,    60,    -1,    60,    41,
      60,    -1,    60,    36,    60,    -1,    60,    35,    60,    -1,
      60,    34,    60,    -1,    60,    24,    60,    -1,    60,    25,
      60,    -1,    60,    32,    60,    -1,    60,    29,    60,    -1,
       3,    -1,     9,    -1,     4,    -1,    65,    -1,    28,    -1,
      10,    53,    66,    54,    -1,     6,    -1,     5,    -1,    74,
      -1,    67,    -1,    71,    -1,    71,    68,    -1,    48,    -1,
      48,    68,    -1,    36,    -1,    36,    68,    -1,    69,    -1,
      53,    68,    54,    -1,    69,    70,    -1,    70,    -1,    53,
      54,    -1,    53,    72,    54,    -1,     8,    -1,    12,    -1,
      13,    -1,    27,    -1,    16,    -1,    17,    -1,    15,    -1,
      14,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    66,    -1,    72,    30,    66,    -1,
       7,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   232,   232,   233,   236,   242,   247,   251,   255,   259,
     263,   267,   277,   276,   284,   287,   291,   295,   301,   307,
     313,   319,   325,   329,   335,   341,   349,   353,   357,   361,
     365,   369,   373,   377,   381,   385,   389,   393,   397,   401,
     405,   409,   413,   417,   422,   426,   430,   436,   443,   452,
     459,   462,   465,   473,   480,   488,   528,   531,   532,   575,
     577,   579,   581,   583,   586,   588,   590,   594,   596,   601,
     603,   605,   607,   609,   611,   613,   615,   617,   619,   621,
     623,   625,   627,   632,   637,   644,   648
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "STRING_LITERAL",
  "BOOLEAN_LITERAL", "NAME", "TYPENAME", "NAME_OR_INT", "SIZEOF", "ERROR",
  "INT_KEYWORD", "INT_S2_KEYWORD", "LOGICAL_S1_KEYWORD",
  "LOGICAL_S2_KEYWORD", "LOGICAL_S8_KEYWORD", "LOGICAL_KEYWORD",
  "REAL_KEYWORD", "REAL_S8_KEYWORD", "REAL_S16_KEYWORD",
  "COMPLEX_S8_KEYWORD", "COMPLEX_S16_KEYWORD", "COMPLEX_S32_KEYWORD",
  "BOOL_AND", "BOOL_OR", "BOOL_NOT", "CHARACTER", "VARIABLE",
  "ASSIGN_MODIFY", "','", "ABOVE_COMMA", "'='", "'?'", "'|'", "'^'", "'&'",
  "NOTEQUAL", "EQUAL", "GEQ", "LEQ", "GREATERTHAN", "LESSTHAN", "RSH",
  "LSH", "'@'", "'+'", "'-'", "'*'", "'/'", "STARSTAR", "'%'", "UNARY",
  "'('", "')'", "'~'", "':'", "$accept", "start", "type_exp", "exp", "@1",
  "arglist", "subrange", "complexnum", "variable", "type", "ptype",
  "abs_decl", "direct_abs_decl", "func_mod", "typebase",
  "nonempty_typelist", "name", "name_not_typename", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      44,   285,    61,    63,   124,    94,    38,   286,   287,   288,
     289,   290,   291,   292,   293,    64,    43,    45,    42,    47,
     294,    37,   295,    40,    41,   126,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    57,    58,    58,    59,    60,    60,    60,    60,    60,
      60,    60,    61,    60,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    65,    66,    67,    67,    68,
      68,    68,    68,    68,    69,    69,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     3,     2,     2,     2,     2,
       2,     2,     0,     5,     0,     1,     1,     3,     3,     2,
       2,     1,     3,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     2,     1,     3,     2,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,    47,    49,    54,    53,    86,    69,    48,     0,    70,
      71,    76,    75,    73,    74,    77,    78,    79,    80,    81,
      82,     0,    72,    51,     0,     0,     0,     0,     0,     0,
       3,     2,    50,     4,    56,    57,    55,     0,    11,     9,
       7,     8,     6,     0,     0,     0,    10,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    61,    59,     0,    58,    63,    66,     0,     0,     5,
      23,     0,    43,    44,    46,    45,    42,    41,    40,    35,
      34,    37,    36,    39,    38,    33,    32,    26,    30,    31,
      28,    29,    27,    85,    25,    14,    62,    60,    67,    83,
       0,     0,     0,    65,    52,    22,    24,    21,    15,     0,
      16,    64,     0,    68,    20,    19,     0,    13,    84,    18,
      17
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,    29,    30,    43,   105,   119,   120,    44,    32,   109,
      34,    74,    75,    76,    35,   111,   104,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -57
static const short yypact[] =
{
     134,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   162,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   190,   -57,   -57,   190,   190,   190,   134,   190,    19,
     -57,   359,   -57,   -57,   -57,   -35,   -57,   134,   -33,   -33,
     -33,   -33,   -33,   328,   -32,   -31,   -33,   -57,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,    24,
     -57,   -35,   -35,   234,   -57,   -12,   -57,   -11,   190,   -57,
     -57,   190,   407,   387,   359,   359,   426,   444,   461,   476,
     476,   228,   228,   228,   228,   -13,   -13,    49,   -39,   -39,
     -46,   -46,   -46,   -57,   -57,    80,   -57,   -57,   -57,   -57,
     -10,   -27,   277,   -57,    66,   359,   -33,   190,   298,   -24,
     -57,   -57,   293,   -57,   359,   190,   190,   -57,   -57,   359,
     359
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,     2,
     -57,   -56,   -57,   -30,   -57,   -57,   -57,   -57
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned char yytable[] =
{
      31,    71,    33,   122,    68,    69,   126,    70,    38,    66,
      67,    68,    69,    72,    70,   106,   107,   110,    73,    47,
      70,    39,    80,    81,    40,    41,    42,   123,    46,    45,
     127,   103,    63,    64,    65,    66,    67,    68,    69,    77,
      70,   112,     0,   114,   121,   113,     0,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,     1,
       2,     3,     4,     5,     0,     7,     8,     0,   115,     0,
       0,   116,     0,     1,     2,     3,     4,     5,     0,     7,
       8,     0,    21,     0,    23,    64,    65,    66,    67,    68,
      69,     0,    70,     0,     0,   118,    21,     0,    23,     0,
       0,     0,     0,     0,   116,     0,    24,   124,     0,    27,
       0,    28,     0,     0,   128,   129,   130,    25,    26,     0,
       0,     0,     0,    27,     0,    28,   117,     1,     2,     3,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
      21,    22,    23,     0,     0,     1,     2,     3,     4,     5,
      24,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,    27,    21,    28,
      23,     0,     0,     1,     2,     3,     4,     5,    24,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,     0,    37,    21,    28,    23,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     6,    27,     0,    28,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    72,     0,     0,     6,     0,    73,   108,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     6,     0,     0,    22,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
      22,     0,    48,    49,     0,     0,     0,    50,     0,     0,
      51,   108,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    48,    49,   125,     0,     0,    50,    78,     0,
      51,     0,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    70,    79,    48,    49,     0,     0,     0,    50,     0,
       0,    51,     0,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    48,    70,     0,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,     0,
      70,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,     0,
      70,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,     0,    70,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,     0,    70,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,    70,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,     0,    70
};

static const yysigned_char yycheck[] =
{
       0,    36,     0,    30,    50,    51,    30,    53,     8,    48,
      49,    50,    51,    48,    53,    71,    72,    73,    53,     0,
      53,    21,    54,    54,    24,    25,    26,    54,    28,    27,
      54,     7,    45,    46,    47,    48,    49,    50,    51,    37,
      53,    53,    -1,    54,    54,    75,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    78,    -1,
      -1,    81,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    26,    -1,    28,    46,    47,    48,    49,    50,
      51,    -1,    53,    -1,    -1,   105,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    36,   117,    -1,    53,
      -1,    55,    -1,    -1,   122,   125,   126,    47,    48,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      26,    27,    28,    -1,    -1,     3,     4,     5,     6,     7,
      36,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    53,    26,    55,
      28,    -1,    -1,     3,     4,     5,     6,     7,    36,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    53,    26,    55,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,     8,    53,    -1,    55,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    48,    -1,    -1,     8,    -1,    53,    54,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     8,    -1,    -1,    27,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,    -1,
      32,    54,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    24,    25,    56,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    24,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    26,    27,    28,    36,    47,    48,    53,    55,    58,
      59,    60,    65,    66,    67,    71,    74,    53,    60,    60,
      60,    60,    60,    60,    64,    66,    60,     0,    24,    25,
      29,    32,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      53,    36,    48,    53,    68,    69,    70,    66,    30,    54,
      54,    54,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,     7,    73,    61,    68,    68,    54,    66,
      68,    72,    53,    70,    54,    60,    60,    56,    60,    62,
      63,    54,    30,    54,    60,    56,    30,    54,    66,    60,
      60
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to xreallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to xreallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 237 "f-exp.y"
    { write_exp_elt_opcode(OP_TYPE);
			  write_exp_elt_type(yyvsp[0].tval);
			  write_exp_elt_opcode(OP_TYPE); }
    break;

  case 5:
#line 243 "f-exp.y"
    { }
    break;

  case 6:
#line 248 "f-exp.y"
    { write_exp_elt_opcode (UNOP_IND); }
    break;

  case 7:
#line 252 "f-exp.y"
    { write_exp_elt_opcode (UNOP_ADDR); }
    break;

  case 8:
#line 256 "f-exp.y"
    { write_exp_elt_opcode (UNOP_NEG); }
    break;

  case 9:
#line 260 "f-exp.y"
    { write_exp_elt_opcode (UNOP_LOGICAL_NOT); }
    break;

  case 10:
#line 264 "f-exp.y"
    { write_exp_elt_opcode (UNOP_COMPLEMENT); }
    break;

  case 11:
#line 268 "f-exp.y"
    { write_exp_elt_opcode (UNOP_SIZEOF); }
    break;

  case 12:
#line 277 "f-exp.y"
    { start_arglist (); }
    break;

  case 13:
#line 279 "f-exp.y"
    { write_exp_elt_opcode (OP_F77_UNDETERMINED_ARGLIST);
			  write_exp_elt_longcst ((LONGEST) end_arglist ());
			  write_exp_elt_opcode (OP_F77_UNDETERMINED_ARGLIST); }
    break;

  case 15:
#line 288 "f-exp.y"
    { arglist_len = 1; }
    break;

  case 16:
#line 292 "f-exp.y"
    { arglist_len = 1; }
    break;

  case 17:
#line 296 "f-exp.y"
    { arglist_len++; }
    break;

  case 18:
#line 302 "f-exp.y"
    { write_exp_elt_opcode (OP_F90_RANGE); 
			  write_exp_elt_longcst (NONE_BOUND_DEFAULT);
			  write_exp_elt_opcode (OP_F90_RANGE); }
    break;

  case 19:
#line 308 "f-exp.y"
    { write_exp_elt_opcode (OP_F90_RANGE);
			  write_exp_elt_longcst (HIGH_BOUND_DEFAULT);
			  write_exp_elt_opcode (OP_F90_RANGE); }
    break;

  case 20:
#line 314 "f-exp.y"
    { write_exp_elt_opcode (OP_F90_RANGE);
			  write_exp_elt_longcst (LOW_BOUND_DEFAULT);
			  write_exp_elt_opcode (OP_F90_RANGE); }
    break;

  case 21:
#line 320 "f-exp.y"
    { write_exp_elt_opcode (OP_F90_RANGE);
			  write_exp_elt_longcst (BOTH_BOUND_DEFAULT);
			  write_exp_elt_opcode (OP_F90_RANGE); }
    break;

  case 22:
#line 326 "f-exp.y"
    { }
    break;

  case 23:
#line 330 "f-exp.y"
    { write_exp_elt_opcode(OP_COMPLEX);
			  write_exp_elt_type (parse_f_type->builtin_complex_s16);
                	  write_exp_elt_opcode(OP_COMPLEX); }
    break;

  case 24:
#line 336 "f-exp.y"
    { write_exp_elt_opcode (UNOP_CAST);
			  write_exp_elt_type (yyvsp[-2].tval);
			  write_exp_elt_opcode (UNOP_CAST); }
    break;

  case 25:
#line 342 "f-exp.y"
    { write_exp_elt_opcode (STRUCTOP_STRUCT);
                          write_exp_string (yyvsp[0].sval);
                          write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 26:
#line 350 "f-exp.y"
    { write_exp_elt_opcode (BINOP_REPEAT); }
    break;

  case 27:
#line 354 "f-exp.y"
    { write_exp_elt_opcode (BINOP_EXP); }
    break;

  case 28:
#line 358 "f-exp.y"
    { write_exp_elt_opcode (BINOP_MUL); }
    break;

  case 29:
#line 362 "f-exp.y"
    { write_exp_elt_opcode (BINOP_DIV); }
    break;

  case 30:
#line 366 "f-exp.y"
    { write_exp_elt_opcode (BINOP_ADD); }
    break;

  case 31:
#line 370 "f-exp.y"
    { write_exp_elt_opcode (BINOP_SUB); }
    break;

  case 32:
#line 374 "f-exp.y"
    { write_exp_elt_opcode (BINOP_LSH); }
    break;

  case 33:
#line 378 "f-exp.y"
    { write_exp_elt_opcode (BINOP_RSH); }
    break;

  case 34:
#line 382 "f-exp.y"
    { write_exp_elt_opcode (BINOP_EQUAL); }
    break;

  case 35:
#line 386 "f-exp.y"
    { write_exp_elt_opcode (BINOP_NOTEQUAL); }
    break;

  case 36:
#line 390 "f-exp.y"
    { write_exp_elt_opcode (BINOP_LEQ); }
    break;

  case 37:
#line 394 "f-exp.y"
    { write_exp_elt_opcode (BINOP_GEQ); }
    break;

  case 38:
#line 398 "f-exp.y"
    { write_exp_elt_opcode (BINOP_LESS); }
    break;

  case 39:
#line 402 "f-exp.y"
    { write_exp_elt_opcode (BINOP_GTR); }
    break;

  case 40:
#line 406 "f-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_AND); }
    break;

  case 41:
#line 410 "f-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_XOR); }
    break;

  case 42:
#line 414 "f-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_IOR); }
    break;

  case 43:
#line 418 "f-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_AND); }
    break;

  case 44:
#line 423 "f-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_OR); }
    break;

  case 45:
#line 427 "f-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN); }
    break;

  case 46:
#line 431 "f-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN_MODIFY);
			  write_exp_elt_opcode (yyvsp[-1].opcode);
			  write_exp_elt_opcode (BINOP_ASSIGN_MODIFY); }
    break;

  case 47:
#line 437 "f-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (yyvsp[0].typed_val.type);
			  write_exp_elt_longcst ((LONGEST)(yyvsp[0].typed_val.val));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 48:
#line 444 "f-exp.y"
    { YYSTYPE val;
			  parse_number (yyvsp[0].ssym.stoken.ptr, yyvsp[0].ssym.stoken.length, 0, &val);
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (val.typed_val.type);
			  write_exp_elt_longcst ((LONGEST)val.typed_val.val);
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 49:
#line 453 "f-exp.y"
    { write_exp_elt_opcode (OP_DOUBLE);
			  write_exp_elt_type (parse_f_type->builtin_real_s8);
			  write_exp_elt_dblcst (yyvsp[0].dval);
			  write_exp_elt_opcode (OP_DOUBLE); }
    break;

  case 52:
#line 466 "f-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (parse_f_type->builtin_integer);
			  CHECK_TYPEDEF (yyvsp[-1].tval);
			  write_exp_elt_longcst ((LONGEST) TYPE_LENGTH (yyvsp[-1].tval));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 53:
#line 474 "f-exp.y"
    { write_exp_elt_opcode (OP_BOOL);
			  write_exp_elt_longcst ((LONGEST) yyvsp[0].lval);
			  write_exp_elt_opcode (OP_BOOL);
			}
    break;

  case 54:
#line 481 "f-exp.y"
    {
			  write_exp_elt_opcode (OP_STRING);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (OP_STRING);
			}
    break;

  case 55:
#line 489 "f-exp.y"
    { struct symbol *sym = yyvsp[0].ssym.sym;

			  if (sym)
			    {
			      if (symbol_read_needs_frame (sym))
				{
				  if (innermost_block == 0
				      || contained_in (block_found, 
						       innermost_block))
				    innermost_block = block_found;
				}
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      /* We want to use the selected frame, not
				 another more inner frame which happens to
				 be in the same block.  */
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      break;
			    }
			  else
			    {
			      struct minimal_symbol *msymbol;
			      char *arg = copy_name (yyvsp[0].ssym.stoken);

			      msymbol =
				lookup_minimal_symbol (arg, NULL, NULL);
			      if (msymbol != NULL)
				write_exp_msymbol (msymbol);
			      else if (!have_full_symbols () && !have_partial_symbols ())
				error (_("No symbol table is loaded.  Use the \"file\" command."));
			      else
				error (_("No symbol \"%s\" in current context."),
				       copy_name (yyvsp[0].ssym.stoken));
			    }
			}
    break;

  case 58:
#line 533 "f-exp.y"
    {
		  /* This is where the interesting stuff happens.  */
		  int done = 0;
		  int array_size;
		  struct type *follow_type = yyvsp[-1].tval;
		  struct type *range_type;
		  
		  while (!done)
		    switch (pop_type ())
		      {
		      case tp_end:
			done = 1;
			break;
		      case tp_pointer:
			follow_type = lookup_pointer_type (follow_type);
			break;
		      case tp_reference:
			follow_type = lookup_reference_type (follow_type);
			break;
		      case tp_array:
			array_size = pop_type_int ();
			if (array_size != -1)
			  {
			    range_type =
			      create_range_type ((struct type *) NULL,
						 parse_f_type->builtin_integer,
						 0, array_size - 1);
			    follow_type =
			      create_array_type ((struct type *) NULL,
						 follow_type, range_type);
			  }
			else
			  follow_type = lookup_pointer_type (follow_type);
			break;
		      case tp_function:
			follow_type = lookup_function_type (follow_type);
			break;
		      }
		  yyval.tval = follow_type;
		}
    break;

  case 59:
#line 576 "f-exp.y"
    { push_type (tp_pointer); yyval.voidval = 0; }
    break;

  case 60:
#line 578 "f-exp.y"
    { push_type (tp_pointer); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 61:
#line 580 "f-exp.y"
    { push_type (tp_reference); yyval.voidval = 0; }
    break;

  case 62:
#line 582 "f-exp.y"
    { push_type (tp_reference); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 64:
#line 587 "f-exp.y"
    { yyval.voidval = yyvsp[-1].voidval; }
    break;

  case 65:
#line 589 "f-exp.y"
    { push_type (tp_function); }
    break;

  case 66:
#line 591 "f-exp.y"
    { push_type (tp_function); }
    break;

  case 67:
#line 595 "f-exp.y"
    { yyval.voidval = 0; }
    break;

  case 68:
#line 597 "f-exp.y"
    { xfree (yyvsp[-1].tvec); yyval.voidval = 0; }
    break;

  case 69:
#line 602 "f-exp.y"
    { yyval.tval = yyvsp[0].tsym.type; }
    break;

  case 70:
#line 604 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_integer; }
    break;

  case 71:
#line 606 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_integer_s2; }
    break;

  case 72:
#line 608 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_character; }
    break;

  case 73:
#line 610 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_logical_s8; }
    break;

  case 74:
#line 612 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_logical; }
    break;

  case 75:
#line 614 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_logical_s2; }
    break;

  case 76:
#line 616 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_logical_s1; }
    break;

  case 77:
#line 618 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_real; }
    break;

  case 78:
#line 620 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_real_s8; }
    break;

  case 79:
#line 622 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_real_s16; }
    break;

  case 80:
#line 624 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_complex_s8; }
    break;

  case 81:
#line 626 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_complex_s16; }
    break;

  case 82:
#line 628 "f-exp.y"
    { yyval.tval = parse_f_type->builtin_complex_s32; }
    break;

  case 83:
#line 633 "f-exp.y"
    { yyval.tvec = (struct type **) xmalloc (sizeof (struct type *) * 2);
		  yyval.ivec[0] = 1;	/* Number of types in vector */
		  yyval.tvec[1] = yyvsp[0].tval;
		}
    break;

  case 84:
#line 638 "f-exp.y"
    { int len = sizeof (struct type *) * (++(yyvsp[-2].ivec[0]) + 1);
		  yyval.tvec = (struct type **) xrealloc ((char *) yyvsp[-2].tvec, len);
		  yyval.tvec[yyval.ivec[0]] = yyvsp[0].tval;
		}
    break;

  case 85:
#line 645 "f-exp.y"
    {  yyval.sval = yyvsp[0].ssym.stoken; }
    break;


    }

/* Line 1000 of yacc.c.  */
#line 1870 "f-exp.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
	  yychar = YYEMPTY;

	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 658 "f-exp.y"


/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.
   LEN is the number of characters in it.  */

/*** Needs some error checking for the float case ***/

static int
parse_number (p, len, parsed_float, putithere)
     char *p;
     int len;
     int parsed_float;
     YYSTYPE *putithere;
{
  LONGEST n = 0;
  LONGEST prevn = 0;
  int c;
  int base = input_radix;
  int unsigned_p = 0;
  int long_p = 0;
  ULONGEST high_bit;
  struct type *signed_type;
  struct type *unsigned_type;

  if (parsed_float)
    {
      /* It's a float since it contains a point or an exponent.  */
      /* [dD] is not understood as an exponent by atof, change it to 'e'.  */
      char *tmp, *tmp2;

      tmp = xstrdup (p);
      for (tmp2 = tmp; *tmp2; ++tmp2)
	if (*tmp2 == 'd' || *tmp2 == 'D')
	  *tmp2 = 'e';
      putithere->dval = atof (tmp);
      xfree (tmp);
      return FLOAT;
    }

  /* Handle base-switching prefixes 0x, 0t, 0d, 0 */
  if (p[0] == '0')
    switch (p[1])
      {
      case 'x':
      case 'X':
	if (len >= 3)
	  {
	    p += 2;
	    base = 16;
	    len -= 2;
	  }
	break;
	
      case 't':
      case 'T':
      case 'd':
      case 'D':
	if (len >= 3)
	  {
	    p += 2;
	    base = 10;
	    len -= 2;
	  }
	break;
	
      default:
	base = 8;
	break;
      }
  
  while (len-- > 0)
    {
      c = *p++;
      if (isupper (c))
	c = tolower (c);
      if (len == 0 && c == 'l')
	long_p = 1;
      else if (len == 0 && c == 'u')
	unsigned_p = 1;
      else
	{
	  int i;
	  if (c >= '0' && c <= '9')
	    i = c - '0';
	  else if (c >= 'a' && c <= 'f')
	    i = c - 'a' + 10;
	  else
	    return ERROR;	/* Char not a digit */
	  if (i >= base)
	    return ERROR;		/* Invalid digit in this base */
	  n *= base;
	  n += i;
	}
      /* Portably test for overflow (only works for nonzero values, so make
	 a second check for zero).  */
      if ((prevn >= n) && n != 0)
	unsigned_p=1;		/* Try something unsigned */
      /* If range checking enabled, portably test for unsigned overflow.  */
      if (RANGE_CHECK && n != 0)
	{
	  if ((unsigned_p && (unsigned)prevn >= (unsigned)n))
	    range_error (_("Overflow on numeric constant."));
	}
      prevn = n;
    }
  
  /* If the number is too big to be an int, or it's got an l suffix
     then it's a long.  Work out if this has to be a long by
     shifting right and seeing if anything remains, and the
     target int size is different to the target long size.
     
     In the expression below, we could have tested
     (n >> gdbarch_int_bit (parse_gdbarch))
     to see if it was zero,
     but too many compilers warn about that, when ints and longs
     are the same size.  So we shift it twice, with fewer bits
     each time, for the same result.  */
  
  if ((gdbarch_int_bit (parse_gdbarch) != gdbarch_long_bit (parse_gdbarch)
       && ((n >> 2)
	   >> (gdbarch_int_bit (parse_gdbarch)-2))) /* Avoid shift warning */
      || long_p)
    {
      high_bit = ((ULONGEST)1) << (gdbarch_long_bit (parse_gdbarch)-1);
      unsigned_type = parse_type->builtin_unsigned_long;
      signed_type = parse_type->builtin_long;
    }
  else 
    {
      high_bit = ((ULONGEST)1) << (gdbarch_int_bit (parse_gdbarch)-1);
      unsigned_type = parse_type->builtin_unsigned_int;
      signed_type = parse_type->builtin_int;
    }    
  
  putithere->typed_val.val = n;
  
  /* If the high bit of the worked out type is set then this number
     has to be unsigned.  */
  
  if (unsigned_p || (n & high_bit)) 
    putithere->typed_val.type = unsigned_type;
  else 
    putithere->typed_val.type = signed_type;
  
  return INT;
}

struct token
{
  char *operator;
  int token;
  enum exp_opcode opcode;
};

static const struct token dot_ops[] =
{
  { ".and.", BOOL_AND, BINOP_END },
  { ".AND.", BOOL_AND, BINOP_END },
  { ".or.", BOOL_OR, BINOP_END },
  { ".OR.", BOOL_OR, BINOP_END },
  { ".not.", BOOL_NOT, BINOP_END },
  { ".NOT.", BOOL_NOT, BINOP_END },
  { ".eq.", EQUAL, BINOP_END },
  { ".EQ.", EQUAL, BINOP_END },
  { ".eqv.", EQUAL, BINOP_END },
  { ".NEQV.", NOTEQUAL, BINOP_END },
  { ".neqv.", NOTEQUAL, BINOP_END },
  { ".EQV.", EQUAL, BINOP_END },
  { ".ne.", NOTEQUAL, BINOP_END },
  { ".NE.", NOTEQUAL, BINOP_END },
  { ".le.", LEQ, BINOP_END },
  { ".LE.", LEQ, BINOP_END },
  { ".ge.", GEQ, BINOP_END },
  { ".GE.", GEQ, BINOP_END },
  { ".gt.", GREATERTHAN, BINOP_END },
  { ".GT.", GREATERTHAN, BINOP_END },
  { ".lt.", LESSTHAN, BINOP_END },
  { ".LT.", LESSTHAN, BINOP_END },
  { NULL, 0, 0 }
};

struct f77_boolean_val 
{
  char *name;
  int value;
}; 

static const struct f77_boolean_val boolean_values[]  = 
{
  { ".true.", 1 },
  { ".TRUE.", 1 },
  { ".false.", 0 },
  { ".FALSE.", 0 },
  { NULL, 0 }
};

static const struct token f77_keywords[] = 
{
  { "complex_16", COMPLEX_S16_KEYWORD, BINOP_END },
  { "complex_32", COMPLEX_S32_KEYWORD, BINOP_END },
  { "character", CHARACTER, BINOP_END },
  { "integer_2", INT_S2_KEYWORD, BINOP_END },
  { "logical_1", LOGICAL_S1_KEYWORD, BINOP_END },
  { "logical_2", LOGICAL_S2_KEYWORD, BINOP_END },
  { "logical_8", LOGICAL_S8_KEYWORD, BINOP_END },
  { "complex_8", COMPLEX_S8_KEYWORD, BINOP_END },
  { "integer", INT_KEYWORD, BINOP_END },
  { "logical", LOGICAL_KEYWORD, BINOP_END },
  { "real_16", REAL_S16_KEYWORD, BINOP_END },
  { "complex", COMPLEX_S8_KEYWORD, BINOP_END },
  { "sizeof", SIZEOF, BINOP_END },
  { "real_8", REAL_S8_KEYWORD, BINOP_END },
  { "real", REAL_KEYWORD, BINOP_END },
  { NULL, 0, 0 }
}; 

/* Implementation of a dynamically expandable buffer for processing input
   characters acquired through lexptr and building a value to return in
   yylval.  Ripped off from ch-exp.y */ 

static char *tempbuf;		/* Current buffer contents */
static int tempbufsize;		/* Size of allocated buffer */
static int tempbufindex;	/* Current index into buffer */

#define GROWBY_MIN_SIZE 64	/* Minimum amount to grow buffer by */

#define CHECKBUF(size) \
  do { \
    if (tempbufindex + (size) >= tempbufsize) \
      { \
	growbuf_by_size (size); \
      } \
  } while (0);


/* Grow the static temp buffer if necessary, including allocating the
   first one on demand.  */

static void
growbuf_by_size (count)
     int count;
{
  int growby;

  growby = max (count, GROWBY_MIN_SIZE);
  tempbufsize += growby;
  if (tempbuf == NULL)
    tempbuf = (char *) xmalloc (tempbufsize);
  else
    tempbuf = (char *) xrealloc (tempbuf, tempbufsize);
}

/* Blatantly ripped off from ch-exp.y. This routine recognizes F77 
   string-literals.
   
   Recognize a string literal.  A string literal is a nonzero sequence
   of characters enclosed in matching single quotes, except that
   a single character inside single quotes is a character literal, which
   we reject as a string literal.  To embed the terminator character inside
   a string, it is simply doubled (I.E. 'this''is''one''string') */

static int
match_string_literal (void)
{
  char *tokptr = lexptr;

  for (tempbufindex = 0, tokptr++; *tokptr != '\0'; tokptr++)
    {
      CHECKBUF (1);
      if (*tokptr == *lexptr)
	{
	  if (*(tokptr + 1) == *lexptr)
	    tokptr++;
	  else
	    break;
	}
      tempbuf[tempbufindex++] = *tokptr;
    }
  if (*tokptr == '\0'					/* no terminator */
      || tempbufindex == 0)				/* no string */
    return 0;
  else
    {
      tempbuf[tempbufindex] = '\0';
      yylval.sval.ptr = tempbuf;
      yylval.sval.length = tempbufindex;
      lexptr = ++tokptr;
      return STRING_LITERAL;
    }
}

/* Read one token, getting characters through lexptr.  */

static int
yylex (void)
{
  int c;
  int namelen;
  unsigned int i,token;
  char *tokstart;
  
 retry:
 
  prev_lexptr = lexptr;
 
  tokstart = lexptr;
  
  /* First of all, let us make sure we are not dealing with the 
     special tokens .true. and .false. which evaluate to 1 and 0.  */
  
  if (*lexptr == '.')
    { 
      for (i = 0; boolean_values[i].name != NULL; i++)
	{
	  if (strncmp (tokstart, boolean_values[i].name,
		       strlen (boolean_values[i].name)) == 0)
	    {
	      lexptr += strlen (boolean_values[i].name); 
	      yylval.lval = boolean_values[i].value; 
	      return BOOLEAN_LITERAL;
	    }
	}
    }
  
  /* See if it is a special .foo. operator.  */
  
  for (i = 0; dot_ops[i].operator != NULL; i++)
    if (strncmp (tokstart, dot_ops[i].operator,
		 strlen (dot_ops[i].operator)) == 0)
      {
	lexptr += strlen (dot_ops[i].operator);
	yylval.opcode = dot_ops[i].opcode;
	return dot_ops[i].token;
      }
  
  /* See if it is an exponentiation operator.  */

  if (strncmp (tokstart, "**", 2) == 0)
    {
      lexptr += 2;
      yylval.opcode = BINOP_EXP;
      return STARSTAR;
    }

  switch (c = *tokstart)
    {
    case 0:
      return 0;
      
    case ' ':
    case '\t':
    case '\n':
      lexptr++;
      goto retry;
      
    case '\'':
      token = match_string_literal ();
      if (token != 0)
	return (token);
      break;
      
    case '(':
      paren_depth++;
      lexptr++;
      return c;
      
    case ')':
      if (paren_depth == 0)
	return 0;
      paren_depth--;
      lexptr++;
      return c;
      
    case ',':
      if (comma_terminates && paren_depth == 0)
	return 0;
      lexptr++;
      return c;
      
    case '.':
      /* Might be a floating point number.  */
      if (lexptr[1] < '0' || lexptr[1] > '9')
	goto symbol;		/* Nope, must be a symbol.  */
      /* FALL THRU into number case.  */
      
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {
        /* It's a number.  */
	int got_dot = 0, got_e = 0, got_d = 0, toktype;
	char *p = tokstart;
	int hex = input_radix > 10;
	
	if (c == '0' && (p[1] == 'x' || p[1] == 'X'))
	  {
	    p += 2;
	    hex = 1;
	  }
	else if (c == '0' && (p[1]=='t' || p[1]=='T'
			      || p[1]=='d' || p[1]=='D'))
	  {
	    p += 2;
	    hex = 0;
	  }
	
	for (;; ++p)
	  {
	    if (!hex && !got_e && (*p == 'e' || *p == 'E'))
	      got_dot = got_e = 1;
	    else if (!hex && !got_d && (*p == 'd' || *p == 'D'))
	      got_dot = got_d = 1;
	    else if (!hex && !got_dot && *p == '.')
	      got_dot = 1;
	    else if (((got_e && (p[-1] == 'e' || p[-1] == 'E'))
		     || (got_d && (p[-1] == 'd' || p[-1] == 'D')))
		     && (*p == '-' || *p == '+'))
	      /* This is the sign of the exponent, not the end of the
		 number.  */
	      continue;
	    /* We will take any letters or digits.  parse_number will
	       complain if past the radix, or if L or U are not final.  */
	    else if ((*p < '0' || *p > '9')
		     && ((*p < 'a' || *p > 'z')
			 && (*p < 'A' || *p > 'Z')))
	      break;
	  }
	toktype = parse_number (tokstart, p - tokstart, got_dot|got_e|got_d,
				&yylval);
        if (toktype == ERROR)
          {
	    char *err_copy = (char *) alloca (p - tokstart + 1);
	    
	    memcpy (err_copy, tokstart, p - tokstart);
	    err_copy[p - tokstart] = 0;
	    error (_("Invalid number \"%s\"."), err_copy);
	  }
	lexptr = p;
	return toktype;
      }
      
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '|':
    case '&':
    case '^':
    case '~':
    case '!':
    case '@':
    case '<':
    case '>':
    case '[':
    case ']':
    case '?':
    case ':':
    case '=':
    case '{':
    case '}':
    symbol:
      lexptr++;
      return c;
    }
  
  if (!(c == '_' || c == '$' || c ==':'
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    /* We must have come across a bad character (e.g. ';').  */
    error (_("Invalid character '%c' in expression."), c);
  
  namelen = 0;
  for (c = tokstart[namelen];
       (c == '_' || c == '$' || c == ':' || (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); 
       c = tokstart[++namelen]);
  
  /* The token "if" terminates the expression and is NOT 
     removed from the input stream.  */
  
  if (namelen == 2 && tokstart[0] == 'i' && tokstart[1] == 'f')
    return 0;
  
  lexptr += namelen;
  
  /* Catch specific keywords.  */
  
  for (i = 0; f77_keywords[i].operator != NULL; i++)
    if (strlen (f77_keywords[i].operator) == namelen
	&& strncmp (tokstart, f77_keywords[i].operator, namelen) == 0)
      {
	/* 	lexptr += strlen(f77_keywords[i].operator); */ 
	yylval.opcode = f77_keywords[i].opcode;
	return f77_keywords[i].token;
      }
  
  yylval.sval.ptr = tokstart;
  yylval.sval.length = namelen;
  
  if (*tokstart == '$')
    {
      write_dollar_variable (yylval.sval);
      return VARIABLE;
    }
  
  /* Use token-type TYPENAME for symbols that happen to be defined
     currently as names of types; NAME for other symbols.
     The caller is not constrained to care about the distinction.  */
  {
    char *tmp = copy_name (yylval.sval);
    struct symbol *sym;
    int is_a_field_of_this = 0;
    int hextype;
    
    sym = lookup_symbol (tmp, expression_context_block,
			 VAR_DOMAIN,
			 parse_language->la_language == language_cplus
			 ? &is_a_field_of_this : NULL);
    if (sym && SYMBOL_CLASS (sym) == LOC_TYPEDEF)
      {
	yylval.tsym.type = SYMBOL_TYPE (sym);
	return TYPENAME;
      }
    yylval.tsym.type
      = language_lookup_primitive_type_by_name (parse_language,
						parse_gdbarch, tmp);
    if (yylval.tsym.type != NULL)
      return TYPENAME;
    
    /* Input names that aren't symbols but ARE valid hex numbers,
       when the input radix permits them, can be names or numbers
       depending on the parse.  Note we support radixes > 16 here.  */
    if (!sym
	&& ((tokstart[0] >= 'a' && tokstart[0] < 'a' + input_radix - 10)
	    || (tokstart[0] >= 'A' && tokstart[0] < 'A' + input_radix - 10)))
      {
 	YYSTYPE newlval;	/* Its value is ignored.  */
	hextype = parse_number (tokstart, namelen, 0, &newlval);
	if (hextype == INT)
	  {
	    yylval.ssym.sym = sym;
	    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	    return NAME_OR_INT;
	  }
      }
    
    /* Any other kind of symbol */
    yylval.ssym.sym = sym;
    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
    return NAME;
  }
}

void
yyerror (msg)
     char *msg;
{
  if (prev_lexptr)
    lexptr = prev_lexptr;

  error (_("A %s in expression, near `%s'."), (msg ? msg : "error"), lexptr);
}


