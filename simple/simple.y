                              
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

%}

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

%token ABSTRACTO BOOLEANO BUCLE CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO 
%token CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES 
%token ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO 
%token IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO 
%token PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR 
%token SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO 

%token CTC_CADENA IDENTIFICADOR CTC_CARACTER
%token CTC_ENTERA
%token CTC_REAL

%token DOS_PUNTOS CUATRO_PUNTOS ASIGNACION FLECHA ASIG_SUMA ASIG_RESTA 
%token ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESPD

%token OPERADOR
%token DELIM
%token RESERVADA

%%

/*******************************PROGRAMA************************************/

varios_identificadores: varios_identificadores ',' IDENTIFICADOR  { printf ("varios_identificadores -> varios_identificadores , IDENTIFICADOR \n"); }
                      | IDENTIFICADOR  { printf ("varios_identificadores -> IDENTIFICADOR\n"); }
                      ;

/*******************************OBJETOS************************************/

especificacion_tipo: nombre                  { printf ("especificacion_tipo -> nombre\n"); }
                   | tipo_no_estructurado    { printf ("especificacion_tipo -> tipo_no_estructurado\n"); }
                   ;

/*******************************TIPOS************************************/

/*******************************CLASES************************************/

clase: CLASE ULTIMA superclases varias_declaraciones_componentes FIN CLASE  { printf ("clase -> CLASE ULTIMA superclases varias_declaraciones_componentes FIN CLASE \n"); }
     | CLASE varias_declaraciones_componentes FIN CLASE                     { printf ("clase -> CLASE varias_declaraciones_componentes FIN CLASE \n"); }
     | CLASE ULTIMA  varias_declaraciones_componentes FIN CLASE             { printf ("clase -> CLASE ULTIMA  varias_declaraciones_componentes FIN CLASE \n"); }
     | CLASE  superclases varias_declaraciones_componentes FIN CLASE        { printf ("clase -> CLASE  superclases varias_declaraciones_componentes FIN CLASE \n"); }
     ;

varias_declaraciones_componentes: varias_declaraciones_componentes declaracion_componente     { printf ("varias_declaraciones_componentes -> varias_declaraciones_componentes declaracion_componente  \n"); }
                                | declaracion_componente                                      { printf ("varias_declaraciones_componentes -> declaracion_componente \n"); }
                                ;

superclases: '(' varios_nombres ')'                 { printf ("superclases -> ( varios_nombres ) \n"); };


declaracion_componente: componente                  { printf ("declaracion_componente -> componente \n"); }
                      | visibilidad componente      { printf ("declaracion_componente -> visibilidad componente \n"); }
                      ;

visibilidad: PUBLICO                                         { printf ("visibilidad -> PUBLICO \n"); }
           | PROTEGIDO                                       { printf ("visibilidad ->  PROTEGIDO \n"); }
           | PRIVADO                                         { printf ("visibilidad ->  PRIVADO\n"); }
           ;

componente: declaracion_tipo                                 { printf ("componente -> declaracion_tipo\n"); }
          | declaracion_objeto                               { printf ("componente -> declaracion_objeto\n"); }
          | varios_modificadores declaracion_subprograma     { printf ("componente -> varios_modificadores declaracion_subprograma\n"); }
          ;

sin_modificador: varios_modificadores        { printf ("sin_modificador -> varios_modificadores\n"); }
               |
               ;

varios_modificadores: varios_modificadores ',' modificador     { printf ("varios_modificadores -> varios_modificadores , modificador\n"); }
                    | modificador                              { printf ("varios_modificadores -> modificador\n"); }
                    ;

modificador: CONSTRUCTOR      { printf ("  modificador -> CONSTRUCTOR "); }
           | DESTRUCTOR       { printf ("  modificador ->  DESTRUCTOR "); }
           | GENERICO         { printf ("  modificador ->  GENERICO "); }
           | ABSTRACTO        { printf ("  modificador -> ABSTRACTO "); }
           | ESPECIFICO       { printf ("  modificador ->  ESPECIFICO "); }
           | FINAL            { printf ("  modificador -> FINAL"); }
           ;



/*******************************SUBPROGRAMAS********************************/

declaracion_subprograma: SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA   { printf ("  declaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA"); }
                       ;

cabecera_subprograma: IDENTIFICADOR                                   { printf ("cabecera_subprograma -> IDENTIFICADOR \n"); }
                    | IDENTIFICADOR parametrizacion                   { printf ("cabecera_subprograma -> IDENTIFICADOR parametrizacion \n"); }
                    | IDENTIFICADOR tipo_resultado                    { printf ("cabecera_subprograma -> IDENTIFICADOR tipo_resultado \n"); }
                    | IDENTIFICADOR parametrizacion tipo_resultado    { printf ("cabecera_subprograma -> IDENTIFICADOR parametrizacion tipo_resultado \n"); }
                    ;

parametrizacion: '(' varias_declaraciones_parametros declaracion_parametros ')'             { printf ("parametrizacion -> ( varias_declaraciones_parametros declaracion_parametros )\n"); };

/* varios_identificadores esta declarada en programa*/
declaracion_parametros: varios_identificadores ':' especificacion_tipo                       { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo"); }
                      | varios_identificadores ':' modo especificacion_tipo                  { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo"); }
                      | varios_identificadores ':' especificacion_tipo ":=" expresion        { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo := expresion"); }
                      | varios_identificadores ':' modo especificacion_tipo ":=" expresion   { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo := expresion"); }
                      ;

varias_declaraciones_parametros: varias_declaraciones_parametros declaracion_parametros ';'  { printf ("varias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros \n"); }
                               |
                               ;

modo: VALOR                      { printf ("modo -> VALOR\n"); }
    | REFERENCIA                 { printf ("modo -> REFERENCIA\n"); }
    ;

tipo_resultado: DEVOLVER especificacion_tipo      { printf ("  tipo_resultado -> DEVOLVER especificacion_tipo\n"); };

cuerpo_subprograma:  varias_declaraciones PRINCIPIO varias_instrucciones FIN    { printf ("cuerpo_subprograma -> varias_declaraciones PRINCIPIO varias_instrucciones FIN"); };

/* declaracion esta declarada en la seccion de programa */
/* se declara aqui varias_declaraciones para la regla cuerpo_subprograma */
varias_declaraciones: varias_declaraciones declaracion       { printf ("varias_declaraciones -> varias_declaraciones declaracion\n"); }
                    |
                    ;

/*******************************INSTRUCCIONES********************************/

varias_instrucciones: varias_instrucciones  instruccion       { printf ("varias_instrucciones -> varias_instrucciones  instruccion\n"); }                       
                    | instruccion                             { printf ("varias_instrucciones -> instruccion\n"); }
                    ;

instruccion: instruccion_asignacion             { printf ("instruccion -> instruccion_asignacion\n"); }
          |  instruccion_devolver               { printf ("instruccion -> instruccion_devolver\n"); }
          |  instruccion_llamada                { printf ("instruccion -> instruccion_llamada\n"); }
          |  instruccion_si                     { printf ("instruccion -> instruccion_si\n"); }
          |  instruccion_casos                  { printf ("instruccion -> instruccion_casos\n"); }
          |  instruccion_bucle                  { printf ("instruccion -> instruccion_bucle\n"); }
          |  instruccion_interrupcion           { printf ("instruccion -> instruccion_interrupcion\n"); }
          |  instruccion_lanzamiento_excepcion  { printf ("instruccion -> instruccion_lanzamiento_excepcion\n"); }
          |  instruccion_captura_excepcion      { printf ("instruccion -> instruccion_captura_excepcion\n"); }
          |  ';'                                { printf ("instruccion -> ;\n"); }
          ;

instruccion_asignacion: objeto op_asignacion expresion ';' { printf ("instruccion_asignacion -> objeto op_asignacion expresion ;\n"); }
;

op_asignacion: ":="
             |":+"
             |":-"
             |"-*"
             |":/"
             |":\\"
             |":^"
             |":<"
             |":>"
             ;

instruccion_devolver: DEVOLVER ';' { printf ("instruccion_devolver -> DEVOLVER ;\n"); }
                    | DEVOLVER expresion ';'  { printf ("instruccion_devolver -> DEVOLVER expresion ;\n"); }
                    ;

instruccion_llamada: llamada_subprograma ';'  { printf ("instruccion_llamada -> llamada_subprograma ;\n"); };

llamada_subprograma: nombre '(' varias_definiciones_parametro ')' { printf ("llamada_subprograma -> nombre varias_definiciones_parametro\n"); };

varias_definiciones_parametro: varias_definiciones_parametro ',' definicion_parametro   { printf ("varias_definiciones_parametro -> varias_definiciones_parametro , definicion_parametro\n"); }
                             | definicion_parametro                                     { printf ("varias_definiciones_parametro ->  definicion_parametro\n"); }
                             ;

definicion_parametro:  expresion       { printf ("definicion_parametro ->  expresion\n"); }
                    | IDENTIFICADOR ":=" expresion { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
                    ;

instruccion_si: SI expresion ENTONCES varias_instrucciones  { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones\n"); }
              | SINO FIN SI { printf ("instruccion_si ->  SINO FIN SI\n"); }
              | FIN SI { printf ("instruccion_si -> FIN SI\n"); }
              ;

instruccion_casos: CASOS expresion ES varios_casos FIN CASOS { printf ("instruccion_casos ->  CASOS expresion ES varios_casos FIN CASOS \n"); };

caso: CUANDO entradas "=>" varias_instrucciones { printf ("caso ->  CUANDO entradas => varias_instrucciones\n"); };

varios_casos: varios_casos caso       { printf ("varios_casos ->  varios_casos caso \n"); }
            | caso                    { printf ("varios_casos ->  caso \n"); }
            ;

entradas: varias_entradas entrada     { printf ("entradas ->  varias_entradas entrada\n"); };

varias_entradas: varias_entradas entrada  ':'     { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
               |        
               ;

entrada: expresion                    { printf ("entrada ->  expresion\n"); }
       | expresion ".." expresion     { printf ("entrada ->  expresion .. expresion\n"); }
       | OTRO                         { printf ("entrada ->  OTRO\n"); }
       ;

instruccion_bucle: clausula_iteracion varias_instrucciones FIN BUCLE                      { printf ("instruccion_bucle ->  clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
                 | IDENTIFICADOR ';' clausula_iteracion varias_instrucciones FIN BUCLE    { printf ("instruccion_bucle ->  IDENTIFICADOR ; clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
                 ;

varias_instrucciones: varias_instrucciones instruccion          { printf ("varias_instrucciones ->  varias_instrucciones instruccion\n"); }
                    | instruccion                               { printf ("varias_instrucciones ->  instruccion\n"); }
                    ;

clausula_iteracion: PARA IDENTIFICADOR EN expresion                                     { printf ("clausula_iteracion -> para identificador en expresion\n"); }
                  | PARA IDENTIFICADOR ':' especificacion_tipo EN expresion             { printf ("clausula_iteracion -> para identificador: especificacion_tipo en expresion\n"); }
                  | REPETIR IDENTIFICADOR EN RANGO                                      { printf ("clausula_iteracion -> repetir identificador en rango\n"); }
                  | REPETIR IDENTIFICADOR EN RANGO DESCENDENTE                          { printf ("clausula_iteracion -> repetir identificador en rango descendente\n"); }
                  | REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO              { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango\n"); }
                  | REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO DESCENDENTE  { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango descendente\n"); }
                  | MIENTRAS expresion                                                  { printf("clausula_iteracion -> mientras expresion\n");}
                  ;

instruccion_interrupcion: SIGUIENTE ';'                         { printf ("instruccion_interrupcion -> SIGUIENTE ;"); }
                        | SIGUIENTE cuando ';'                  { printf ("instruccion_interrupcion -> SIGUIENTE cuando ;"); }
                        | SALIR                                 { printf ("instruccion_interrupcion -> SALIR"); }
                        | SALIR DE IDENTIFICADOR cuando ';'     { printf ("instruccion_interrupcion -> SALIR DE IDENTIFICADOR cuando ;"); }
                        | SALIR DE IDENTIFICADOR ';'            { printf ("instruccion_interrupcion -> SALIR DE IDENTIFICADOR ;"); }
                        | SALIR CUANDO ';'                      { printf ("instruccion_interrupcion -> SALIR CUANDO ;"); }
                        ;

cuando: CUANDO expresion                          { printf ("cuando ->CUANDO expresion"); }
;

instruccion_lanzamiento_excepcion: LANZA nombre ';'                    { printf ("instruccion_lanzamiento_excepcion -> LANZA nombre ;"); }
;

instruccion_captura_excepcion: PRUEBA  varias_instrucciones clausulas FIN PRUEBA                   { printf ("instruccion_captura_excepcion -> PRUEBA varias_instrucciones clausulas FIN PRUEBA"); }
;

clausulas: clausulas_excepcion                                         { printf ("clausulas ->clausulas_excepcion\n"); }
         | clausulas_excepcion clausula_finalmente                     { printf ("clausulas ->clausulas_excepcion clausula_finalmente\n"); }
         | clausula_finalmente                                         { printf ("clausulas ->clausula_finalmente\n"); }  
         ;

clausulas_excepcion: varias_clausula_excepcion_especifica clausula_excepcion_general       { printf ("clausulas_excepcion -> varias_clausula_excepcion_especifica clausula_excepcion_general "); }
;

varias_clausula_excepcion_especifica: varias_clausula_excepcion_especifica clausula_excepcion_especifica  { printf ("varias_clausula_excepcion_especifica -> varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); } 
                                    |
                                    ;

clausula_excepcion_especifica: EXCEPCION '(' nombre ')' varias_instrucciones { printf ("clausula_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones "); }
;

clausula_excepcion_general: EXCEPCION varias_instrucciones  { printf ("clausula_excepcion_general -> EXCEPCION varias_instruccion"); }
;

clausula_finalmente: FINALMENTE varias_instrucciones        { printf ("clausula_finalmente -> FINALMENTE varias_instrucciones"); }
;

/*******************************EXPRESIONES********************************/

expresion: expresion_potencia
         | expresion_posfija
         | expresion_binaria
         | expresion_unaria
         | expresion_condicional
         ;

expresion_binaria: expresion op_binario expresion    { printf ("expresion_binaria ->  expresion operador_binario expresion\n"); }
                 ;

expresion_potencia: expresion_posfija                        { printf ("expresion_potencia ->  expresion_posfija\n"); }
                  | expresion_posfija '^' expresion_potencia { printf ("expresion_potencia ->  expresion_posfija '^' expresion_potencia\n"); }
                  ;

expresion_posfija: expresion_unaria                   { printf ("expresion_posfija -> expresion_unaria\n"); }
                 | expresion_unaria operador_posfijo	{ printf ("expresion_posfija -> expresion_unaria operador_posfijo\n"); }
                 ;

operador_posfijo: INC		{ printf ("operador posfijo -> '++'\n"); } 
                | DEC		{ printf ("operador posfijo -> '--'\n"); }
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

expresion_unaria: primario			{ printf ("expresion unaria -> primario\n"); }
                | '-' primario	{ printf ("expresion unaria -> '-' primario\n"); }
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

objeto:     nombre
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

/* clausula_iteracion esta declarada en seccion de instrucciones */
/* se declara aqui varias_clausulas_iteracion para la regla enumeraciones */
varias_clausulas_iteracion: varias_clausulas_iteracion clausula_iteracion  { printf ("varias_clausulas_iteracion -> varias_clausulas_iteracion clausula_iteracion\n"); }
                          | clausula_iteracion                             { printf ("varias_clausulas_iteracion -> varias_clausulas_iteracion\n"); }
                          ;

varias_expresiones: varias_expresiones expresion       { printf ("varias_expresiones ->  varias_expresiones expresion\n"); }
                  | expresion                              { printf ("varias_expresiones -> expresion\n"); }	 
                  ;

varias_claves_valor: varias_claves_valor clave_valor      { printf ("varias_claves_valor -> varias_claves_valor clave_valor\n"); }
                  | clave_valor                               { printf ("varias_claves_valor -> clave_valor\n"); }
                  ;

varios_campos_valor: varios_campos_valor campo_valor    { printf ("varios_campos_valor -> varios_campos_valor campo_valor\n"); }
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