%{
#include <stdio.h>
#include "simple.tab.h"
%}

%option yylineno
ENTERO [0-9]+|%[xX][0-9a-fA-F]+|%[oO][0-7]+
ID [_a-zA-Z][_a-zA-Z0-9]*
DELIM "("|")"|":"|";"|","|"|"
OPERADOR "+"|"-"|"*"|"/"|"^"|"."|"["|"]"|"{"|"}"|"<"|">"|"="|"~"
REAL_O %[oO]([0-7]+)?(\.)([0-7]+)(\^[+-]?[0-7]+)?
REAL_X %[xX]([0-9a-fA-F]+)?((\.)[0-9a-fA-F]+)?(\^[+-]?[0-9a-fA-F]+)?
REAL_ENT ([0-9]+)?(\.)?[0-9]+(\^[+-]?[0-9]+)?
CADENA \"(\\.|[^"\’])*\"
CARACTER '(%['"%nrt])'|'(%[oO][0-7]+)'|'(%(x|X)[0-9a-fA-F]+)'|'([%][0-2]?[0-5]?[0-5]?)'|'([^'\n%])'

%%

##.+      ;
\#.*[\n]?.*\}  ;

(?i:abstracto)        printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(ABSTRACTO);
(?i:booleano)       printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(BOOLEANO);
(?i:bucle)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(BUCLE);
(?i:caracter)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(CARACTER);
(?i:casos)           printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(CASOS);
(?i:clase)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(CLASE);
(?i:como)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(COMO);
(?i:constante)            printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(CONSTANTE);
(?i:constructor)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(CONSTRUCTOR);
(?i:corto)        printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(CORTO);
(?i:cuando)           printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(CUANDO);
(?i:de)      printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(DE);
(?i:descendente)           printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(DESCENDENTE);
(?i:destructor)       printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(DESTRUCTOR);
(?i:devolver)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(DEVOLVER);
(?i:dicccinario)            printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(DICCIONARIO);
(?i:en)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(EN);
(?i:entero)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(ENTERO);
(?i:entonces)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(ENTONCES);
(?i:enumeracion)               printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(ENUMERACION);
(?i:es)       printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(ES);
(?i:especifico)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(ESPECIFICO);
(?i:excepcion)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(EXCEPCION);
(?i:exportar)            printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(EXPORTAR);
(?i:falso)       printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(FALSO);
(?i:fin)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(FIN);
(?i:final)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(FINAL);
(?i:finalmente)            printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(FINALMENTE);
(?i:generico)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(GENERICO);
(?i:importar)           printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(IMPORTAR);
(?i:largo)            printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(LARGO);
(?i:lanza)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(LANZA);
(?i:libreria)      printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(LIBRERIA);
(?i:lista)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(LISTA);
(?i:mientras)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(MIENTRAS);
(?i:objeto)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(OBJETO);
(?i:otro)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(OTRO);
(?i:para)           printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(PARA);
(?i:principio)    printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(PRINCIPIO);
(?i:privado)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(PRIVADO);
(?i:programa)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(PROGRAMA);
(?i:protegido)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(PROTEGIDO);
(?i:prueba)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(PRUEBA);
(?i:publico)           printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(PUBLICO);
(?i:rango)            printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(RANGO);
(?i:real)      printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(REAL);
(?i:referencia)               printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(REFERENCIA);
(?i:registro)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(REGISTRO);
(?i:repetir)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(REPETIR);
(?i:salir)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(SALIR);
(?i:si)    printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(SI);
(?i:signo)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(SIGNO);
(?i:siguiente)          printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(SIGUIENTE);
(?i:sino)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(SINO);
(?i:subprograma)         printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(SUBPROGRAMA);
(?i:tabla)           printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(TABLA);
(?i:tipo)            printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(TIPO);
(?i:ultima)      printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(ULTIMA);
(?i:valor)               printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(VALOR);
(?i:verdadero)             printf("linea %d, palabra reservada: %s\n",yylineno,yytext);return(VERDADERO);

{CARACTER} {printf( "linea %d, ctc entera: %s\n", yylineno, yytext );    return CTC_CARACTER;}
           
{ENTERO} {printf( "linea %d, ctc entera: %s\n", yylineno, yytext );
            return CTC_ENTERA;
         }
         
{REAL_O} {printf( "linea %d, ctc real: %s\n", yylineno, yytext );
            return CTC_REAL;
         }
         
{REAL_X} {printf( "linea %d, ctc real: %s\n", yylineno, yytext );
            return CTC_REAL;
         }
         
{REAL_ENT} {printf( "linea %d, ctc real: %s\n", yylineno, yytext );
            return CTC_REAL;
           }
\.\. {return DOS_PUNTOS;}
:: {return CUATRO_PUNTOS;}
:= {return ASIGNACION;}
=\> {return FLECHA;}
\+\+ {return INC;}
-- {return DEC;}
\<- {return DESPI;}
-\> {return DESPD;}
\<= {return LEQ;}
\>= {return GEQ;}
~= {return NEQ;}
\/\\ {return AND;}
\\\/  {return OR;}
:\+ {return ASIG_SUMA;}
:- {return ASIG_RESTA;}
:\* {return ASIG_MULT;}
:\/ {return ASIG_DIV;}
:\\ {return ASIG_RESTO;}
:^ {return ASIG_POT;}
:\< {return ASIG_DESPI;}
:\> {return ASIG_DESPD;}

{OPERADOR} {printf( "linea %d, operador: %s\n", yylineno, yytext );
            return yytext[0];
           }
           
{DELIM} {printf( "linea %d, delimitador: %s\n", yylineno, yytext );
            return yytext[0];
        }

{ID} {printf( "linea %d, identificador: %s\n", yylineno, yytext );
        return IDENTIFICADOR;
     }
     
{CADENA} {printf( "linea %d, cadena: %s\n", yylineno, yytext );
            return CTC_CADENA;
         }
(\t|" ")+    ;
\n { }


%%
