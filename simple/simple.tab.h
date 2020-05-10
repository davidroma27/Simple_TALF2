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
