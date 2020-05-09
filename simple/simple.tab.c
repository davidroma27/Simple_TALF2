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
    ASIG_DESPD = 345,
    OPERADOR = 346,
    DELIM = 347,
    RESERVADA = 348
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

#line 222 "simple.tab.c" /* yacc.c:358  */

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
#define YYLAST   541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  498

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   371

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
     106,   107,    16,    14,     2,    15,   133,    17,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   109,   102,
       6,   127,     7,   105,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,    18,   104,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   134,     2,   135,     2,     2,     2,     2,
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
      93,    94,    95,    96,    97,    98,    99,   100,   101,   108,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   128,   129,   130,
     131,   132
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    48,    49,    50,    52,    54,    55,    58,
      60,    62,    64,    66,    67,    68,    73,    74,    77,    78,
      83,    84,    87,    88,    89,    92,    94,    95,    98,    99,
     100,   101,   104,   106,   107,   110,   112,   113,   114,   117,
     119,   121,   123,   127,   129,   131,   133,   134,   135,   138,
     139,   140,   143,   144,   145,   146,   147,   148,   153,   155,
     157,   159,   161,   162,   165,   167,   171,   172,   173,   174,
     176,   178,   179,   182,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   195,   197,   199,   201,   203,   215,   217,
     218,   219,   228,   230,   232,   233,   236,   238,   240,   242,
     247,   248,   249,   250,   255,   257,   259,   260,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   281,   283,   284,   285,   286,   287,
     290,   291,   292,   293,   294,   295,   298,   299,   300,   301,
     304,   305,   306,   307,   310,   311,   315,   317,   319,   320,
     324
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
  "ASIG_DESPI", "ASIG_DESPD", "OPERADOR", "DELIM", "RESERVADA", "';'",
  "'['", "']'", "'?'", "'('", "')'", "\"::\"", "':'", "\":=\"", "\"..\"",
  "\":+\"", "\":-\"", "\":*\"", "\":/\"", "\":\\\\\"", "\":^\"", "\":<\"",
  "\":>\"", "\"=>\"", "\"++\"", "\"--\"", "\"\\\\/\"", "\"/\\\\\"",
  "\"<=\"", "\">=\"", "'='", "\"~=\"", "\"<-\"", "\"->\"", "\"/\"",
  "\"\\\\\"", "'.'", "'{'", "'}'", "$accept", "programa",
  "definicion_programa", "codigo_programa", "libreria", "nombre",
  "definicion_libreria", "codigo_libreria", "exportaciones", "declaracion",
  "declaracion_objeto", "especificacion_tipo", "declaracion_tipo",
  "tipo_no_estructurado", "tipo_escalar", "longitud", "tipo_basico",
  "rango", "tipo_tabla", "tipo_diccionario", "tipo_estructurado",
  "tipo_registro", "campo", "tipo_enumerado", "elemento_enumeracion",
  "clase", "superclases", "declaracion_componente", "visibilidad",
  "componente", "modificador", "declaracion_subprograma",
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
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,    59,    91,    93,    63,    40,    41,   349,    58,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,    61,   367,   368,
     369,   370,   371,    46,   123,   125
};
# endif

#define YYPACT_NINF -180

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-180)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      50,   -55,   -56,   -54,    55,  -180,  -180,  -180,   -68,    23,
    -180,    -5,     0,    66,  -180,    66,    71,    86,    89,    88,
      94,  -180,   102,   102,   191,   193,   135,   175,   124,   126,
     127,   125,   128,   207,   192,    69,  -180,   132,   155,   157,
     137,   141,   158,   163,   164,   144,  -180,  -180,  -180,   235,
     145,   149,   102,   150,   151,   127,   214,   152,   241,   177,
     244,   159,   154,   160,   161,   189,    -1,   252,   209,  -180,
    -180,   168,   257,    69,   169,   170,  -180,   172,   240,   174,
     246,   179,   180,   210,   183,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,   178,   185,  -180,  -180,   186,   187,   184,   212,
     -12,   259,   -12,   188,   -44,   194,  -180,   -13,    16,   281,
     213,   195,   196,   197,   -50,  -180,  -180,  -180,   199,  -180,
     217,   200,   -44,   288,   -91,  -180,  -180,   204,  -180,   203,
     -12,   206,   208,   102,   211,   -44,   227,   215,   218,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,    98,  -180,   205,
     220,   277,   221,   224,   222,   301,   -36,   226,    42,   -44,
      27,    -3,   223,   225,   -44,  -180,    16,   -26,    79,   219,
     302,   228,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,   234,   230,   -44,   304,   303,   -12,   233,   236,   237,
     317,   291,   -44,   238,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
     242,     6,  -180,  -180,   243,  -180,  -180,  -180,  -180,   247,
     -44,   -44,    47,   245,   248,   249,   251,   293,   -44,  -180,
     262,   253,   232,   187,  -180,   250,   254,   255,   256,   290,
     260,   -11,   -44,   324,   261,     1,    87,    91,   263,   348,
      16,   264,   284,   265,  -180,    17,   266,   267,   268,  -180,
     258,   270,   294,   -12,  -180,     3,  -180,  -180,  -180,  -180,
    -180,  -180,    33,   -44,   272,  -180,  -180,  -180,   -37,  -180,
     253,   -12,  -180,  -180,  -180,   275,  -180,   271,  -180,   -43,
     276,    51,   273,   355,   367,   368,    26,  -180,   102,   279,
     282,   280,   283,   -44,    -4,   -44,   253,   -19,   285,    34,
     306,  -180,   286,  -180,   287,   349,   345,   292,  -180,   380,
     -44,   313,   314,   295,   296,   297,   298,   274,  -180,  -180,
     299,   305,   307,   289,   387,   308,    93,    74,   300,    51,
    -180,   309,   310,   315,   311,    16,   318,   312,   342,   359,
     320,   253,   322,   323,    16,   316,  -180,  -180,  -180,   325,
     397,   328,   -44,   366,   -44,   327,   401,   102,   329,   -44,
     413,   414,   369,   330,   102,   420,  -180,   333,   363,   331,
     332,   335,   -44,   -12,   336,   115,   338,    99,   403,   117,
    -180,   341,   215,  -180,   432,   253,   319,   321,   -44,   433,
     343,   404,   344,   350,   -12,   -12,   437,   253,   352,  -180,
    -180,  -180,  -180,   353,   438,   354,  -180,   356,  -180,   358,
    -180,  -180,   360,    35,  -180,   357,   362,  -180,  -180,    16,
     364,   365,   411,   361,   370,   416,  -180,  -180,  -180,   371,
     -44,    16,    16,   373,   374,   375,   441,   -44,   -65,   440,
    -180,   378,   379,   381,   456,   434,   435,  -180,   119,   156,
    -180,  -180,  -180,  -180,    31,   460,   464,   382,   -44,   418,
     377,  -180,  -180,  -180,  -180,  -180,  -180,   383,   -44,  -180,
    -180,   384,   253,   385,  -180,   471,   121,   444,   458,   417,
     389,   423,   392,  -180,  -180,  -180,   393,  -180
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
    -180,  -180,  -180,  -180,   482,   -22,  -180,  -180,  -180,   426,
      52,   -99,    53,   436,   386,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,    14,  -180,  -180,   278,  -180,  -180,   450,  -161,  -180,
    -180,  -180,  -180,   139,  -180,  -180,  -180,   171,  -180,  -180,
    -180,  -180,  -180,  -180,   165,  -120,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -179,  -180,   269,  -180,  -180
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
      27,    28,   156,   119,   192,   223,   314,     7,   131,   194,
     195,   157,   158,    43,   224,   167,   130,   196,   197,   198,
     159,   215,   199,   105,    78,    78,    77,     8,   122,     9,
      62,   162,   283,    31,    11,   266,    78,   194,   195,   211,
      79,   459,    80,    80,   222,   196,   197,   198,   194,   195,
     199,     1,   132,   284,    80,    10,   196,   197,   198,   123,
     315,   199,   278,   231,    82,    82,   171,   158,    81,   133,
     267,   268,   240,   269,   270,   271,    82,   158,   303,    31,
     134,   216,   217,   218,   171,   338,   137,   234,   135,   290,
     114,   114,   272,   307,   328,   273,   181,   182,    13,    17,
     246,   247,    83,    15,     2,   122,   329,   320,   255,   158,
     321,   165,     3,   243,   181,   182,    31,    18,    21,   136,
     158,   322,   280,   274,   294,    12,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   304,   158,   158,   305,
      22,   340,   478,    23,   137,    42,   440,    43,   212,   213,
     158,   248,   306,   309,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   302,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    44,   410,   158,   411,   471,
     412,   366,   311,   336,   373,   337,   472,    37,   225,   286,
     158,   473,    24,   381,   158,   287,   158,   365,    25,   474,
     351,   171,   158,   415,   475,    26,   476,    29,   172,    30,
     173,   174,   175,   176,   177,   178,   179,   180,    31,   275,
     158,   417,   158,   470,   158,   490,    32,    33,   137,    34,
      35,   181,   182,    37,    38,    39,    49,    40,    50,    57,
      51,    54,   387,    52,   389,    53,    56,    57,    58,   395,
     275,    59,    60,    61,    64,    63,    66,    68,    70,    67,
      69,    72,   407,    73,    71,    76,    92,    74,   443,    93,
      94,    95,    97,   100,    98,    99,   331,   101,   423,   102,
     452,   453,   103,   105,   408,   106,   104,   107,   108,   112,
     109,   113,   118,   110,   120,   148,   149,   150,   129,   151,
     154,   152,    83,   157,   155,   430,   431,   160,   161,   163,
     168,   164,   184,   186,   166,   191,   227,   229,   232,   233,
     451,   169,   170,   137,   185,   226,   188,   458,   189,   190,
     193,   238,   137,   220,   228,   221,   230,   235,   239,   236,
     254,   257,   237,   241,   256,   392,   242,   244,   482,   249,
     245,   250,   400,   251,   252,   259,   158,   281,   486,   264,
     260,   262,   289,   265,   298,   263,   282,   292,   288,   291,
     296,   325,   293,   295,   299,   297,   313,   300,   310,   312,
     319,   326,   327,   324,   332,   333,   335,   334,   339,   341,
     345,   344,   348,   346,   350,   349,   352,   353,   354,   362,
     355,   363,   357,   359,   356,   367,   376,   137,   314,   358,
     361,   384,   360,   388,   372,   391,   375,   370,   364,   137,
     137,   382,   371,   378,   374,   379,   380,   396,   397,   369,
     383,   385,   390,   394,   399,   398,   401,   402,   403,   406,
     404,   405,   414,   409,   416,   418,   419,   424,   426,   428,
     425,   432,   435,   429,   420,   433,   421,   434,   446,   436,
     441,   437,   438,   449,   439,   442,   457,   463,   444,   445,
     467,   447,   468,   469,   479,   448,   450,   454,   480,   455,
     456,   464,   484,   465,   483,   466,   481,   489,   488,   487,
     485,   491,   492,    42,   494,   495,   496,    20,   497,    96,
     460,   461,    84,   493,   153,    65,   393,     0,     0,     0,
     368,   258,     0,     0,   377,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   308
};

static const yytype_int16 yycheck[] =
{
      22,    23,   122,   102,    40,   166,    49,    62,   107,     6,
       7,    15,   103,    78,    40,   135,    29,    14,    15,    16,
     111,    24,    19,    73,    37,    37,    27,    83,    72,    83,
      52,   130,    31,    83,   102,    46,    37,     6,     7,   159,
      41,   106,    55,    55,   164,    14,    15,    16,     6,     7,
      19,     1,    36,    52,    55,     0,    14,    15,    16,   103,
     103,    19,   241,   183,    77,    77,   103,   103,    69,    53,
      81,    82,   192,    84,    85,    86,    77,   103,    75,    83,
      64,    84,    85,    86,   103,   104,   108,   186,    72,   250,
     103,   103,   103,   272,    68,   106,   133,   134,   103,    33,
     220,   221,   103,   103,    54,    72,    80,    56,   228,   103,
      59,   133,    62,   107,   133,   134,    83,    51,    47,   103,
     103,    70,   242,   134,   107,   102,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   103,   103,   103,   106,
      54,   107,   111,    54,   166,    76,   111,    78,   121,   122,
     103,   104,   272,   273,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   263,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   106,    61,   103,    63,    23,
      65,   107,   281,   303,   345,   305,    30,   108,   109,   102,
     103,    35,   104,   354,   103,   104,   103,   104,   104,    43,
     320,   103,   103,   104,    48,   103,    50,    16,   110,    16,
     112,   113,   114,   115,   116,   117,   118,   119,    83,   241,
     103,   104,   103,   104,   103,   104,    51,   103,   250,   103,
     103,   133,   134,   108,   106,    28,   104,    45,    83,    83,
      83,    83,   362,   106,   364,   104,    83,    83,   104,   369,
     272,    16,   107,   104,   103,   105,    42,    16,    14,   107,
      83,   107,   382,   103,   105,    76,    14,   106,   429,    60,
     102,    14,   103,    33,   104,   103,   298,   103,   398,    33,
     441,   442,   103,    73,   383,   102,   106,   109,   103,   105,
     104,    79,    33,   106,   106,    14,    83,   102,   104,   103,
      83,   104,   103,    15,   104,   404,   405,   103,   105,   103,
      83,   103,   107,    36,   103,    14,    14,    83,    14,    16,
     440,   106,   104,   345,   104,   106,   105,   447,   104,   107,
     104,    14,   354,   110,   106,   110,   106,   104,    47,   103,
      47,   109,   105,   105,    82,   367,   104,   104,   468,   104,
     103,   103,   374,   104,   103,   105,   103,    33,   478,    69,
     106,   106,    14,   103,   106,   109,   105,    83,   105,   105,
     103,    16,   107,   107,   104,   107,   105,    83,   106,   104,
     104,    14,    14,   110,   105,   103,   103,   107,   103,    83,
     103,   105,    47,    44,    14,   103,    83,    83,   103,   110,
     104,    14,   104,   104,   107,   105,    64,   429,    49,   135,
     103,    14,   107,    47,   103,    14,   104,   107,   110,   441,
     442,   105,   107,   103,   106,   103,   103,    14,    14,   120,
     105,   103,   105,   104,   104,    66,    16,   104,    75,   104,
     109,   109,   104,   107,    41,   104,    14,    14,    44,   105,
     107,    14,    14,   103,   135,   103,   135,   104,    47,   105,
     103,   105,   104,    47,   104,   103,    25,    27,   104,   104,
      14,   110,    38,    38,    14,   105,   105,   104,    14,   105,
     105,   103,   105,   104,    66,   104,   104,    16,   103,   105,
     107,    47,    34,    76,   105,    72,   104,    15,   105,    73,
     448,   448,    66,   489,   118,    55,   367,    -1,    -1,    -1,
     339,   233,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    54,    62,   137,   138,   142,    62,    83,    83,
       0,   102,   102,   103,   143,   103,   139,    33,    51,   140,
     140,    47,    54,    54,   104,   104,   103,   141,   141,    16,
      16,    83,    51,   103,   103,   103,   173,   108,   106,    28,
      45,   144,    76,    78,   106,   145,   146,   148,   167,   104,
      83,    83,   106,   104,    83,   168,    83,    83,   104,    16,
     107,   104,   141,   105,   103,   173,    42,   107,    16,    83,
      14,   105,   107,   103,   106,   169,    76,    27,    37,    41,
      55,    69,    77,   103,   149,   150,   154,   155,   156,   157,
     159,   161,    14,    60,   102,    14,   145,   103,   104,   103,
      33,   103,    33,   103,   106,    73,   102,   109,   103,   104,
     106,   170,   105,    79,   103,   141,   147,   149,    33,   147,
     106,   158,    72,   103,   191,   192,   193,   196,   201,   104,
      29,   147,    36,    53,    64,    72,   103,   141,   174,   175,
     177,   178,   179,   181,   182,   184,   185,   199,    14,    83,
     102,   103,   104,   150,    83,   104,   191,    15,   103,   111,
     103,   105,   147,   103,   103,   141,   103,   191,    83,   106,
     104,   103,   110,   112,   113,   114,   115,   116,   117,   118,
     119,   133,   134,   176,   107,   104,    36,   172,   105,   104,
     107,    14,    40,   104,     6,     7,    14,    15,    16,    19,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     195,   191,   121,   122,   194,    24,    84,    85,    86,   152,
     110,   110,   191,   174,    40,   109,   106,    14,   106,    83,
     106,   191,    14,    16,   147,   104,   103,   105,    14,    47,
     191,   105,   104,   107,   104,   103,   191,   191,   104,   104,
     103,   104,   103,   180,    47,   191,    82,   109,   170,   105,
     106,   162,   106,   109,    69,   103,    46,    81,    82,    84,
      85,    86,   103,   106,   134,   141,   197,   198,   199,   200,
     191,    33,   105,    31,    52,   151,   102,   104,   105,    14,
     174,   105,    83,   107,   107,   107,   103,   107,   106,   104,
      83,   160,   147,    75,   103,   106,   191,   199,   201,   191,
     106,   147,   104,   105,    49,   103,   186,   187,   190,   104,
      56,    59,    70,   183,   110,    16,    14,    14,    68,    80,
     171,   141,   105,   103,   107,   103,   191,   191,   104,   103,
     107,    83,   202,   203,   105,   103,    44,   188,    47,   103,
      14,   191,    83,    83,   103,   104,   107,   104,   135,   104,
     107,   103,   110,    14,   110,   104,   107,   105,   183,   120,
     107,   107,   103,   174,   106,   104,    64,   190,   103,   103,
     103,   174,   105,   105,    14,   103,   163,   191,    47,   191,
     105,    14,   141,   179,   104,   191,    14,    14,    66,   104,
     141,    16,   104,    75,   109,   109,   104,   191,   147,   107,
      61,    63,    65,   164,   104,   104,    41,   104,   104,    14,
     135,   135,   153,   191,    14,   107,    44,   189,   105,   103,
     147,   147,    14,   103,   104,    14,   105,   105,   104,   104,
     111,   103,   103,   174,   104,   104,    47,   110,   105,    47,
     105,   191,   174,   174,   104,   105,   105,    25,   191,   106,
     146,   148,   165,    27,   103,   104,   104,    14,    38,    38,
     104,    23,    30,    35,    43,    48,    50,   166,   111,    14,
      14,   104,   191,    66,   105,   107,   191,   105,   103,    16,
     104,    47,    34,   167,   105,    72,   104,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   136,   137,   137,   138,   138,   139,   140,   140,   141,
     142,   143,   144,   145,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   149,   150,   151,   151,   152,   152,
     152,   152,   153,   154,   154,   155,   156,   156,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   164,   164,   165,
     165,   165,   166,   166,   166,   166,   166,   166,   167,   168,
     169,   170,   171,   171,   172,   173,   174,   174,   174,   174,
     174,   174,   174,   175,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   177,   178,   179,   180,   181,   182,   183,
     183,   183,   184,   185,   186,   186,   187,   188,   189,   190,
     191,   191,   191,   191,   192,   193,   194,   194,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   196,   197,   197,   197,   197,   197,
     198,   198,   198,   198,   198,   198,   199,   199,   199,   199,
     200,   200,   200,   200,   201,   201,   202,   202,   201,   201,
     203
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
#line 50 "simple.y" /* yacc.c:1646  */
    { yyerrok;}
#line 1662 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 324 "simple.y" /* yacc.c:1646  */
    { printf("\n\tclave_valor -> CTC_CADENA '=>'expresion"); }
#line 1668 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 1672 "simple.tab.c" /* yacc.c:1646  */
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
#line 328 "simple.y" /* yacc.c:1906  */


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
