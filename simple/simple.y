                              
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

%}

%token BOOLEANO BUCLE CARACTER CASOS COMIENZO CONSTANTE CUANDO DE DEVOLVER
%token EN ENTERO ENTONCES ES EXPORTAR DECLARACION DESCENDENTE FALSO FIN
%token FUNCION MIENTRAS OTRO PARA PROCEDIMIENTO RANGO REAL REFERENCIA
%token REGISTRO REPETIR SALIR SI SINO TABLA TIPO VACIA VALOR VERDADERO

%token CTC_CARACTER CTC_CADENA IDENTIFICADOR CTC_ENTERA CTC_REAL

%token PUNTOS RESTO ASIGNACION FLECHA POTENCIA INC DEC DESP_IZDA
%token DESP_DCHA LEQ GEQ NEQ AND OR
%token OBJETO
%%

/*******************************OBJETOS************************************/

especificacion_tipo:nombre  { printf ("especificacion_tipo -> nombre\n"); }
  |tipo_no_estructurado { printf ("especificacion_tipo -> tipo_no_estructurado\n"); }
  ;


/*******************************INSTRUCCIONES******************************/

clausula_iteracion: PARA IDENTIFICADOR EN expresion  { printf ("clausula_iteracion -> para identificador en expresion\n"); }
  |PARA IDENTIFICADOR ':' especificacion_tipo EN expresion  { printf ("clausula_iteracion -> para identificador: especificacion_tipo en expresion\n"); }
  |REPETIR IDENTIFICADOR EN RANGO { printf ("clausula_iteracion -> repetir identificador en rango\n"); }
  |REPETIR IDENTIFICADOR EN RANGO DESCENDENTE { printf ("clausula_iteracion -> repetir identificador en rango descendente\n"); }
  |REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango\n"); }
  |REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO DESCENDENTE { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango descendente\n"); }
  |MIENTRAS expresion {printf("clausula_iteracion -> mientras expresion\n");}
  ;





/*******************************EXPRESIONES********************************/
expresion: expresion_potencia
         | expresion_posfija
         | expresion_binaria
         | expresion_unaria
         | expresion_condicional
         ;

expresion_potencia: expresion_posfija                        { printf ("expresion_potencia ->  expresion_posfija\n"); }
                  | expresion_posfija '^' expresion_potencia { printf ("expresion_potencia ->  expresion_posfija '^' expresion_potencia\n"); }
                  ;

expresion_posfija: expresion_unaria                   { printf ("expresion posfija -> expresion unaria\n"); }
                 | expresion_unaria operador_posfijo    { printf ("expresion posfija -> expresion unaria operador posfijo\n"); }
                 ;

operador_posfijo: INC        { printf ("operador posfijo -> '++'\n"); } 
                | DEC        { printf ("operador posfijo -> '--'\n"); }
                ;

expresion_unaria: primario            { printf ("expresion unaria -> primario\n"); }
                | '-' primario    { printf ("expresion unaria -> '-' primario\n"); }
                ;


primario: literal                              { printf ("primario -> literal\n"); }
        | objeto                               { printf ("primario -> objeto\n"); }
        | llamada_subprograma                  { printf ("primario -> llamada_subprograma\n"); }
        | OBJETO llamada_subprograma           { printf ("primario -> OBJETO llamada_subprograma\n"); }
        | enumeraciones                        { printf ("primario -> enumeraciones\n"); }
        | '(' expresion ')'                    { printf ("primario -> ( expresion )\n"); }
        ;

literal: num			{ printf ("literal -> num\n"); }
		| op_booleano		{ printf ("literal -> op_booleano\n"); }
		| CTC_CARACTER 	{ printf ("literal -> CTC_CARACTER\n"); }
		| CTC_CADENA 		{ printf ("literal -> CTC_CADENA\n"); }
		;

op_booleano: VERDADERO 	{ printf ("op_booleano -> VERDADERO\n"); }
           | FALSO 		{ printf ("op_booleano -> FALSO\n"); }
           ;

num: CTC_ENTERA	{ printf ("num -> CTC_ENTERA\n"); }
      | CTC_REAL 	{ printf ("num -> CTC_REAL\n"); }
      ;	

objeto:      nombre
            | objeto '.' IDENTIFICADOR
            | objeto '[' varias_expresiones ']'
            | objeto '{' varias_ctc_cadena '}'
            ;

varias_ctc_cadena: varias_ctc_cadena ',' CTC_CADENA      { printf ("  varias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
                 | CTC_CADENA                               { printf ("  varias_ctc_cadena -> CTC_CADENA\n"); }
                 ;

enumeraciones: '[' expresion_condicional  ']'            { printf ("enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
            | '[' expresion_condicional varias_clausulas_iteracion ']'            { printf ("enumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
            | '[' varias_expresiones ']'                   { printf ("enumeraciones -> [ expresion ]\n"); }
            | '{' varias_claves_valor '}'                  { printf ("enumeraciones -> { varias_claves_valor }\n"); }
            | '{' varios_campos_valor '}'                  { printf ("enumeraciones -> { varios_campos_valor }\n"); }
            ;


varias_clausulas_iteracion: varias_clausulas_iteracion clausula_iteracion  { printf ("varias_clausulas_iteracion -> varias_clausulas_iteracion clausula_iteracion\n"); }
                          | clausula_iteracion                             { printf ("varias_clausulas_iteracion -> varias_clausulas_iteracion\n"); }
                          ;

varias_expresiones: varias_expresiones ',' expresion       { printf ("varias_expresiones ->  varias_expresiones , expresion\n"); }
                  | expresion                              { printf ("varias_expresiones -> expresion\n"); }	 
                  ;

varias_claves_valor: varias_claves_valor ',' clave_valor      { printf ("varias_claves_valor -> varias_claves_valor , clave_valor\n"); }
                  | clave_valor                               { printf ("varias_claves_valor -> clave_valor\n"); }
                  ;

varios_campos_valor: varios_campos_valor ',' campo_valor    { printf ("varios_campos_valor -> varios_campos_valor , campo_valor\n"); }
                  | campo_valor                           { printf ("varios_campos_valor -> campo_valor\n"); }
                  ;

expresion_condicional: expresion SI expresion ENTONCES expresion        { printf ("expresion_condicional -> SI expresion ENTONCES expresion\n"); }
                     | SI expresion ENTONCES expresion SINO expresion   { printf ("expresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
                     ;

clave_valor: CTC_CADENA "=>" expresion     { printf("\n\tclave_valor -> CTC_CADENA '=>' expresion"); };

campo_valor: IDENTIFICADOR "=>" expresion { printf("\n\tcampo_valor -> IDENTIFICADOR '=>' expresion"); };

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
    printf("Uso: ./simplon NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }