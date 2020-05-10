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
   #define YYDEBUG 1

  extern FILE *yyin;
  extern int yylex();
  int yyerror(char *s);
 

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
    CARACTER = 273,
    CASOS = 274,
    CLASE = 275,
    COMO = 276,
    CONSTANTE = 277,
    CONSTRUCTOR = 278,
    CORTO = 279,
    CUANDO = 280,
    DE = 281,
    DESCENDENTE = 282,
    DESTRUCTOR = 283,
    DEVOLVER = 284,
    DICCIONARIO = 285,
    EN = 286,
    ENTERO = 287,
    ENTONCES = 288,
    ENUMERACION = 289,
    ES = 290,
    ESPECIFICO = 291,
    EXCEPCION = 292,
    EXPORTAR = 293,
    FALSO = 294,
    FIN = 295,
    FINAL = 296,
    FINALMENTE = 297,
    GENERICO = 298,
    IMPORTAR = 299,
    LARGO = 300,
    LANZA = 301,
    LIBRERIA = 302,
    LISTA = 303,
    MIENTRAS = 304,
    OBJETO = 305,
    OTRO = 306,
    PARA = 307,
    PRINCIPIO = 308,
    PRIVADO = 309,
    PROGRAMA = 310,
    PROTEGIDO = 311,
    PRUEBA = 312,
    PUBLICO = 313,
    RANGO = 314,
    REAL = 315,
    REFERENCIA = 316,
    REGISTRO = 317,
    REPETIR = 318,
    SALIR = 319,
    SI = 320,
    SIGNO = 321,
    SIGUIENTE = 322,
    SINO = 323,
    SUBPROGRAMA = 324,
    TABLA = 325,
    TIPO = 326,
    ULTIMA = 327,
    VALOR = 328,
    VERDADERO = 329,
    CTC_CADENA = 330,
    IDENTIFICADOR = 331,
    CTC_CARACTER = 332,
    CTC_ENTERA = 333,
    CTC_REAL = 334,
    DOS_PUNTOS = 335,
    CUATRO_PUNTOS = 336,
    ASIGNACION = 337,
    FLECHA = 338,
    ASIG_SUMA = 339,
    ASIG_RESTA = 340,
    ASIG_MULT = 341,
    ASIG_DIV = 342,
    ASIG_RESTO = 343,
    ASIG_POT = 344,
    ASIG_DESPI = 345,
    ASIG_DESPD = 346,
    OPERADOR = 347,
    DELIM = 348,
    RESERVADA = 349
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

#line 223 "simple.tab.c" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  132
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  443

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   367

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
     106,   107,    16,    14,   103,    15,   127,    17,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   105,   104,
       6,   121,     7,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   128,    18,   129,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   130,     2,   131,     2,     2,     2,     2,
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
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   122,   123,   124,   125,   126
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    48,    51,    52,    55,    56,    59,    61,
      63,    64,    65,    68,    69,    72,    74,    76,    77,    80,
      81,    84,    86,    87,    88,    93,    94,    95,    98,    99,
     104,   105,   108,   109,   110,   113,   114,   115,   116,   117,
     118,   119,   120,   123,   124,   127,   128,   129,   130,   133,
     134,   137,   138,   141,   143,   144,   145,   148,   149,   152,
     155,   156,   159,   160,   163,   164,   167,   168,   173,   174,
     175,   176,   179,   180,   183,   186,   187,   190,   191,   192,
     195,   196,   197,   200,   201,   204,   205,   208,   209,   210,
     211,   212,   213,   220,   223,   224,   225,   226,   229,   232,
     233,   234,   235,   238,   239,   242,   243,   246,   248,   252,
     253,   258,   259,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   274,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   288,   289,   292,   294,   296,   297,   300,
     301,   304,   305,   308,   309,   310,   313,   315,   317,   318,
     321,   323,   324,   327,   328,   329,   332,   333,   336,   337,
     338,   339,   340,   341,   342,   345,   346,   347,   348,   349,
     350,   353,   356,   359,   362,   363,   364,   367,   370,   371,
     374,   377,   380,   386,   387,   388,   389,   392,   398,   401,
     402,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   423,   424,   427,
     428,   429,   430,   431,   432,   435,   436,   437,   438,   441,
     442,   445,   446,   449,   450,   451,   452,   455,   456,   459,
     460,   461,   462,   463,   468,   469,   472,   473,   476,   477,
     480,   481,   484,   485,   488,   490
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
  "BUCLE", "CARACTER", "CASOS", "CLASE", "COMO", "CONSTANTE",
  "CONSTRUCTOR", "CORTO", "CUANDO", "DE", "DESCENDENTE", "DESTRUCTOR",
  "DEVOLVER", "DICCIONARIO", "EN", "ENTERO", "ENTONCES", "ENUMERACION",
  "ES", "ESPECIFICO", "EXCEPCION", "EXPORTAR", "FALSO", "FIN", "FINAL",
  "FINALMENTE", "GENERICO", "IMPORTAR", "LARGO", "LANZA", "LIBRERIA",
  "LISTA", "MIENTRAS", "OBJETO", "OTRO", "PARA", "PRINCIPIO", "PRIVADO",
  "PROGRAMA", "PROTEGIDO", "PRUEBA", "PUBLICO", "RANGO", "REAL",
  "REFERENCIA", "REGISTRO", "REPETIR", "SALIR", "SI", "SIGNO", "SIGUIENTE",
  "SINO", "SUBPROGRAMA", "TABLA", "TIPO", "ULTIMA", "VALOR", "VERDADERO",
  "CTC_CADENA", "IDENTIFICADOR", "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL",
  "DOS_PUNTOS", "CUATRO_PUNTOS", "ASIGNACION", "FLECHA", "ASIG_SUMA",
  "ASIG_RESTA", "ASIG_MULT", "ASIG_DIV", "ASIG_RESTO", "ASIG_POT",
  "ASIG_DESPI", "ASIG_DESPD", "OPERADOR", "DELIM", "RESERVADA", "','",
  "';'", "':'", "'('", "')'", "\":=\"", "\":+\"", "\":-\"", "\"-*\"",
  "\":/\"", "\":\\\\\"", "\":^\"", "\":<\"", "\":>\"", "\"\\\\/\"",
  "\"/\\\\\"", "\"<=\"", "\">=\"", "'='", "\"~=\"", "\"<-\"", "\"->\"",
  "\"/\"", "\"\\\\\"", "'.'", "'['", "']'", "'{'", "'}'", "$accept",
  "programa", "varios_identificadores", "varias_librerias",
  "definicion_programa", "codigo_programa", "libreria", "cero_o_masID",
  "nombre", "definicion_libreria", "codigo_libreria", "varios_nombres",
  "exportaciones", "declaracion", "declaracion_objeto",
  "especificacion_tipo", "declaracion_tipo", "tipo_no_estructurado",
  "tipo_escalar", "longitud", "tipo_basico", "rango", "tipo_tabla",
  "tipo_diccionario", "tipo_estructurado", "varios_campos",
  "tipo_registro", "campo", "tipo_enumerado",
  "varios_elementos_enumeracion", "elemento_enumeracion", "clase",
  "varias_declaraciones_componentes", "superclases",
  "declaracion_componente", "visibilidad", "componente", "sin_modificador",
  "varios_modificadores", "modificador", "declaracion_subprograma",
  "cabecera_subprograma", "parametrizacion", "declaracion_parametros",
  "varias_declaraciones_parametros", "modo", "tipo_resultado",
  "cuerpo_subprograma", "varias_declaraciones", "varias_instrucciones",
  "instruccion", "instruccion_asignacion", "op_asignacion",
  "instruccion_devolver", "instruccion_llamada", "llamada_subprograma",
  "sin_definiciones_parametro", "varias_definiciones_parametro",
  "definicion_parametro", "instruccion_si", "instruccion_casos", "caso",
  "varios_casos", "entradas", "varias_entradas", "entrada",
  "instruccion_bucle", "clausula_iteracion", "instruccion_interrupcion",
  "cuando", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausulas", "clausulas_excepcion",
  "varias_clausula_excepcion_especifica", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_finalmente", "expresion",
  "expresion_binaria", "expresion_posfija", "operador_posfijo",
  "op_binario", "expresion_unaria", "primario", "literal", "op_booleano",
  "num", "objeto", "varias_ctc_cadena", "enumeraciones",
  "varias_clausulas_iteracion", "varias_expresiones",
  "varias_claves_valor", "varios_campos_valor", "expresion_condicional",
  "clave_valor", "campo_valor", YY_NULLPTR
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
     347,   348,   349,    44,    59,    58,    40,    41,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,    61,   363,   364,   365,   366,   367,    46,    91,    93,
     123,   125
};
# endif

#define YYPACT_NINF -217

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-217)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,   -34,   -23,   118,  -217,  -217,     9,    16,  -217,  -217,
    -217,   148,  -217,   114,  -217,    69,  -217,    73,    62,   108,
    -217,   -33,  -217,   126,   126,  -217,  -217,  -217,  -217,  -217,
      72,  -217,   115,  -217,    49,  -217,     2,   126,   169,   134,
     289,  -217,  -217,  1030,   170,   136,  -217,  -217,     3,   286,
    -217,   189,  -217,   156,  1168,  -217,  -217,  -217,   286,   200,
    -217,   206,  -217,   111,   139,  -217,    22,  -217,  -217,    34,
    -217,  -217,   953,    91,   173,  -217,   953,   163,  1030,   165,
     150,   953,   -25,   202,   154,  -217,   159,   214,  1030,  -217,
    -217,  -217,   167,  -217,  -217,  -217,  1030,  -217,  -217,  -217,
    1140,   185,  -217,  -217,   196,  -217,  -217,   185,  -217,  -217,
     208,     4,   185,   178,  -217,  -217,  -217,  -217,   164,   286,
     286,    58,   953,   953,  -217,  -217,  -217,   953,   216,    11,
    -217,  -217,   953,  -217,  -217,  -217,  -217,  -217,   953,   953,
     105,  -217,    37,  -217,  -217,   188,  -217,  -217,  -217,  -217,
     195,  -217,  -217,  -217,   279,  -217,   180,   808,   -14,   223,
     -10,   187,   215,   302,   953,  -217,   192,   228,   130,   817,
    -217,  -217,  -217,   258,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,   227,   953,   224,   953,   113,   226,    66,
     -47,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
     966,  -217,  -217,  -217,  1073,  1139,  -217,    96,  -217,   251,
     229,  -217,   146,   241,   -39,  -217,   101,    15,  -217,  -217,
     953,  -217,  -217,   953,   268,   371,   426,  -217,   441,   953,
    -217,   159,  -217,   459,   496,   808,   833,     5,   242,   245,
     -60,   -49,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
     306,   953,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,   953,  -217,  -217,  -217,  -217,  -217,   953,   286,
    1030,   292,   223,   296,  -217,   277,   286,  -217,   -19,  1030,
     808,  -217,  -217,  1030,   256,   244,   250,  -217,   808,   323,
    -217,   893,  -217,    13,   519,  -217,  -217,  1153,  -217,  -217,
    1092,  1139,   -62,   328,  -217,  1102,  -217,  -217,   212,   278,
     953,   319,   278,   286,   295,  -217,   580,  -217,   953,   953,
    -217,   953,  -217,   953,  -217,  -217,   808,  -217,  -217,    21,
     953,   953,  -217,  -217,  -217,  -217,  -217,  -217,     1,   591,
     808,   808,   327,  -217,   304,  -217,  1004,  -217,  -217,   335,
     333,  -217,   272,  -217,   334,   953,  -217,   817,  -217,  -217,
     298,  -217,  -217,  -217,  -217,   299,   286,   360,  1136,  -217,
    -217,   363,  -217,   -17,   808,  -217,  -217,    32,  -217,  -217,
    -217,   651,   662,   673,  -217,  -217,   808,   808,   301,   899,
     366,  -217,   953,   953,  -217,  -217,  -217,  -217,   339,  -217,
     382,   808,  -217,  -217,   953,   318,  -217,   381,  -217,   368,
     953,  -217,   377,   953,   953,  1030,  -217,   307,   737,  -217,
     808,   808,   308,   378,  -217,   808,   953,  -217,  -217,   748,
     286,   808,   808,  -217,  -217,   953,  1030,  -217,   808,  -217,
    -217,   808,  -217
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     1,     7,
       7,   110,    16,   110,     8,     0,    14,     0,     0,     0,
       5,     0,     6,   110,   110,    22,    23,    24,    17,     9,
       0,    14,     0,    20,     0,    14,    94,   110,     0,     0,
      14,    18,   109,     0,     0,    15,    14,    21,     0,    14,
     104,    95,    96,     0,     0,     4,    45,    46,    14,     0,
      47,     0,    48,     0,     0,    28,     0,    29,    32,    35,
      33,    34,    14,    14,     0,    14,    14,     0,     0,     0,
     167,    14,     0,     0,     0,   122,   223,     0,   112,   113,
     114,   115,     0,   116,   117,   118,     0,   119,   120,   121,
       0,     0,    13,    19,     0,    10,   107,     0,    97,    93,
      84,     0,     0,     0,    31,    54,    55,    56,     0,    14,
      14,    36,    14,    14,    26,    43,    44,    14,    37,    14,
     220,    14,    14,   219,   218,   217,   221,   222,    14,    14,
       0,   211,     0,   184,   183,   185,   207,   209,   216,   215,
     210,   213,   186,   133,     0,   145,     0,   164,     0,   179,
       0,     0,     0,     0,    14,   165,     0,     0,     0,   138,
     108,   111,   135,     0,   124,   125,   126,   127,   128,   129,
     130,   131,   132,     0,    14,     0,    14,     0,     0,     0,
       0,    90,    87,    88,    91,    92,    89,    79,    78,    77,
      84,    14,    81,    80,    84,    84,    73,    84,    75,     0,
      83,    86,     0,    66,     0,    65,     0,     0,    58,    30,
      14,    53,    52,    14,    40,     0,     0,    38,     0,    14,
     208,     0,   212,     0,     0,   237,    14,   186,     0,     0,
       0,     0,   239,   241,   193,   194,   201,   202,   203,   206,
       0,    14,   191,   192,   195,   196,   197,   198,   199,   200,
     204,   205,    14,   189,   190,   188,   134,   172,    14,    14,
       0,     0,   174,     0,   176,     0,    14,   170,     0,     0,
     171,   166,   144,     0,     0,     0,   137,   140,   141,     0,
     224,    14,   228,     0,     0,    12,    11,    14,   103,    98,
      84,    84,     0,     0,    72,    84,    76,    82,     0,     0,
      14,     0,     0,    14,     0,    57,     0,    42,    14,    14,
      27,    14,    39,    14,   214,   231,   236,   229,   235,     0,
      14,    14,   232,   238,   233,   240,   152,   149,     0,     0,
     187,   158,     0,   182,     0,   175,     0,   178,   177,   160,
       0,   169,     0,   143,     0,    14,   136,     0,   156,   225,
       0,   226,   123,   106,   105,    99,    14,     0,    84,    74,
      69,     0,    85,     0,    67,    62,    64,     0,    59,    25,
      41,     0,    49,     0,   230,   234,   244,   245,     0,    14,
       0,   148,    14,    14,   173,    14,   181,   161,     0,   168,
       0,   142,   139,   227,    14,   100,    70,     0,    71,     0,
      14,    60,     0,    14,    14,     0,   155,   150,   153,   146,
     242,   159,     0,   162,   157,   101,    14,    68,    63,     0,
      14,    50,   243,   147,   151,    14,     0,   163,   102,    61,
      51,   154,   180
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,   -96,   406,  -217,  -217,  -217,  -217,   -16,  -217,
    -217,   217,  -217,  -217,   266,   -46,   439,   375,   205,   309,
     372,  -216,  -217,  -217,  -217,  -217,  -217,   219,  -217,   122,
     125,  -217,  -178,   234,  -200,  -217,   231,  -217,  -217,   131,
     237,  -217,  -217,  -217,  -217,  -217,   392,   412,   119,   -68,
    -217,  -217,  -217,  -217,  -217,   -42,  -217,  -217,    94,  -217,
    -217,   116,  -217,  -217,  -217,  -217,  -217,  -162,  -217,   175,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,   186,   -55,  -217,
    -217,  -217,  -217,  -217,   332,  -217,  -217,  -217,   -41,  -217,
    -217,  -217,   280,  -217,  -217,   329,   230,   236
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    21,    11,     4,    14,    22,    32,    86,     5,
      12,    34,    23,    24,   202,    66,   203,    67,    68,   128,
      69,   227,    70,    71,   114,   217,   115,   218,   116,   214,
     215,   117,   204,   205,   206,   207,   208,   209,   210,   211,
      27,    37,    51,   190,   107,   366,    52,    29,    30,    87,
      88,    89,   186,    90,    91,   141,   285,   286,   287,    93,
      94,   337,   338,   388,   389,   417,    95,    96,    97,   166,
      98,    99,   271,   272,   273,   347,   348,   274,   228,   143,
     144,   265,   262,   145,   146,   147,   148,   149,   150,   293,
     151,   329,   236,   240,   241,   152,   242,   243
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      33,    92,   100,   106,   304,   187,   283,   317,   164,   311,
     159,   189,   118,   322,   164,    44,   216,   142,   154,    48,
     171,   157,   300,   238,    65,   268,   163,   305,   173,   275,
     103,   409,   104,    65,   336,   239,    92,   100,   212,    49,
       1,    46,    65,   244,   245,   369,    92,   100,     2,   390,
       6,   246,   247,   248,    92,   100,   249,   298,   130,   156,
     299,     7,    76,   314,   312,    77,   125,   225,   226,   131,
      39,   332,    40,   221,   222,   328,    79,   233,    76,   165,
     250,    77,   334,   234,   235,   351,   312,   126,   213,   232,
     125,   269,    79,   133,   134,   276,   135,   136,   137,    20,
     304,   127,   380,    65,    65,   304,   129,   105,    50,   280,
     251,   126,   123,     9,   288,   231,   360,   138,     8,   191,
      10,   216,   410,   368,    31,   223,   124,   192,    35,   235,
      28,   294,   193,    43,   327,    56,   411,    57,   130,   139,
     194,   140,    41,    42,   361,   195,    36,   196,    15,   131,
     384,    60,    46,    47,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   132,   316,    17,   385,   304,    39,
      56,   297,    57,   133,   134,    19,   135,   136,   137,    62,
      20,   326,    15,   161,   162,    33,    60,    76,   238,   239,
      77,    18,    38,    19,    16,   153,   339,   138,    20,    45,
      17,    79,   343,    18,    39,    19,   313,   340,   263,   264,
      20,   353,    54,   341,    62,   354,    39,   295,    55,   139,
      63,   140,   101,   342,   102,    18,    49,    19,    92,   100,
     350,   191,    20,   109,   119,   191,   326,    92,   100,   192,
     120,    92,   100,   192,   193,   122,   155,   158,   193,   160,
     167,   365,   194,    65,   220,   374,   194,   195,   168,   196,
      65,   195,   170,   196,   381,   169,   382,   377,   383,    20,
     197,   172,   198,   270,   199,   386,   387,    25,   396,    25,
     188,    65,   219,   229,   267,   244,   245,    19,   200,    25,
      25,   277,    20,   246,   247,   248,   281,    65,   249,   278,
     401,   282,   288,    25,    92,   100,   289,   292,   244,   245,
      56,   290,    57,    56,   201,    57,   246,   247,   248,    58,
     405,   249,   183,   184,    59,   185,    60,    59,    18,    60,
     296,   310,   308,   330,   418,   318,   331,   420,   421,   336,
     344,   346,    61,   279,   349,    61,   355,   433,   358,   425,
      65,   356,   251,   357,    62,   429,   370,    62,   431,   432,
      63,   375,   213,    63,    64,   378,   393,    64,   442,   394,
     397,   438,   398,    92,   100,   251,   399,   244,   245,   422,
     441,   403,   400,   266,   440,   246,   247,   248,   406,   404,
     249,   408,   415,   419,    92,   100,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   423,   424,   426,   427,
     428,   430,   434,   437,    65,   436,    13,   309,   302,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   113,
     224,   373,   244,   245,   301,   121,   315,   376,   306,   372,
     246,   247,   248,   108,   251,   249,   307,   244,   245,    53,
      26,   402,    26,   352,   391,   246,   247,   248,   345,   319,
     249,   230,    26,    26,   291,   244,   245,     0,   237,     0,
     333,     0,     0,   246,   247,   248,    26,   335,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   251,
     323,     0,   244,   245,     0,     0,     0,     0,     0,     0,
     246,   247,   248,     0,   251,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   244,   245,     0,     0,   321,
     320,     0,   251,   246,   247,   248,     0,     0,   249,     0,
       0,     0,     0,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     0,     0,     0,     0,     0,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   251,
       0,     0,     0,     0,     0,     0,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   244,   245,     0,     0,
       0,     0,   251,     0,   246,   247,   248,   244,   245,   249,
       0,     0,     0,   324,     0,   246,   247,   248,     0,     0,
     249,     0,     0,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   362,     0,     0,     0,     0,     0,     0,
       0,     0,   392,     0,     0,     0,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,     0,     0,     0,     0,
       0,     0,     0,   251,     0,     0,     0,   244,   245,     0,
       0,     0,     0,     0,   251,   246,   247,   248,   244,   245,
     249,     0,     0,     0,     0,     0,   246,   247,   248,   244,
     245,   249,     0,     0,   379,     0,     0,   246,   247,   248,
       0,     0,   249,     0,     0,     0,     0,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,     0,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,   244,   245,     0,   251,     0,     0,   414,
     413,   246,   247,   248,   244,   245,   249,     0,   412,     0,
       0,     0,   246,   247,   248,     0,     0,   249,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,     0,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     251,     0,     0,     0,   244,   245,     0,     0,     0,     0,
       0,   251,   246,   247,   248,   435,     0,   249,     0,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,   439,     0,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   130,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   131,     0,     0,     0,     0,
     130,   251,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   131,     0,     0,     0,     0,     0,     0,     0,   133,
     134,   284,   135,   136,   137,     0,   132,     0,   129,     0,
       0,     0,     0,     0,   129,   133,   134,     0,   135,   136,
     137,     0,     0,   138,     0,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,     0,     0,     0,     0,   138,
     130,     0,     0,     0,     0,   139,   130,   140,     0,     0,
       0,   131,     0,     0,     0,     0,     0,   131,   416,     0,
       0,   139,   325,   140,     0,     0,   132,     0,   129,     0,
       0,     0,   132,     0,     0,   133,   134,     0,   135,   136,
     137,   133,   134,     0,   135,   136,   137,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,   192,     0,   138,
     130,     0,   193,     0,     0,   138,     0,     0,     0,     0,
     194,   131,     0,     0,     0,   195,     0,   196,     0,     0,
       0,   139,   359,   140,     0,     0,   132,   139,   197,   140,
     198,    72,   199,     0,     0,   133,   134,     0,   135,   136,
     137,    73,     0,     0,     0,    19,     0,     0,     0,     0,
      20,     0,    74,     0,     0,     0,     0,    72,    75,   138,
       0,    76,     0,     0,    77,     0,     0,    73,     0,    78,
       0,     0,   201,     0,     0,    79,    80,    81,    74,    82,
      83,   139,     0,   140,    75,     0,     0,    76,    84,     0,
      77,     0,     0,     0,     0,    78,   191,     0,     0,     0,
       0,    79,    80,    81,   192,    82,    83,     0,    85,   193,
     395,     0,     0,     0,    84,   191,     0,   194,     0,     0,
       0,   303,   195,   192,   196,   191,     0,     0,   193,     0,
       0,     0,     0,   192,    85,   197,   194,   198,   193,   199,
     367,   195,     0,   196,     0,     0,   194,     0,     0,     0,
     371,   195,    19,   196,   197,     0,   198,    20,   199,   191,
       0,     0,   191,     0,   197,     0,   198,   192,   199,     0,
     192,    19,   193,     0,     0,   193,    20,    56,     0,    57,
     194,    19,     0,   194,   407,   195,    20,   196,   195,     0,
     196,    59,    56,    60,    57,     0,   110,     0,   197,     0,
     198,   197,   199,   198,     0,   199,    59,     0,    60,    61,
     111,     0,     0,     0,     0,    19,     0,     0,    19,     0,
      20,    62,   363,    20,    61,     0,     0,    63,     0,     0,
       0,    64,     0,     0,   364,     0,    62,     0,   112,     0,
       0,     0,    63,     0,     0,     0,    64,     0,   174,   175,
     176,   177,   178,   179,   180,   181,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   183,   184,     0,
     185
};

static const yytype_int16 yycheck[] =
{
      16,    43,    43,    49,   204,   101,   168,   223,    33,    48,
      78,   107,    58,   229,    33,    31,   112,    72,    73,    35,
      88,    76,   200,    83,    40,    39,    81,   205,    96,    39,
      46,    48,    29,    49,    33,    84,    78,    78,    34,    37,
      55,   103,    58,     6,     7,   107,    88,    88,    63,    48,
      84,    14,    15,    16,    96,    96,    19,   104,    47,    75,
     107,    84,    57,    48,   103,    60,    32,   122,   123,    58,
     103,   131,   105,   119,   120,   237,    71,   132,    57,   104,
      43,    60,   131,   138,   139,   104,   103,    53,    84,   131,
      32,   105,    71,    82,    83,   105,    85,    86,    87,    84,
     300,    67,   318,   119,   120,   305,    15,   104,   106,   164,
      73,    53,    90,   104,   169,   131,   103,   106,     0,    23,
     104,   217,    90,   301,    55,    67,   104,    31,    55,   184,
      11,   186,    36,    61,   129,    24,   104,    26,    47,   128,
      44,   130,    23,    24,   131,    49,    84,    51,    34,    58,
     129,    40,   103,   104,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    73,   220,    52,   329,   368,   103,
      24,   105,    26,    82,    83,    79,    85,    86,    87,    68,
      84,   236,    34,    33,    34,   201,    40,    57,    83,    84,
      60,    77,    84,    79,    46,   104,   251,   106,    84,    84,
      52,    71,   270,    77,   103,    79,   105,   262,    20,    21,
      84,   279,    43,   268,    68,   283,   103,   104,    84,   128,
      74,   130,    52,   269,    88,    77,    37,    79,   270,   270,
     276,    23,    84,    77,    34,    23,   291,   279,   279,    31,
      34,   283,   283,    31,    36,   106,    73,    84,    36,    84,
      48,   297,    44,   269,    90,   310,    44,    49,   104,    51,
     276,    49,    48,    51,   319,   106,   321,   313,   323,    84,
      62,   104,    64,    50,    66,   330,   331,    11,   346,    13,
      84,   297,   104,    67,   104,     6,     7,    79,    80,    23,
      24,   104,    84,    14,    15,    16,   104,   313,    19,    84,
     355,    73,   357,    37,   346,   346,    48,    83,     6,     7,
      24,    84,    26,    24,   106,    26,    14,    15,    16,    30,
     366,    19,   127,   128,    38,   130,    40,    38,    77,    40,
     104,    90,   103,    91,   389,    67,    91,   392,   393,    33,
      48,    45,    56,    41,    67,    56,    90,   415,    25,   404,
     366,   107,    73,   103,    68,   410,    28,    68,   413,   414,
      74,    42,    84,    74,    78,    70,    39,    78,   436,    65,
      35,   426,    39,   415,   415,    73,   104,     6,     7,   395,
     435,    83,    48,   104,   430,    14,    15,    16,    28,    90,
      19,    28,    91,    27,   436,   436,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    67,    25,    90,    28,
      42,    34,   105,    35,   430,   107,    10,   212,   201,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    54,
     121,   309,     6,     7,   200,    63,   217,   312,   207,   308,
      14,    15,    16,    51,    73,    19,   209,     6,     7,    37,
      11,   357,    13,   278,   338,    14,    15,    16,   272,    88,
      19,   129,    23,    24,   184,     6,     7,    -1,   139,    -1,
     240,    -1,    -1,    14,    15,    16,    37,   241,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    73,
      41,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    -1,    73,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    88,
     104,    -1,    73,    14,    15,    16,    -1,    -1,    19,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     6,     7,    -1,    -1,
      -1,    -1,    73,    -1,    14,    15,    16,     6,     7,    19,
      -1,    -1,    -1,   107,    -1,    14,    15,    16,    -1,    -1,
      19,    -1,    -1,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    -1,    -1,    73,    14,    15,    16,     6,     7,
      19,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,     6,
       7,    19,    -1,    -1,   104,    -1,    -1,    14,    15,    16,
      -1,    -1,    19,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,     7,    -1,    73,    -1,    -1,    76,
      88,    14,    15,    16,     6,     7,    19,    -1,   107,    -1,
      -1,    -1,    14,    15,    16,    -1,    -1,    19,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    73,    14,    15,    16,    88,    -1,    19,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,   104,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    47,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    58,    -1,    -1,    -1,    -1,
      47,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    -1,    73,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    15,    82,    83,    -1,    85,    86,
      87,    -1,    -1,   106,    -1,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,   106,
      47,    -1,    -1,    -1,    -1,   128,    47,   130,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,   128,   129,   130,    -1,    -1,    73,    -1,    15,    -1,
      -1,    -1,    73,    -1,    -1,    82,    83,    -1,    85,    86,
      87,    82,    83,    -1,    85,    86,    87,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,   106,
      47,    -1,    36,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      44,    58,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,   128,   129,   130,    -1,    -1,    73,   128,    62,   130,
      64,    27,    66,    -1,    -1,    82,    83,    -1,    85,    86,
      87,    37,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      84,    -1,    48,    -1,    -1,    -1,    -1,    27,    54,   106,
      -1,    57,    -1,    -1,    60,    -1,    -1,    37,    -1,    65,
      -1,    -1,   106,    -1,    -1,    71,    72,    73,    48,    75,
      76,   128,    -1,   130,    54,    -1,    -1,    57,    84,    -1,
      60,    -1,    -1,    -1,    -1,    65,    23,    -1,    -1,    -1,
      -1,    71,    72,    73,    31,    75,    76,    -1,   104,    36,
     106,    -1,    -1,    -1,    84,    23,    -1,    44,    -1,    -1,
      -1,    48,    49,    31,    51,    23,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    31,   104,    62,    44,    64,    36,    66,
      48,    49,    -1,    51,    -1,    -1,    44,    -1,    -1,    -1,
      48,    49,    79,    51,    62,    -1,    64,    84,    66,    23,
      -1,    -1,    23,    -1,    62,    -1,    64,    31,    66,    -1,
      31,    79,    36,    -1,    -1,    36,    84,    24,    -1,    26,
      44,    79,    -1,    44,    48,    49,    84,    51,    49,    -1,
      51,    38,    24,    40,    26,    -1,    28,    -1,    62,    -1,
      64,    62,    66,    64,    -1,    66,    38,    -1,    40,    56,
      42,    -1,    -1,    -1,    -1,    79,    -1,    -1,    79,    -1,
      84,    68,    69,    84,    56,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    81,    -1,    68,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
     130
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    63,   133,   136,   141,    84,    84,     0,   104,
     104,   135,   142,   135,   137,    34,    46,    52,    77,    79,
      84,   134,   138,   144,   145,   146,   148,   172,   180,   179,
     180,    55,   139,   140,   143,    55,    84,   173,    84,   103,
     105,   180,   180,    61,   140,    84,   103,   104,   140,    37,
     106,   174,   178,   179,    43,    84,    24,    26,    30,    38,
      40,    56,    68,    74,    78,   140,   147,   149,   150,   152,
     154,   155,    27,    37,    48,    54,    57,    60,    65,    71,
      72,    73,    75,    76,    84,   104,   140,   181,   182,   183,
     185,   186,   187,   191,   192,   198,   199,   200,   202,   203,
     220,    52,    88,   140,    29,   104,   147,   176,   178,    77,
      28,    42,    70,   149,   156,   158,   160,   163,   147,    34,
      34,   152,   106,    90,   104,    32,    53,    67,   151,    15,
      47,    58,    73,    82,    83,    85,    86,    87,   106,   128,
     130,   187,   210,   211,   212,   215,   216,   217,   218,   219,
     220,   222,   227,   104,   210,    73,   140,   210,    84,   181,
      84,    33,    34,   210,    33,   104,   201,    48,   104,   106,
      48,   181,   104,   181,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   127,   128,   130,   184,   134,    84,   134,
     175,    23,    31,    36,    44,    49,    51,    62,    64,    66,
      80,   106,   146,   148,   164,   165,   166,   167,   168,   169,
     170,   171,    34,    84,   161,   162,   134,   157,   159,   104,
      90,   147,   147,    67,   151,   210,   210,   153,   210,    67,
     216,   140,   187,   210,   210,   210,   224,   227,    83,    84,
     225,   226,   228,   229,     6,     7,    14,    15,    16,    19,
      43,    73,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   214,    20,    21,   213,   104,   104,    39,   105,
      50,   204,   205,   206,   209,    39,   105,   104,    84,    41,
     210,   104,    73,   199,    84,   188,   189,   190,   210,    48,
      84,   224,    83,   221,   210,   104,   104,   105,   104,   107,
     164,   165,   143,    48,   166,   164,   168,   172,   103,   150,
      90,    48,   103,   105,    48,   159,   210,   153,    67,    88,
     104,    88,   153,    41,   107,   129,   210,   129,   199,   223,
      91,    91,   131,   228,   131,   229,    33,   193,   194,   210,
     210,   210,   147,   181,    48,   209,    45,   207,   208,    67,
     147,   104,   201,   181,   181,    90,   107,   103,    25,   129,
     103,   131,   104,    69,    81,   147,   177,    48,   164,   107,
      28,    48,   171,   161,   210,    42,   162,   147,    70,   104,
     153,   210,   210,   210,   129,   199,   210,   210,   195,   196,
      48,   193,    41,    39,    65,   106,   181,    35,    39,   104,
      48,   210,   190,    83,    90,   147,    28,    48,    28,    48,
      90,   104,   107,    88,    76,    91,    59,   197,   210,    27,
     210,   210,   140,    67,    25,   210,    90,    28,    42,   210,
      34,   210,   210,   181,   105,    88,   107,    35,   210,   104,
     147,   210,   181
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     138,   138,   138,   139,   139,   140,   141,   142,   142,   143,
     143,   144,   145,   145,   145,   146,   146,   146,   147,   147,
     148,   148,   149,   149,   149,   150,   150,   150,   150,   150,
     150,   150,   150,   151,   151,   152,   152,   152,   152,   153,
     153,   154,   154,   155,   156,   156,   156,   157,   157,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   163,   164,   164,   165,   166,   166,   167,   167,   167,
     168,   168,   168,   169,   169,   170,   170,   171,   171,   171,
     171,   171,   171,   172,   173,   173,   173,   173,   174,   175,
     175,   175,   175,   176,   176,   177,   177,   178,   179,   180,
     180,   181,   181,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   183,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   185,   185,   186,   187,   188,   188,   189,
     189,   190,   190,   191,   191,   191,   192,   193,   194,   194,
     195,   196,   196,   197,   197,   197,   198,   198,   199,   199,
     199,   199,   199,   199,   199,   200,   200,   200,   200,   200,
     200,   201,   202,   203,   204,   204,   204,   205,   206,   206,
     207,   208,   209,   210,   210,   210,   210,   211,   212,   213,
     213,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   215,   215,   216,
     216,   216,   216,   216,   216,   217,   217,   217,   217,   218,
     218,   219,   219,   220,   220,   220,   220,   221,   221,   222,
     222,   222,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     2,     0,     4,     2,
       4,     6,     6,     3,     0,     2,     4,     2,     3,     3,
       1,     3,     1,     1,     1,     7,     4,     6,     1,     1,
       5,     4,     1,     1,     1,     1,     2,     2,     3,     4,
       3,     5,     4,     1,     1,     1,     1,     1,     1,     3,
       5,     8,     3,     3,     1,     1,     1,     2,     1,     4,
       4,     6,     4,     6,     3,     1,     1,     3,     6,     4,
       5,     5,     2,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     2,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     2,     2,     3,     4,     3,
       4,     5,     6,     3,     0,     1,     1,     2,     4,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     4,     1,     0,     3,
       1,     1,     3,     4,     3,     2,     6,     4,     2,     1,
       2,     3,     0,     1,     3,     1,     4,     6,     4,     6,
       4,     5,     6,     7,     2,     2,     3,     1,     5,     4,
       3,     2,     3,     5,     1,     2,     1,     2,     2,     0,
       5,     2,     2,     1,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     3,     1,     3,
       4,     3,     3,     3,     2,     1,     2,     1,     2,     1,
       2,     1,     5,     6,     3,     3
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
        case 2:
#line 47 "simple.y" /* yacc.c:1646  */
    { printf ("programa -> definicion_programa \n"); }
#line 1837 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "simple.y" /* yacc.c:1646  */
    { printf ("programa -> definicion_libreria \n"); }
#line 1843 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "simple.y" /* yacc.c:1646  */
    { printf ("varios_identificadores -> varios_identificadores , IDENTIFICADOR \n"); }
#line 1849 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "simple.y" /* yacc.c:1646  */
    { printf ("varios_identificadores -> IDENTIFICADOR\n"); }
#line 1855 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "simple.y" /* yacc.c:1646  */
    { printf ("varias_librerias -> varias_librerias libreria \n"); }
#line 1861 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_programa -> PROGRAMA IDENTIFICADOR ; codigo_programa \n"); }
#line 1867 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "simple.y" /* yacc.c:1646  */
    { printf ("codigo_programa -> varias_librerias  cuerpo_subprograma \n"); }
#line 1873 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "simple.y" /* yacc.c:1646  */
    { printf ("libreria -> IMPORTAR LIBRERIA nombre ; \n"); }
#line 1879 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "simple.y" /* yacc.c:1646  */
    { printf ("libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
#line 1885 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "simple.y" /* yacc.c:1646  */
    { printf ("libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
#line 1891 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "simple.y" /* yacc.c:1646  */
    { printf ("cero_o_masID -> cero_o_masID IDENTIFICADOR DOS_PUNTOS\n"); }
#line 1897 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 72 "simple.y" /* yacc.c:1646  */
    { printf ("nombre -> cero_o_masID IDENTIFICADOR\n"); }
#line 1903 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "simple.y" /* yacc.c:1646  */
    { printf ("codigo_libreria -> varias_librerias varias_declaraciones\n"); }
#line 1909 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "simple.y" /* yacc.c:1646  */
    { printf ("codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
#line 1915 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "simple.y" /* yacc.c:1646  */
    { printf ("varios_nombres ->  varios_nombres , nombre\n"); }
#line 1921 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "simple.y" /* yacc.c:1646  */
    { printf ("varios_nombres ->  nombre\n"); }
#line 1927 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "simple.y" /* yacc.c:1646  */
    { printf ("exportaciones -> EXPORTAR varios_nombres ;\n"); }
#line 1933 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion -> declaracion_objeto\n"); }
#line 1939 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion -> declaracion_tipo\n"); }
#line 1945 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion -> declaracion_subprograma\n"); }
#line 1951 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_objeto -> varios_identificadores : CONSTANTE especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1957 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_objeto -> varios_identificadores : especificacion_tipo ; \n"); }
#line 1963 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 1969 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "simple.y" /* yacc.c:1646  */
    { printf ("especificacion_tipo -> nombre\n"); }
#line 1975 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "simple.y" /* yacc.c:1646  */
    { printf ("especificacion_tipo -> tipo_no_estructurado\n"); }
#line 1981 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 104 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
#line 1987 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 105 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado \n"); }
#line 1993 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 108 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_no_estructurado -> tipo_escalar \n"); }
#line 1999 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 109 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_no_estructurado -> tipo_tabla\n"); }
#line 2005 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_no_estructurado -> tipo_diccionario \n"); }
#line 2011 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 113 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> tipo_basico \n"); }
#line 2017 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 114 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> SIGNO tipo_basico \n"); }
#line 2023 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 115 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> tipo_basico  longitud \n"); }
#line 2029 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> tipo_basico RANGO rango \n"); }
#line 2035 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 117 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> tipo_basico longitud RANGO rango \n"); }
#line 2041 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 118 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> SIGNO tipo_basico longitud\n"); }
#line 2047 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 119 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> SIGNO tipo_basico longitud RANGO rango \n"); }
#line 2053 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 120 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_escalar -> SIGNO tipo_basico RANGO rango \n"); }
#line 2059 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 123 "simple.y" /* yacc.c:1646  */
    { printf ("longitud -> CORTO \n"); }
#line 2065 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 124 "simple.y" /* yacc.c:1646  */
    { printf ("longitud -> LARGO \n"); }
#line 2071 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 127 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_basico -> BOOLEANO \n"); }
#line 2077 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_basico -> CARACTER \n"); }
#line 2083 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 129 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_basico -> ENTERO \n"); }
#line 2089 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 130 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_basico -> REAL \n"); }
#line 2095 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 133 "simple.y" /* yacc.c:1646  */
    { printf ("rango -> expresion DOS_PUNTOS expresion\n"); }
#line 2101 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 134 "simple.y" /* yacc.c:1646  */
    { printf ("rango -> expresion DOS_PUNTOS expresion DOS_PUNTOS expresion\n"); }
#line 2107 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 137 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_tabla -> TABLA ( expresion DOS_PUNTOS expresion ) DE especificacion_tipo\n"); }
#line 2113 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 138 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_tabla -> LISTA DE especificacion_tipo \n"); }
#line 2119 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 141 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_diccionario -> DICCIONARIO  DE especificacion_tipo\n"); }
#line 2125 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 143 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_estructurado -> tipo_registro\n"); }
#line 2131 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 144 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_estructurado -> tipo_enumerado\n"); }
#line 2137 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 145 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_estructurado -> clase\n"); }
#line 2143 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 148 "simple.y" /* yacc.c:1646  */
    { printf ("varios_campos -> varios_campos campo\n"); }
#line 2149 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 149 "simple.y" /* yacc.c:1646  */
    { printf ("varios_campos -> campo\n"); }
#line 2155 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
#line 2161 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 155 "simple.y" /* yacc.c:1646  */
    { printf ("campo -> varios_identificadores : especificacion_tipo ;\n"); }
#line 2167 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 156 "simple.y" /* yacc.c:1646  */
    { printf ("campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
#line 2173 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 159 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_enumerado -> ENUMERACION varios_elementos_enumeracion FIN ENUMERACION\n"); }
#line 2179 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 160 "simple.y" /* yacc.c:1646  */
    { printf ("tipo_enumerado -> ENUMERACION DE tipo_escalar varios_elementos_enumeracion FIN ENUMERACION\n"); }
#line 2185 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 163 "simple.y" /* yacc.c:1646  */
    { printf ("varios_elementos_enumeracion -> varios_elementos_enumeracion , elemento_enumeracion\n"); }
#line 2191 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 164 "simple.y" /* yacc.c:1646  */
    { printf ("varios_elementos_enumeracion -> elemento_enumeracion\n"); }
#line 2197 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 167 "simple.y" /* yacc.c:1646  */
    { printf ("elemento_enumeracion -> IDENTIFICADOR\n"); }
#line 2203 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 168 "simple.y" /* yacc.c:1646  */
    { printf ("elemento_enumeracion -> IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2209 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 173 "simple.y" /* yacc.c:1646  */
    { printf ("clase -> CLASE ULTIMA superclases varias_declaraciones_componentes FIN CLASE \n"); }
#line 2215 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 174 "simple.y" /* yacc.c:1646  */
    { printf ("clase -> CLASE varias_declaraciones_componentes FIN CLASE \n"); }
#line 2221 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 175 "simple.y" /* yacc.c:1646  */
    { printf ("clase -> CLASE ULTIMA  varias_declaraciones_componentes FIN CLASE \n"); }
#line 2227 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 176 "simple.y" /* yacc.c:1646  */
    { printf ("clase -> CLASE  superclases varias_declaraciones_componentes FIN CLASE \n"); }
#line 2233 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 179 "simple.y" /* yacc.c:1646  */
    { printf ("varias_declaraciones_componentes -> varias_declaraciones_componentes declaracion_componente  \n"); }
#line 2239 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 180 "simple.y" /* yacc.c:1646  */
    { printf ("varias_declaraciones_componentes -> declaracion_componente \n"); }
#line 2245 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 183 "simple.y" /* yacc.c:1646  */
    { printf ("superclases -> ( varios_nombres ) \n"); }
#line 2251 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 186 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_componente -> componente \n"); }
#line 2257 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 187 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_componente -> visibilidad componente \n"); }
#line 2263 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 190 "simple.y" /* yacc.c:1646  */
    { printf ("visibilidad -> PUBLICO \n"); }
#line 2269 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 191 "simple.y" /* yacc.c:1646  */
    { printf ("visibilidad ->  PROTEGIDO \n"); }
#line 2275 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 192 "simple.y" /* yacc.c:1646  */
    { printf ("visibilidad ->  PRIVADO\n"); }
#line 2281 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 195 "simple.y" /* yacc.c:1646  */
    { printf ("componente -> declaracion_tipo\n"); }
#line 2287 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 196 "simple.y" /* yacc.c:1646  */
    { printf ("componente -> declaracion_objeto\n"); }
#line 2293 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 197 "simple.y" /* yacc.c:1646  */
    { printf ("componente -> varios_modificadores declaracion_subprograma\n"); }
#line 2299 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 200 "simple.y" /* yacc.c:1646  */
    { printf ("sin_modificador -> varios_modificadores\n"); }
#line 2305 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 204 "simple.y" /* yacc.c:1646  */
    { printf ("varios_modificadores -> varios_modificadores , modificador\n"); }
#line 2311 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 205 "simple.y" /* yacc.c:1646  */
    { printf ("varios_modificadores -> modificador\n"); }
#line 2317 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 208 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> CONSTRUCTOR "); }
#line 2323 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 209 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  DESTRUCTOR "); }
#line 2329 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 210 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  GENERICO "); }
#line 2335 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 211 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> ABSTRACTO "); }
#line 2341 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 212 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador ->  ESPECIFICO "); }
#line 2347 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 213 "simple.y" /* yacc.c:1646  */
    { printf ("  modificador -> FINAL"); }
#line 2353 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 220 "simple.y" /* yacc.c:1646  */
    { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
#line 2359 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 223 "simple.y" /* yacc.c:1646  */
    { printf ("cabecera_subprograma -> IDENTIFICADOR \n"); }
#line 2365 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 224 "simple.y" /* yacc.c:1646  */
    { printf ("cabecera_subprograma -> IDENTIFICADOR parametrizacion \n"); }
#line 2371 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 225 "simple.y" /* yacc.c:1646  */
    { printf ("cabecera_subprograma -> IDENTIFICADOR tipo_resultado \n"); }
#line 2377 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 226 "simple.y" /* yacc.c:1646  */
    { printf ("cabecera_subprograma -> IDENTIFICADOR parametrizacion tipo_resultado \n"); }
#line 2383 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 229 "simple.y" /* yacc.c:1646  */
    { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros )\n"); }
#line 2389 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 232 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo"); }
#line 2395 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 233 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo"); }
#line 2401 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 234 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo ASIGNACION expresion"); }
#line 2407 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 235 "simple.y" /* yacc.c:1646  */
    { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo ASIGNACION expresion"); }
#line 2413 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 238 "simple.y" /* yacc.c:1646  */
    { printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros \n"); }
#line 2419 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 242 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> VALOR\n"); }
#line 2425 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 243 "simple.y" /* yacc.c:1646  */
    { printf ("modo -> REFERENCIA\n"); }
#line 2431 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 246 "simple.y" /* yacc.c:1646  */
    { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); }
#line 2437 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 248 "simple.y" /* yacc.c:1646  */
    { printf ("cuerpo_subprograma -> varias_declaraciones PRINCIPIO varias_instrucciones FIN"); }
#line 2443 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 252 "simple.y" /* yacc.c:1646  */
    { printf ("varias_declaraciones -> varias_declaraciones declaracion\n"); }
#line 2449 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 258 "simple.y" /* yacc.c:1646  */
    { printf ("varias_instrucciones -> varias_instrucciones  instruccion\n"); }
#line 2455 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 259 "simple.y" /* yacc.c:1646  */
    { printf ("varias_instrucciones -> instruccion\n"); }
#line 2461 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 262 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_asignacion\n"); }
#line 2467 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 263 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_devolver\n"); }
#line 2473 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 264 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_llamada\n"); }
#line 2479 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 265 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_si\n"); }
#line 2485 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 266 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_casos\n"); }
#line 2491 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 267 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_bucle\n"); }
#line 2497 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 268 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_interrupcion\n"); }
#line 2503 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 269 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
#line 2509 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 270 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> instruccion_captura_excepcion\n"); }
#line 2515 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 271 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion -> ;\n"); }
#line 2521 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 274 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_asignacion -> objeto op_asignacion expresion ;\n"); }
#line 2527 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 288 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_devolver -> DEVOLVER ;\n"); }
#line 2533 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 289 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_devolver -> DEVOLVER expresion ;\n"); }
#line 2539 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 292 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_llamada -> llamada_subprograma ;\n"); }
#line 2545 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 294 "simple.y" /* yacc.c:1646  */
    { printf ("llamada_subprograma -> nombre varias_definiciones_parametro\n"); }
#line 2551 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 296 "simple.y" /* yacc.c:1646  */
    { printf ("sin_definiciones_parametro -> varias_definiciones_parametro ;\n"); }
#line 2557 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 300 "simple.y" /* yacc.c:1646  */
    { printf ("varias_definiciones_parametro -> varias_definiciones_parametro , definicion_parametro\n"); }
#line 2563 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 301 "simple.y" /* yacc.c:1646  */
    { printf ("varias_definiciones_parametro ->  definicion_parametro\n"); }
#line 2569 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 304 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  expresion\n"); }
#line 2575 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 305 "simple.y" /* yacc.c:1646  */
    { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
#line 2581 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 308 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones\n"); }
#line 2587 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 309 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si ->  SINO FIN SI\n"); }
#line 2593 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 310 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_si -> FIN SI\n"); }
#line 2599 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 313 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_casos ->  CASOS expresion ES varios_casos FIN CASOS \n"); }
#line 2605 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 315 "simple.y" /* yacc.c:1646  */
    { printf ("caso ->  CUANDO entradas FLECHA varias_instrucciones\n"); }
#line 2611 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 317 "simple.y" /* yacc.c:1646  */
    { printf ("varios_casos ->  varios_casos caso \n"); }
#line 2617 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 318 "simple.y" /* yacc.c:1646  */
    { printf ("varios_casos ->  caso \n"); }
#line 2623 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 321 "simple.y" /* yacc.c:1646  */
    { printf ("entradas ->  varias_entradas entrada\n"); }
#line 2629 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 323 "simple.y" /* yacc.c:1646  */
    { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
#line 2635 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 327 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion\n"); }
#line 2641 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 328 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  expresion DOS_PUNTOS expresion\n"); }
#line 2647 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 329 "simple.y" /* yacc.c:1646  */
    { printf ("entrada ->  OTRO\n"); }
#line 2653 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 332 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle ->  clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
#line 2659 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 333 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_bucle ->  IDENTIFICADOR ; clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
#line 2665 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 336 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion -> para identificador en expresion\n"); }
#line 2671 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 337 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion -> para identificador: especificacion_tipo en expresion\n"); }
#line 2677 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 338 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion -> repetir identificador en rango\n"); }
#line 2683 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 339 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion -> repetir identificador en rango descendente\n"); }
#line 2689 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 340 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango\n"); }
#line 2695 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 341 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango descendente\n"); }
#line 2701 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 342 "simple.y" /* yacc.c:1646  */
    { printf("clausula_iteracion -> mientras expresion\n");}
#line 2707 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 345 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion -> SIGUIENTE ;"); }
#line 2713 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 346 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion -> SIGUIENTE cuando ;"); }
#line 2719 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 347 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion -> SALIR"); }
#line 2725 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 348 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion -> SALIR DE IDENTIFICADOR cuando ;"); }
#line 2731 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 349 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion -> SALIR DE IDENTIFICADOR ;"); }
#line 2737 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 350 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_interrupcion -> SALIR CUANDO ;"); }
#line 2743 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 353 "simple.y" /* yacc.c:1646  */
    { printf ("cuando ->CUANDO expresion"); }
#line 2749 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 356 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_lanzamiento_excepcion -> LANZA nombre ;"); }
#line 2755 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 359 "simple.y" /* yacc.c:1646  */
    { printf ("instruccion_captura_excepcion -> PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
#line 2761 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 362 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion\n"); }
#line 2767 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 363 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
#line 2773 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 364 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas ->clausula_finalmente\n"); }
#line 2779 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 367 "simple.y" /* yacc.c:1646  */
    { printf ("clausulas_excepcion -> varias_clausula_excepcion_especifica clausula_excepcion_general "); }
#line 2785 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 370 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausula_excepcion_especifica -> varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); }
#line 2791 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 374 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
#line 2797 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 377 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_excepcion_general -> EXCEPCION varias_instruccion"); }
#line 2803 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 380 "simple.y" /* yacc.c:1646  */
    { printf ("clausula_finalmente -> FINALMENTE varias_instrucciones"); }
#line 2809 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 392 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_binaria ->  expresion operador_binario expresion\n"); }
#line 2815 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 398 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_posfija -> expresion_unaria operador_posfijo\n"); }
#line 2821 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 401 "simple.y" /* yacc.c:1646  */
    { printf ("operador posfijo -> INC\n"); }
#line 2827 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 402 "simple.y" /* yacc.c:1646  */
    { printf ("operador posfijo -> DEC\n"); }
#line 2833 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 423 "simple.y" /* yacc.c:1646  */
    { printf ("expresion unaria -> primario\n"); }
#line 2839 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 424 "simple.y" /* yacc.c:1646  */
    { printf ("expresion unaria -> '-' primario\n"); }
#line 2845 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 427 "simple.y" /* yacc.c:1646  */
    { printf ("primario -> literal\n"); }
#line 2851 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 428 "simple.y" /* yacc.c:1646  */
    { printf ("primario -> objeto\n"); }
#line 2857 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 429 "simple.y" /* yacc.c:1646  */
    { printf ("primario -> llamada_subprograma\n"); }
#line 2863 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 430 "simple.y" /* yacc.c:1646  */
    { printf ("primario -> OBJETO llamada_subprograma\n"); }
#line 2869 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 431 "simple.y" /* yacc.c:1646  */
    { printf ("primario -> enumeraciones\n"); }
#line 2875 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 432 "simple.y" /* yacc.c:1646  */
    { printf ("primario -> ( expresion )\n"); }
#line 2881 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 435 "simple.y" /* yacc.c:1646  */
    { printf ("literal -> num\n"); }
#line 2887 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 436 "simple.y" /* yacc.c:1646  */
    { printf ("literal -> op_booleano\n"); }
#line 2893 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 437 "simple.y" /* yacc.c:1646  */
    { printf ("literal -> CTC_CARACTER\n"); }
#line 2899 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 438 "simple.y" /* yacc.c:1646  */
    { printf ("literal -> CTC_CADENA\n"); }
#line 2905 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 441 "simple.y" /* yacc.c:1646  */
    { printf ("op_booleano -> VERDADERO\n"); }
#line 2911 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 442 "simple.y" /* yacc.c:1646  */
    { printf ("op_booleano -> FALSO\n"); }
#line 2917 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 445 "simple.y" /* yacc.c:1646  */
    { printf ("num -> CTC_ENTERA\n"); }
#line 2923 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 446 "simple.y" /* yacc.c:1646  */
    { printf ("num -> CTC_REAL\n"); }
#line 2929 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 455 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
#line 2935 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 456 "simple.y" /* yacc.c:1646  */
    { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
#line 2941 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 459 "simple.y" /* yacc.c:1646  */
    { printf ("enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2947 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 460 "simple.y" /* yacc.c:1646  */
    { printf ("enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
#line 2953 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 461 "simple.y" /* yacc.c:1646  */
    { printf ("enumeraciones -> [ expresion ]\n"); }
#line 2959 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 462 "simple.y" /* yacc.c:1646  */
    { printf ("enumeraciones -> { varias_claves_valor }\n"); }
#line 2965 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 463 "simple.y" /* yacc.c:1646  */
    { printf ("enumeraciones -> { varios_campos_valor }\n"); }
#line 2971 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 468 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausulas_iteracion -> varias_clausulas_iteracion clausula_iteracion\n"); }
#line 2977 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 469 "simple.y" /* yacc.c:1646  */
    { printf ("varias_clausulas_iteracion -> varias_clausulas_iteracion\n"); }
#line 2983 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 472 "simple.y" /* yacc.c:1646  */
    { printf ("varias_expresiones ->  varias_expresiones expresion\n"); }
#line 2989 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 473 "simple.y" /* yacc.c:1646  */
    { printf ("varias_expresiones -> expresion\n"); }
#line 2995 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 476 "simple.y" /* yacc.c:1646  */
    { printf ("varias_claves_valor -> varias_claves_valor clave_valor\n"); }
#line 3001 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 477 "simple.y" /* yacc.c:1646  */
    { printf ("varias_claves_valor -> clave_valor\n"); }
#line 3007 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 480 "simple.y" /* yacc.c:1646  */
    { printf ("varios_campos_valor -> varios_campos_valor campo_valor\n"); }
#line 3013 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 481 "simple.y" /* yacc.c:1646  */
    { printf ("varios_campos_valor -> campo_valor\n"); }
#line 3019 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 484 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_condicional -> SI expresion ENTONCES expresion\n"); }
#line 3025 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 485 "simple.y" /* yacc.c:1646  */
    { printf ("expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
#line 3031 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 488 "simple.y" /* yacc.c:1646  */
    { printf("\n\tclave_valor -> CTC_CADENA FLECHA expresion"); }
#line 3037 "simple.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 490 "simple.y" /* yacc.c:1646  */
    { printf("\n\tcampo_valor -> IDENTIFICADOR FLECHA expresion"); }
#line 3043 "simple.tab.c" /* yacc.c:1646  */
    break;


#line 3047 "simple.tab.c" /* yacc.c:1646  */
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
#line 492 "simple.y" /* yacc.c:1906  */


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
