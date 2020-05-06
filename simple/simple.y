 
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

%left '+' '*' '/' '\\' "<-" "->" "/\\" "\\/"
%right '^'
%nonassoc '-' "++" "--" '~' '<' '>' "<=" ">=" '=' "~="

%token <reservada> ABSTRACTO BOOLEANO BUCLE CARACTER CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO 

%token <texto> CTC_CARACTER CTC_CADENA IDENTIFICADOR
%token <texto> DOS_PUNTOS CUATRO_PUNTOS ASIGNACION FLECHA INC DEC DESPI DESPD LEQ GEQ NEQ AND OR 
%token <texto> ASIG_SUMA ASIG_RESTA ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESPD
%token <valor_entero> CTC_ENTERA
%token <valor_real> CTC_REAL

%%



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
