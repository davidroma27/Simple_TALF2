 
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

%token <reservada> ABSTRACTO BOOLEANO BUCLE CARACTER CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO 

%token <texto> CTC_CADENA IDENTIFICADOR
%token <texto> DOS_PUNTOS CUATRO_PUNTOS ASIGNACION FLECHA ASIG_SUMA ASIG_RESTA ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESPD

%type <valor_entero> CTC_ENTERA
%type <valor_real> CTC_REAL

%%

definicion_programa: PROGRAMA IDENTIFICADOR ';' codigo_programa FIN;
                    | error PROGRAMA { yyerrok;}
                    
codigo_programa: '[' libreria ']''*' cuerpo_subprograma ;

libreria: IMPORTAR LIBRERIA nombre '[' COMO IDENTIFICADOR ']''?' ';'
        | DE LIBRERIA nombre IMPORTAR '(' IDENTIFICADOR ')''+'
        ;

nombre: '[' IDENTIFICADOR "::" ']''*' IDENTIFICADOR ;

definicion_libreria: LIBRERIA IDENTIFICADOR ';' codigo_libreria ;

codigo_libreria: '[' libreria ']''*' '[' exportaciones ']''?' '[' declaracion ']''+' ;

exportaciones: EXPORTAR '(' nombre ')''+' ;

declaracion: declaracion_objeto 
            | declaracion_tipo 
            | declaracion_subprograma
            ;

/****************************************OBJETOS******************************************/

declaracion_objeto: '(' IDENTIFICADOR ')''+' ':' CONSTANTE especificacion_tipo ":=" expresion ';'
                | '(' IDENTIFICADOR ')''+' ':' especificacion_tipo '[' ":=" expresion ']''?' 
                ;

especificacion_tipo: nombre 
                    | tipo_no_estructurado
                    ;

/*****************************************TIPOS*******************************************/

declaracion_tipo: TIPO IDENTIFICADOR ES tipo_no_estructurado ';'
                | TIPO IDENTIFICADOR ES tipo_estructurado
                ;

tipo_no_estructurado: tipo_escalar 
                    | tipo_tabla 
                    | tipo_diccionario
                    ;

tipo_escalar: '[' SIGNO ']''?' tipo_basico '[' longitud ']''?' '[' RANGO rango ']''?' ;

longitud: CORTO 
        | LARGO
        ;
        
tipo_basico: BOOLEANO 
            | CTC_CARACTER 
            | CTC_ENTERA
            | CTC_REAL
            ;
                        
rango: expresion ".." expresion '[' ".." expresion ']''?' ;

tipo_tabla: TABLA '(' expresion ".." expresion ')' DE especificacion_tipo
            | LISTA DE especificacion_tipo
            ;

tipo_diccionario: DICCIONARIO DE especificacion_tipo ;

tipo_estructurado: tipo_registro 
                 | tipo_enumerado 
                 | clase
                 ;

tipo_registro: REGISTRO '[' campo ']''+' FIN REGISTRO ;

campo: '(' IDENTIFICADOR ')''+' ':' especificacion_tipo '[' ":=" expresion ']''?' ;

tipo_enumerado: ENUMERACION '[' DE tipo_escalar ']''?' '(' elemento_enumeracion ')''+' FIN ENUMERACION ;

elemento_enumeracion: IDENTIFICADOR '[' ":=" expresion ']''?' ;

/*****************************************CLASES******************************************/

clase: CLASE '[' ULTIMA ']''?' '[' superclases ']''?' '[' declaracion_componente ']''+' FIN CLASE ;

superclases: '(' '(' nombre ')''+' ')' ;

declaracion_componente: '[' visibilidad ']''?' componente ;

visibilidad: PUBLICO 
            | PROTEGIDO 
            | PRIVADO
            ;

componente: declaracion_tipo
            | declaracion_objeto
            | '(' modificador ')''*' declaracion_subprograma
            ;
            
modificador: CONSTRUCTOR 
            | DESTRUCTOR 
            | GENERICO 
            | ABSTRACTO
            | ESPECIFICO
            | FINAL
            ;

/**************************************SUBPROGRAMAS***************************************/

declaracion_subprograma: SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA ;

cabecera_subprograma: IDENTIFICADOR '[' parametrizacion ']''?' '[' tipo_resultado ']''?' ;

parametrizacion: '(''[' declaracion_parametros ';' ']''*' declaracion_parametros ')' ;

declaracion_parametros: '(' IDENTIFICADOR ')''+' ':' '[' modo ']''?' especificacion_tipo '[' ":=" expresion ']''?' ;

modo: VALOR 
    | REFERENCIA
    ;
    
tipo_resultado: DEVOLVER especificacion_tipo ;

cuerpo_subprograma: '[' declaracion ']''*' PRINCIPIO '[' instruccion ']''+' FIN ;

/*************************************INSTRUCCIONES***************************************/

instruccion: instruccion_asignacion
            | instruccion_devolver
            | instruccion_llamada
            | instruccion_si
            | instruccion_casos
            | instruccion_bucle
            | instruccion_interrupcion
            | instruccion_lanzamiento_excepcion
            | instruccion_captura_excepcion
            ;
            
instruccion_asignacion: objeto op_asignacion expresion ;

op_asignacion: ":="
                | ":+" 
                | ":-" 
                | ":*" 
                | ":/" 
                | ":\\" 
                | ":^" 
                | ":<" 
                | ":>"
                ;

instruccion_devolver: DEVOLVER '[' expresion ']''?' ;

instruccion_llamada: llamada_subprograma ;

llamada_subprograma: nombre '(' '(' definicion_parametro ')''*' ')' ;

definicion_parametro: '[' IDENTIFICADOR ":=" ']''?' expresion ;

instruccion_si: SI expresion ENTONCES'[' instruccion ']''+' '[' SINO '[' instruccion ']''+' ']''?' FIN SI ;

instruccion_casos: CASOS expresion ES '[' caso ']''+' FIN CASOS ;

caso: cuando entradas "=>" '[' instruccion ']''+' ;

entradas: '[' entrada ':' ']''*' entrada ;

entrada: expresion '[' ".." expresion ']''?' 
            | OTRO
            ;
            
instruccion_bucle: '[' IDENTIFICADOR ':' ']''?' clausula_iteracion '[' instruccion ']''+' FIN BUCLE ;

clausula_iteracion: PARA IDENTIFICADOR '[' ':' especificacion_tipo ']''?' EN expresion
            | REPETIR IDENTIFICADOR '[' ':' especificacion_tipo ']''?' EN RANGO '[' DESCENDENTE ']''?'
            | MIENTRAS expresion
            ;

instruccion_interrupcion: SIGUIENTE '[' cuando ']''?' ';'
            | SALIR '[' DE IDENTIFICADOR ']''?' '[' cuando ']''?' 
            ;
            
cuando: cuando expresion ;

instruccion_lanzamiento_excepcion: LANZA nombre ;

instruccion_captura_excepcion: PRUEBA '[' instruccion ']''+' clausulas FIN PRUEBA ;

clausulas: clausulas_excepcion '[' clausula_finalmente ']''?'
            | clausula_finalmente
            ;

clausulas_excepcion: '[' clausula_excepcion_especifica ']''*' clausula_excepcion_general ;

clausula_excepcion_especifica: EXCEPCION '(' nombre ')' '[' instruccion ']''+' ;

clausula_excepcion_general: EXCEPCION '[' instruccion ']''+' ;

clausula_finalmente: FINALMENTE '[' instruccion ']''+' ;

/********************************EXPRESIONES (INCOMPLETAS)********************************/

expresion: expresion_potencia
         | expresion_posfija
         | expresion_binaria
         | expresion_unaria
         | expresion_condicional
         ;

expresion_potencia: expresion_posfija '[' '^' expresion_potencia ']''?' ;

expresion_posfija: expresion_unaria '[' operador_posfijo ']''?' ;

expresion_binaria: expresion '[' op_binario ']' expresion ;

operador_posfijo: "++" 
            | "--"
            ;

op_binario: "\\/"
          | "/\\"
          | '<'
          | '>'
          | "<="
          | ">="
          | '='
          | "~="
          | "<-"
          | "->"
          | '+'
          | '-'
          | '*'
          | "/"
          | "\\"
          | '^'
          ;
            
expresion_unaria: '[' '-' ']''?' primario ;

primario:   literal
            | objeto
            | '[' objeto ']''?' llamada_subprograma
            | enumeraciones
            | '(' expresion ')'
            ;

literal:    VERDADERO 
            | FALSO 
            | CTC_ENTERA 
            | CTC_REAL 
            | CTC_CARACTER
            | CTC_CADENA
            ;

objeto:     nombre
            | objeto '.' IDENTIFICADOR
            | objeto '[' '(' expresion ')''+' ']'
            | objeto '{' '(' CTC_CADENA ')''+' '}'
            ;

enumeraciones: '[' expresion_condicional '[' clausula_iteracion ']''+' ']'
            | '[' '(' expresion ')''+' ']'
            | '{' '(' clave_valor ')''+' '}'
            | '{' '(' campo_valor ')''+' '}'
            ;

expresion_condicional: expresion
            | SI expresion ENTONCES expresion '[' SINO expresion ']''?' /*Es un if then else*/
            ;

clave_valor: CTC_CADENA "=>" expresion ;

campo_valor: IDENTIFICADOR "=>" expresion ;



expresion_condicional: expresion
            | SI expresion ENTONCES expresion '[' SINO expresion ']''?'
            ;

clave_valor: CTC_CADENA "=>" expresion ;

campo_valor: IDENTIFICADOR "=>" expresion ;

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
