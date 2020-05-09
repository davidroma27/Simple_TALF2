/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "simple.y" /* yacc.c:339  */


  #include <stdio.h>

  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1


#line 77 "simple.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "simple.tab.h".  */
#ifndef YY_YY_SIMPLE_TAB_H_INCLUDED
# define YY_YY_SIMPLE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    OR = 258,
    AND = 259,
    NEG = 260,
    LEQ = 261,
    GEQ = 262,
    EQ = 263,
    NEQ = 264,
    DESPI = 265,
    DESPD = 266,
    INC = 267,
    DEC = 268,
    MENOS_UNARIO = 269,
    ABSTRACTO = 270,
    BOOLEANO = 271,
    BUCLE = 272,
    CASOS = 273,
    CLASE = 274,
    COMO = 275,
    CONSTANTE = 276,
    CONSTRUCTOR = 277,
    CORTO = 278,
    CUANDO = 279,
    DE = 280,
    DESCENDENTE = 281,
    DESTRUCTOR = 282,
    DEVOLVER = 283,
    DICCIONARIO = 284,
    EN = 285,
    ENTERO = 286,
    ENTONCES = 287,
    ENUMERACION = 288,
    ES = 289,
    ESPECIFICO = 290,
    EXCEPCION = 291,
    EXPORTAR = 292,
    FALSO = 293,
    FIN = 294,
    FINAL = 295,
    FINALMENTE = 296,
    GENERICO = 297,
    IMPORTAR = 298,
    LARGO = 299,
    LANZA = 300,
    LIBRERIA = 301,
    LISTA = 302,
    MIENTRAS = 303,
    OBJETO = 304,
    OTRO = 305,
    PARA = 306,
    PRINCIPIO = 307,
    PRIVADO = 308,
    PROGRAMA = 309,
    PROTEGIDO = 310,
    PRUEBA = 311,
    PUBLICO = 312,
    RANGO = 313,
    REAL = 314,
    REFERENCIA = 315,
    REGISTRO = 316,
    REPETIR = 317,
    SALIR = 318,
    SI = 319,
    SIGNO = 320,
    SIGUIENTE = 321,
    SINO = 322,
    SUBPROGRAMA = 323,
    TABLA = 324,
    TIPO = 325,
    ULTIMA = 326,
    VALOR = 327,
    VERDADERO = 328,
    CTC_CADENA = 329,
    IDENTIFICADOR = 330,
    CTC_CARACTER = 331,
    CTC_ENTERA = 332,
    CTC_REAL = 333,
    DOS_PUNTOS = 334,
    CUATRO_PUNTOS = 335,
    ASIGNACION = 336,
    FLECHA = 337,
    ASIG_SUMA = 338,
    ASIG_RESTA = 339,
    tokenASIG_MULT = 340,
    ASIG_DIV = 341,
    ASIG_RESTO = 342,
    ASIG_POT = 343,
    ASIG_DESPI = 344,
    ASIG_DESPD = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SIMPLE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "simple.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  133
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  498

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   368

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     103,   104,    16,    14,     2,    15,   130,    17,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   106,    99,
       6,   124,     7,   102,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   100,    18,   101,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   131,     2,   132,     2,     2,     2,     2,
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
       5,     8,     9,    10,    11,    12,    13,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   105,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   125,   126,   127,   128,   129
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    43,    44,    45,    47,    49,    50,    53,
      55,    57,    59,    61,    62,    63,    68,    69,    72,    73,
      78,    79,    82,    83,    84,    87,    89,    90,    93,    94,
      95,    96,    99,   101,   102,   105,   107,   108,   109,   112,
     114,   116,   118,   122,   124,   126,   128,   129,   130,   133,
     134,   135,   138,   139,   140,   141,   142,   143,   148,   150,
     152,   154,   156,   157,   160,   162,   166,   167,   168,   169,
     171,   173,   174,   177,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   190,   192,   194,   196,   198,   210,   212,
     213,   214,   223,   225,   227,   228,   231,   233,   235,   237,
     242,   243,   244,   245,   250,   252,   254,   255,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   276,   278,   279,   280,   281,   282,
     285,   286,   287,   288,   289,   290,   293,   294,   295,   296,
     299,   300,   301,   302,   305,   306,   310,   312,   314,   315,
     319
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "NEG", "'<'", "'>'", "LEQ",
  "GEQ", "EQ", "NEQ", "DESPI", "DESPD", "'+'", "'-'", "'*'", "'/'",
  "'\\\\'", "'^'", "INC", "DEC", "MENOS_UNARIO", "ABSTRACTO", "BOOLEANO",
  "BUCLE", "CASOS", "CLASE", "COMO", "CONSTANTE", "CONSTRUCTOR", "CORTO",
  "CUANDO", "DE", "DESCENDENTE", "DESTRUCTOR", "DEVOLVER", "DICCIONARIO",
  "EN", "ENTERO", "ENTONCES", "ENUMERACION", "ES", "ESPECIFICO",
  "EXCEPCION", "EXPORTAR", "FALSO", "FIN", "FINAL", "FINALMENTE",
  "GENERICO", "IMPORTAR", "LARGO", "LANZA", "LIBRERIA", "LISTA",
  "MIENTRAS", "OBJETO", "OTRO", "PARA", "PRINCIPIO", "PRIVADO", "PROGRAMA",
  "PROTEGIDO", "PRUEBA", "PUBLICO", "RANGO", "REAL", "REFERENCIA",
  "REGISTRO", "REPETIR", "SALIR", "SI", "SIGNO", "SIGUIENTE", "SINO",
  "SUBPROGRAMA", "TABLA", "TIPO", "ULTIMA", "VALOR", "VERDADERO",
  "CTC_CADENA", "IDENTIFICADOR", "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL",
  "DOS_PUNTOS", "CUATRO_PUNTOS", "ASIGNACION", "FLECHA", "ASIG_SUMA",
  "ASIG_RESTA", "tokenASIG_MULT", "ASIG_DIV", "ASIG_RESTO", "ASIG_POT",
  "ASIG_DESPI", "ASIG_DESPD", "';'", "'['", "']'", "'?'", "'('", "')'",
  "\"::\"", "':'", "\":=\"", "\"..\"", "\":+\"", "\":-\"", "\":*\"",
  "\":/\"", "\":\\\\\"", "\":^\"", "\":<\"", "\":>\"", "\"=>\"", "\"++\"",
  "\"--\"", "\"\\\\/\"", "\"/\\\\\"", "\"<=\"", "\">=\"", "'='", "\"~=\"",
  "\"<-\"", "\"->\"", "\"/\"", "\"\\\\\"", "'.'", "'{'", "'}'", "$accept",
  "programa", "definicion_programa", "codigo_programa", "libreria",
  "nombre", "definicion_libreria", "codigo_libreria", "exportaciones",
  "declaracion", "declaracion_objeto", "especificacion_tipo",
  "declaracion_tipo", "tipo_no_estructurado", "tipo_escalar", "longitud",
  "tipo_basico", "rango", "tipo_tabla", "tipo_diccionario",
  "tipo_estructurado", "tipo_registro", "campo", "tipo_enumerado",
  "elemento_enumeracion", "clase", "superclases", "declaracion_componente",
  "visibilidad", "componente", "modificador", "declaracion_subprograma",
  "cabecera_subprograma", "parametrizacion", "declaracion_parametros",
  "modo", "tipo_resultado", "cuerpo_subprograma", "instruccion",
  "instruccion_asignacion", "op_asignacion", "instruccion_devolver",
  "instruccion_llamada", "llamada_subprograma", "definicion_parametro",
  "instruccion_si", "instruccion_bucle", "clausula_iteracion",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "clausulas_excepcion", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_finalmente", "expresion",
  "expresion_posfija", "expresion_binaria", "operador_posfijo",
  "op_binario", "expresion_unaria", "primario", "literal", "objeto",
  "enumeraciones", "expresion_condicional", "campo_valor", "clave_valor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    60,    62,   261,   262,
     263,   264,   265,   266,    43,    45,    42,    47,    92,    94,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    59,
      91,    93,    63,    40,    41,   346,    58,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,    61,   364,   365,   366,   367,   368,
      46,   123,   125
};
# endif

#define YYPACT_NINF -216

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -39,   -54,   -36,    69,  -216,  -216,  -216,   -16,    16,
    -216,    37,    78,    -6,  -216,    -6,    96,    91,    93,    88,
     100,  -216,    92,    92,   187,   189,   124,   159,   125,   126,
     127,   129,   128,   201,   190,    43,  -216,   135,   154,   155,
     137,   140,   160,   162,   163,   146,  -216,  -216,  -216,   232,
     147,   151,    92,   152,   157,   127,   213,   161,   240,   175,
     245,   158,   165,   164,   167,   185,   153,   249,   206,  -216,
    -216,   168,   257,    43,   172,   173,  -216,   177,   242,   179,
     250,   182,   170,   212,   188,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,   180,   191,  -216,  -216,   192,   186,   193,   209,
     -12,   259,   -12,   194,   -30,   195,  -216,   -23,    20,   276,
     211,   199,   200,   198,    24,  -216,  -216,  -216,   202,  -216,
     218,   203,   -30,   288,     2,  -216,  -216,   207,  -216,   208,
     -12,   214,   215,    92,   216,   -30,   225,   210,   217,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,   102,  -216,   205,
     220,   275,   222,   221,   224,   298,   -29,   228,    45,   -30,
     -20,    -4,   219,   223,   -30,  -216,    20,   -24,    -1,   230,
     303,   231,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,   236,   233,   -30,   311,   315,   -12,   234,   237,   238,
     324,   292,   -30,   239,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
     241,   -42,  -216,  -216,   243,  -216,  -216,  -216,  -216,   246,
     -30,   -30,    48,   248,   247,   252,   251,   296,   -30,  -216,
     268,   254,   253,   186,  -216,   255,   258,   260,   256,   286,
     264,     9,   -30,   323,   263,   -19,    51,    75,   265,   346,
      20,   266,   283,   267,  -216,    14,   269,   270,   271,  -216,
     273,   277,   289,   -12,  -216,     3,  -216,  -216,  -216,  -216,
    -216,  -216,    13,   -30,   274,  -216,  -216,  -216,   -96,  -216,
     254,   -12,  -216,  -216,  -216,   278,  -216,   272,  -216,   -21,
     279,    47,   262,   365,   368,   369,   -44,  -216,    92,   282,
     285,   284,   287,   -30,    -8,   -30,   254,   -63,   290,    35,
     306,  -216,   291,  -216,   294,   342,   344,   295,  -216,   378,
     -30,   313,   314,   299,   297,   300,   301,   280,  -216,  -216,
     302,   304,   305,   293,   387,   307,    87,    77,   308,    47,
    -216,   309,   312,   317,   318,    20,   310,   316,   345,   357,
     322,   254,   325,   327,    20,   321,  -216,  -216,  -216,   326,
     397,   329,   -30,   377,   -30,   328,   401,    92,   330,   -30,
     418,   419,   370,   333,    92,   421,  -216,   334,   363,   335,
     336,   338,   -30,   -12,   339,    73,   343,    95,   399,    97,
    -216,   347,   210,  -216,   431,   254,   319,   320,   -30,   432,
     349,   403,   348,   354,   -12,   -12,   435,   254,   355,  -216,
    -216,  -216,  -216,   356,   442,   358,  -216,   359,  -216,   361,
    -216,  -216,   362,    33,  -216,   364,   366,  -216,  -216,    20,
     367,   371,   411,   352,   372,   420,  -216,  -216,  -216,   373,
     -30,    20,    20,   375,   376,   379,   440,   -30,   -57,   443,
    -216,   380,   381,   382,   455,   433,   439,  -216,   120,   156,
    -216,  -216,  -216,  -216,    34,   459,   465,   383,   -30,   422,
     384,  -216,  -216,  -216,  -216,  -216,  -216,   385,   -30,  -216,
    -216,   388,   254,   391,  -216,   469,   123,   445,   453,   417,
     392,   423,   395,  -216,  -216,  -216,   396,  -216
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     5,     0,     0,
       1,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       8,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    21,    36,
      37,    38,     0,     0,     7,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    35,    19,     0,    34,
       0,     0,     0,     0,     0,   100,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   136,     0,    66,
      67,    68,    84,    69,    70,    71,    72,     0,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   111,   118,   119,   120,   123,
     108,   109,   112,   113,   114,   115,   116,   117,   121,   122,
       0,     0,   106,   107,     0,    28,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   137,
       0,    73,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,    59,
       0,     0,     0,     0,    39,     0,   131,   130,   135,   134,
     132,   133,     0,     0,     0,   136,   124,   125,   126,   128,
     105,     0,   104,    26,    27,     0,    16,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,    33,     0,    17,     0,     0,     0,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,    85,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,   127,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,     0,    44,
      48,    47,    46,     0,     0,     0,    41,     0,   141,     0,
     143,   142,     0,     0,    99,     0,     0,    96,    94,     0,
       0,     0,     0,     0,     0,     0,    42,    40,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      50,    49,    45,    43,     0,     0,     0,     0,     0,     0,
       0,    55,    52,    53,    56,    57,    54,     0,     0,    97,
      98,     0,    89,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    32,    87,     0,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,   482,   -22,  -216,  -216,  -216,   426,
      52,   -99,    53,   436,   386,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,    17,  -216,  -216,   281,  -216,  -216,   448,  -161,  -216,
    -216,  -216,  -216,   138,  -216,  -216,  -216,   169,  -216,  -216,
    -216,  -216,  -216,  -216,   166,  -120,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -215,  -216,   235,  -216,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    16,    19,   115,     6,    14,    41,    45,
      46,   116,    47,   117,    85,   285,   219,   422,    86,    87,
      88,    89,   121,    90,   301,    91,   261,   386,   413,   462,
     477,    48,    55,    75,   111,   330,   187,    36,   138,   139,
     183,   140,   141,   142,   253,   143,   144,   323,   145,   146,
     316,   317,   347,   427,   318,   124,   125,   126,   214,   210,
     127,   276,   277,   147,   279,   128,   342,   343
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      27,    28,   156,   119,   171,   223,   130,   157,   131,   194,
     195,   192,   283,     1,    78,   167,   224,   196,   197,   198,
     215,    43,   199,     7,   328,    78,   278,    17,   314,     8,
      62,   162,    80,   284,   181,   182,   329,   171,   338,   211,
     194,   195,   122,    80,   222,    18,   459,     9,   196,   197,
     198,   194,   195,   199,    82,   266,   132,   307,   158,   196,
     197,   198,   243,   231,   199,    82,     2,   181,   182,    10,
     123,   158,   240,   133,     3,    31,   158,   114,   303,   315,
     216,   217,   218,    11,   134,   122,   137,   234,   114,   290,
     267,   268,   135,   269,   270,   271,    31,   105,   212,   213,
     246,   247,   158,   320,    37,   225,   321,    31,   255,   272,
     159,   165,   273,   304,   158,    12,   305,   322,   294,    42,
     136,    43,   280,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   158,   410,   158,   411,    13,   412,   340,
     274,   440,   478,    21,   137,    22,    44,    23,   158,   248,
     286,   158,   306,   309,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   302,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   158,   287,   158,    15,   471,
      77,   366,   311,   336,   373,   337,   472,   158,   365,    24,
      78,   473,    26,   381,    79,   158,   415,   158,   417,   474,
     351,    25,   171,    29,   475,    30,   476,    31,    80,   172,
      32,   173,   174,   175,   176,   177,   178,   179,   180,   275,
     158,   470,    81,   158,   490,    33,    34,    35,   137,    39,
      82,    38,   181,   182,    37,    40,    49,    50,    51,    57,
      52,    53,   387,    54,   389,    56,    57,    58,    59,   395,
     275,    60,    61,    83,    63,    66,    68,    64,    69,    70,
      71,    76,   407,    92,    73,    67,    93,    94,   443,    72,
      74,    95,    97,   104,    98,   100,   331,    99,   423,   101,
     452,   453,   103,   102,   408,   105,   107,   106,   113,   110,
     148,   108,   118,   109,   149,   112,   129,   120,   150,   152,
     151,   154,    83,   157,   155,   430,   431,   160,   168,   184,
     161,   186,   191,   169,   163,   164,   166,   227,   170,   229,
     451,   185,   189,   137,   188,   232,   220,   458,   190,   193,
     221,   233,   137,   226,   228,   235,   230,   236,   238,   239,
     237,   241,   242,   254,   244,   392,   245,   250,   482,   249,
     256,   252,   400,   251,   158,   264,   281,   259,   486,   257,
     289,   260,   263,   262,   265,   282,   292,   288,   291,   324,
     296,   293,   300,   295,   313,   297,   298,   310,   299,   312,
     319,   325,   326,   327,   332,   333,   346,   335,   334,   341,
     339,   348,   350,   344,   345,   349,   352,   353,   355,   354,
     362,   363,   357,   359,   356,   361,   314,   137,   360,   376,
     367,   384,   358,   374,   364,   391,   370,   375,   372,   137,
     137,   371,   378,   382,   388,   379,   369,   380,   383,   385,
     390,   394,   396,   397,   399,   402,   398,   401,   403,   406,
     416,   404,   405,   409,   414,   419,   424,   426,   418,   432,
     428,   420,   421,   425,   429,   433,   435,   434,   446,   447,
     436,   437,   438,   439,   441,   457,   442,   449,   444,   467,
     463,   468,   445,   479,   448,   450,   454,   469,   455,   480,
     464,   456,   465,   466,   481,   489,   484,   492,   483,   485,
     487,   488,   491,    42,   494,   495,   496,    20,   497,    96,
     460,   461,    84,    65,   153,   393,   493,   308,   368,     0,
       0,     0,     0,     0,   258,   377
};

static const yytype_int16 yycheck[] =
{
      22,    23,   122,   102,   100,   166,    29,    15,   107,     6,
       7,    40,    31,     1,    37,   135,    40,    14,    15,    16,
      24,    78,    19,    62,    68,    37,   241,    33,    49,    83,
      52,   130,    55,    52,   130,   131,    80,   100,   101,   159,
       6,     7,    72,    55,   164,    51,   103,    83,    14,    15,
      16,     6,     7,    19,    77,    46,    36,   272,   100,    14,
      15,    16,   104,   183,    19,    77,    54,   130,   131,     0,
     100,   100,   192,    53,    62,    83,   100,   100,    75,   100,
      84,    85,    86,    99,    64,    72,   108,   186,   100,   250,
      81,    82,    72,    84,    85,    86,    83,    73,   118,   119,
     220,   221,   100,    56,   105,   106,    59,    83,   228,   100,
     108,   133,   103,   100,   100,    99,   103,    70,   104,    76,
     100,    78,   242,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   100,    61,   100,    63,   100,    65,   104,
     131,   108,   108,    47,   166,    54,   103,    54,   100,   101,
      99,   100,   272,   273,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   263,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   100,   101,   100,   100,    23,
      27,   104,   281,   303,   345,   305,    30,   100,   101,   101,
      37,    35,   100,   354,    41,   100,   101,   100,   101,    43,
     320,   101,   100,    16,    48,    16,    50,    83,    55,   107,
      51,   109,   110,   111,   112,   113,   114,   115,   116,   241,
     100,   101,    69,   100,   101,   100,   100,   100,   250,    28,
      77,   103,   130,   131,   105,    45,   101,    83,    83,    83,
     103,   101,   362,    83,   364,    83,    83,   101,    16,   369,
     272,   104,   101,   100,   102,    42,    16,   100,    83,    14,
     102,    76,   382,    14,   100,   104,    60,    99,   429,   104,
     103,    14,   100,   103,   101,    33,   298,   100,   398,   100,
     441,   442,   100,    33,   383,    73,   106,    99,    79,   103,
      14,   100,    33,   101,    83,   102,   101,   103,    99,   101,
     100,    83,   100,    15,   101,   404,   405,   100,    83,   104,
     102,    36,    14,   103,   100,   100,   100,    14,   101,    83,
     440,   101,   101,   345,   102,    14,   107,   447,   104,   101,
     107,    16,   354,   103,   103,   101,   103,   100,    14,    47,
     102,   102,   101,    47,   101,   367,   100,   100,   468,   101,
      82,   100,   374,   101,   100,    69,    33,   102,   478,   106,
      14,   103,   106,   103,   100,   102,    83,   102,   102,   107,
     100,   104,    83,   104,   102,   104,   103,   103,   101,   101,
     101,    16,    14,    14,   102,   100,    44,   100,   104,    83,
     100,    47,    14,   102,   100,   100,    83,    83,   101,   100,
     107,    14,   101,   101,   104,   100,    49,   429,   104,    64,
     102,    14,   132,   103,   107,    14,   104,   101,   100,   441,
     442,   104,   100,   102,    47,   100,   117,   100,   102,   100,
     102,   101,    14,    14,   101,   101,    66,    16,    75,   101,
      41,   106,   106,   104,   101,    14,    14,    44,   101,    14,
     102,   132,   132,   104,   100,   100,    14,   101,    47,   107,
     102,   102,   101,   101,   100,    25,   100,    47,   101,    14,
      27,    38,   101,    14,   102,   102,   101,    38,   102,    14,
     100,   102,   101,   101,   101,    16,   102,    34,    66,   104,
     102,   100,    47,    76,   102,    72,   101,    15,   102,    73,
     448,   448,    66,    55,   118,   367,   489,   272,   339,    -1,
      -1,    -1,    -1,    -1,   233,   349
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    54,    62,   134,   135,   139,    62,    83,    83,
       0,    99,    99,   100,   140,   100,   136,    33,    51,   137,
     137,    47,    54,    54,   101,   101,   100,   138,   138,    16,
      16,    83,    51,   100,   100,   100,   170,   105,   103,    28,
      45,   141,    76,    78,   103,   142,   143,   145,   164,   101,
      83,    83,   103,   101,    83,   165,    83,    83,   101,    16,
     104,   101,   138,   102,   100,   170,    42,   104,    16,    83,
      14,   102,   104,   100,   103,   166,    76,    27,    37,    41,
      55,    69,    77,   100,   146,   147,   151,   152,   153,   154,
     156,   158,    14,    60,    99,    14,   142,   100,   101,   100,
      33,   100,    33,   100,   103,    73,    99,   106,   100,   101,
     103,   167,   102,    79,   100,   138,   144,   146,    33,   144,
     103,   155,    72,   100,   188,   189,   190,   193,   198,   101,
      29,   144,    36,    53,    64,    72,   100,   138,   171,   172,
     174,   175,   176,   178,   179,   181,   182,   196,    14,    83,
      99,   100,   101,   147,    83,   101,   188,    15,   100,   108,
     100,   102,   144,   100,   100,   138,   100,   188,    83,   103,
     101,   100,   107,   109,   110,   111,   112,   113,   114,   115,
     116,   130,   131,   173,   104,   101,    36,   169,   102,   101,
     104,    14,    40,   101,     6,     7,    14,    15,    16,    19,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     192,   188,   118,   119,   191,    24,    84,    85,    86,   149,
     107,   107,   188,   171,    40,   106,   103,    14,   103,    83,
     103,   188,    14,    16,   144,   101,   100,   102,    14,    47,
     188,   102,   101,   104,   101,   100,   188,   188,   101,   101,
     100,   101,   100,   177,    47,   188,    82,   106,   167,   102,
     103,   159,   103,   106,    69,   100,    46,    81,    82,    84,
      85,    86,   100,   103,   131,   138,   194,   195,   196,   197,
     188,    33,   102,    31,    52,   148,    99,   101,   102,    14,
     171,   102,    83,   104,   104,   104,   100,   104,   103,   101,
      83,   157,   144,    75,   100,   103,   188,   196,   198,   188,
     103,   144,   101,   102,    49,   100,   183,   184,   187,   101,
      56,    59,    70,   180,   107,    16,    14,    14,    68,    80,
     168,   138,   102,   100,   104,   100,   188,   188,   101,   100,
     104,    83,   199,   200,   102,   100,    44,   185,    47,   100,
      14,   188,    83,    83,   100,   101,   104,   101,   132,   101,
     104,   100,   107,    14,   107,   101,   104,   102,   180,   117,
     104,   104,   100,   171,   103,   101,    64,   187,   100,   100,
     100,   171,   102,   102,    14,   100,   160,   188,    47,   188,
     102,    14,   138,   176,   101,   188,    14,    14,    66,   101,
     138,    16,   101,    75,   106,   106,   101,   188,   144,   104,
      61,    63,    65,   161,   101,   101,    41,   101,   101,    14,
     132,   132,   150,   188,    14,   104,    44,   186,   102,   100,
     144,   144,    14,   100,   101,    14,   102,   102,   101,   101,
     108,   100,   100,   171,   101,   101,    47,   107,   102,    47,
     102,   188,   171,   171,   101,   102,   102,    25,   188,   103,
     143,   145,   162,    27,   100,   101,   101,    14,    38,    38,
     101,    23,    30,    35,    43,    48,    50,   163,   108,    14,
      14,   101,   188,    66,   102,   104,   188,   102,   100,    16,
     101,    47,    34,   164,   102,    72,   101,   102
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   133,   134,   134,   135,   135,   136,   137,   137,   138,
     139,   140,   141,   142,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   146,   147,   148,   148,   149,   149,
     149,   149,   150,   151,   151,   152,   153,   153,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   161,   161,   162,
     162,   162,   163,   163,   163,   163,   163,   163,   164,   165,
     166,   167,   168,   168,   169,   170,   171,   171,   171,   171,
     171,   171,   171,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   175,   176,   177,   178,   179,   180,
     180,   180,   181,   182,   183,   183,   184,   185,   186,   187,
     188,   188,   188,   188,   189,   190,   191,   191,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   193,   194,   194,   194,   194,   194,
     195,   195,   195,   195,   195,   195,   196,   196,   196,   196,
     197,   197,   197,   197,   198,   198,   199,   199,   198,   198,
     200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     5,     2,     5,     9,     8,     6,
       4,    12,     5,     1,     1,     1,    10,    11,     1,     1,
       5,     4,     1,     1,     1,    14,     1,     1,     1,     1,
       1,     1,     8,     8,     3,     3,     1,     1,     1,     7,
      11,    12,     6,    15,     6,     5,     1,     1,     1,     1,
       1,     5,     1,     1,     1,     1,     1,     1,     4,     9,
       8,    15,     1,     1,     2,    10,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     7,     6,    17,    12,     9,
      13,     2,     2,     8,     5,     1,     5,     8,     5,     5,
       1,     1,     1,     1,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     7,     7,
       7,     6,     6,     6,     1,     9,     3,     3,     1,     9,
       0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 45 "simple.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1651 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 319 "simple.y" /* yacc.c:1646  */
    { printf("\n\tclave_valor -> CTC_CADENA '=>'expresion"); }
#line 1657 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 1661 "simple.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 323 "simple.y" /* yacc.c:1906  */


int yyerror(char *s) {
  fflush(stdout);
  printf("***************** %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./simple NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
