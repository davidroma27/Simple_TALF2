 
%{

  #include <stdio.h>

  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

%}

/* Declaraciones de BISON */
%union {
    int valor_entero;
    double valor_real;
    char * texto;
    char * reservada;
}

/*De menor a mayor precedencia*/
%left OR
%left AND
%nonassoc NEG /*Negacion (~)*/
%nonassoc '<' '>' LEQ GEQ EQ NEQ
%left DESPI DESPD /*Desplazamiento izq(<-) | desplazamiento der (->)*/
%left '+' '-'
%left '*' '/' '\\'
%right '^'
%nonassoc INC DEC
%nonassoc MENOS_UNARIO /*Negativo (-)*/

%token ABSTRACTO BOOLEANO BUCLE CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO 
%token CTC_CADENA IDENTIFICADOR
%token DOS_PUNTOS CUATRO_PUNTOS ASIGNACION FLECHA ASIG_SUMA ASIG_RESTA ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESPD
%token CTC_CARACTER
%token CTC_ENTERA
%token CTC_REAL
%token OPERADOR
%token DELIM
%token RESERVADA

%%

definicion_programa: PROGRAMA IDENTIFICADOR ';' codigo_programa FIN;
                    | error PROGRAMA { yyerrok;}

codigo_programa:
   /*vacio*/
;


literal: CTC_REAL
  |CTC_ENTERA
  |CTC_CADENA
  |CTC_CARACTER
  |VERDADERO
  |FALSO
;

visibilidad: PUBLICO
  |PROTEGIDO
  |PRIVADO
  ;

modificador: CONSTRUCTOR
 |DESTRUCTOR
 |GENERICO
 |ABSTRACTO
 |ESPECIFICO
 |FINAL
 ;

modo: VALOR
  |REFERENCIA
  ; 

tipo_basico: BOOLEANO
  |CTC_CARACTER
  |ENTERO
  |REAL
  ;

longitud: CORTO
  |LARGO
  ;




%%

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
