/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
