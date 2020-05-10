                              
%{

  #include <stdio.h>
   #define YYDEBUG 1

  extern FILE *yyin;
  extern int yylex();
  int yyerror(char *s);
 
%}

/*De menor a mayor precedencia*/

%token ABSTRACTO BOOLEANO BUCLE CARACTER CASOS CLASE COMO CONSTANTE CONSTRUCTOR CORTO
%token CUANDO DE DESCENDENTE DESTRUCTOR DEVOLVER DICCIONARIO EN ENTERO ENTONCES 
%token ENUMERACION ES ESPECIFICO EXCEPCION EXPORTAR FALSO FIN FINAL FINALMENTE GENERICO
%token IMPORTAR LARGO LANZA LIBRERIA LISTA MIENTRAS OBJETO OTRO PARA PRINCIPIO PRIVADO
%token PROGRAMA PROTEGIDO PRUEBA PUBLICO RANGO REAL REFERENCIA REGISTRO REPETIR SALIR
%token SI SIGNO SIGUIENTE SINO SUBPROGRAMA TABLA TIPO ULTIMA VALOR VERDADERO CTC_CARACTER
%token CTC_CADENA IDENTIFICADOR CTC_ENTERA CTC_REAL DOS_PUNTOS CUATRO_PUNTOS
%token ASIGNACION FLECHA INC DEC DESPI DESPD LEQ GEQ NEQ AND OR ASIG_SUMA ASIG_RESTA
%token ASIG_MULT ASIG_DIV ASIG_RESTO ASIG_POT ASIG_DESPI ASIG_DESPD


 
%%

/*******************************PROGRAMA************************************/

programa: definicion_programa { printf ("programa -> definicion_programa \n"); }
        | definicion_libreria { printf ("programa -> definicion_libreria \n"); }
        ;


varias_librerias: varias_librerias libreria  { printf ("varias_librerias -> varias_librerias libreria \n"); }
                |
                ;

definicion_programa: PROGRAMA IDENTIFICADOR ';' codigo_programa     { printf ("definicion_programa -> PROGRAMA IDENTIFICADOR ; codigo_programa \n"); };

codigo_programa: varias_librerias  cuerpo_subprograma               { printf ("codigo_programa -> varias_librerias  cuerpo_subprograma \n"); };

libreria: IMPORTAR LIBRERIA nombre ';'                              { printf ("libreria -> IMPORTAR LIBRERIA nombre ; \n"); }
        | IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'           { printf ("libreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
        | DE LIBRERIA nombre IMPORTAR varios_identificadores ';'    { printf ("libreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
        ;

varios_identificadores: varios_identificadores ',' IDENTIFICADOR  { printf ("varios_identificadores -> varios_identificadores , IDENTIFICADOR \n"); }
                      | IDENTIFICADOR  { printf ("varios_identificadores -> IDENTIFICADOR\n"); }                      
                      ;

nombre:  nombre CUATRO_PUNTOS IDENTIFICADOR     { printf ("nombre -> varios_identificadores IDENTIFICADOR\n");} 
  |IDENTIFICADOR
;

definicion_libreria: LIBRERIA IDENTIFICADOR ';' codigo_libreria;

codigo_libreria: varias_librerias varias_declaraciones                  { printf ("codigo_libreria -> varias_librerias varias_declaraciones\n"); }
               | varias_librerias exportaciones varias_declaraciones    { printf ("codigo_libreria -> varias_librerias exportaciones varias_declaraciones\n"); }
               ;

varios_nombres: varios_nombres ',' nombre     { printf ("varios_nombres ->  varios_nombres , nombre\n"); }
              | nombre                        { printf ("varios_nombres ->  nombre\n"); }
              ;

exportaciones: EXPORTAR varios_nombres ';'    { printf ("exportaciones -> EXPORTAR varios_nombres ;\n"); };

declaracion: declaracion_objeto         { printf ("declaracion -> declaracion_objeto\n"); }
           | declaracion_tipo           { printf ("declaracion -> declaracion_tipo\n"); }
           | declaracion_subprograma    { printf ("declaracion -> declaracion_subprograma\n"); }
           ;

/*******************************OBJETOS************************************/

declaracion_objeto: varios_identificadores ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'     { printf ("declaracion_objeto -> varios_identificadores : CONSTANTE especificacion_tipo ASIGNACION expresion ;\n"); }
                  | varios_identificadores ':' especificacion_tipo ';'                              { printf ("declaracion_objeto -> varios_identificadores : especificacion_tipo ; \n"); }
                  | varios_identificadores ':' especificacion_tipo ASIGNACION expresion  ';'              { printf ("declaracion_objeto -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
                  ;

especificacion_tipo: nombre                  { printf ("especificacion_tipo -> nombre\n"); }
                   | tipo_no_estructurado    { printf ("especificacion_tipo -> tipo_no_estructurado\n"); }
                   ;

/*******************************TIPOS************************************/

declaracion_tipo: TIPO IDENTIFICADOR ES tipo_no_estructurado ';'     { printf ("declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
                | TIPO IDENTIFICADOR ES tipo_estructurado            { printf ("declaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado \n"); }
                ;

tipo_no_estructurado: tipo_escalar        { printf ("tipo_no_estructurado -> tipo_escalar \n"); }
                    | tipo_tabla          { printf ("tipo_no_estructurado -> tipo_tabla\n"); }
                    | tipo_diccionario    { printf ("tipo_no_estructurado -> tipo_diccionario \n"); }
                    ;

tipo_escalar: SIGNO tipo_basico                             { printf ("tipo_escalar -> tipo_basico \n"); }
            | tipo_basico                                   { printf ("tipo_escalar -> SIGNO tipo_basico \n"); }
            | tipo_basico  longitud                         { printf ("tipo_escalar -> tipo_basico  longitud \n"); }
            | tipo_basico RANGO rango                       { printf ("tipo_escalar -> tipo_basico RANGO rango \n"); }
            | tipo_basico longitud RANGO rango              { printf ("tipo_escalar -> tipo_basico longitud RANGO rango \n"); }   
            | SIGNO tipo_basico longitud                    { printf ("tipo_escalar -> SIGNO tipo_basico longitud\n"); }
            | SIGNO tipo_basico longitud RANGO rango        { printf ("tipo_escalar -> SIGNO tipo_basico longitud RANGO rango \n"); }
            | SIGNO tipo_basico RANGO rango                 { printf ("tipo_escalar -> SIGNO tipo_basico RANGO rango \n"); }
            ;

longitud: CORTO   { printf ("longitud -> CORTO \n"); }  
        | LARGO   { printf ("longitud -> LARGO \n"); }
        ;

tipo_basico: BOOLEANO   { printf ("tipo_basico -> BOOLEANO \n"); }
           | CARACTER   { printf ("tipo_basico -> CARACTER \n"); }
           | ENTERO     { printf ("tipo_basico -> ENTERO \n"); }
           | REAL       { printf ("tipo_basico -> REAL \n"); }
           ;

rango: expresion DOS_PUNTOS expresion                   { printf ("rango -> expresion DOS_PUNTOS expresion\n"); }
     | expresion DOS_PUNTOS expresion DOS_PUNTOS expresion    { printf ("rango -> expresion DOS_PUNTOS expresion DOS_PUNTOS expresion\n"); }
     ;

tipo_tabla: TABLA '(' expresion DOS_PUNTOS expresion ')' DE especificacion_tipo     { printf ("tipo_tabla -> TABLA ( expresion DOS_PUNTOS expresion ) DE especificacion_tipo\n"); }
          | LISTA DE especificacion_tipo                                      { printf ("tipo_tabla -> LISTA DE especificacion_tipo \n"); }
          ;

tipo_diccionario: DICCIONARIO  DE especificacion_tipo   { printf ("tipo_diccionario -> DICCIONARIO  DE especificacion_tipo\n"); };

tipo_estructurado: tipo_registro                        { printf ("tipo_estructurado -> tipo_registro\n"); }
                 | tipo_enumerado                       { printf ("tipo_estructurado -> tipo_enumerado\n"); }
                 | clase                                { printf ("tipo_estructurado -> clase\n"); }
                 ;

varios_campos: varios_campos campo                     { printf ("varios_campos -> varios_campos campo\n"); }
             | campo                                   { printf ("varios_campos -> campo\n"); }
             ;

tipo_registro: REGISTRO varios_campos FIN REGISTRO     { printf ("tipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
             ;

campo: varios_identificadores ':' especificacion_tipo ';'                    { printf ("campo -> varios_identificadores : especificacion_tipo ;\n"); }
     | varios_identificadores ':' especificacion_tipo ASIGNACION expresion ';'     { printf ("campo -> varios_identificadores : especificacion_tipo ASIGNACION expresion ;\n"); }
     ;

tipo_enumerado: ENUMERACION varios_elementos_enumeracion FIN ENUMERACION                     { printf ("tipo_enumerado -> ENUMERACION varios_elementos_enumeracion FIN ENUMERACION\n"); }
              | ENUMERACION DE tipo_escalar varios_elementos_enumeracion FIN ENUMERACION     { printf ("tipo_enumerado -> ENUMERACION DE tipo_escalar varios_elementos_enumeracion FIN ENUMERACION\n"); }
              ;

varios_elementos_enumeracion: varios_elementos_enumeracion ',' elemento_enumeracion     { printf ("varios_elementos_enumeracion -> varios_elementos_enumeracion , elemento_enumeracion\n"); }
                            | elemento_enumeracion                                     { printf ("varios_elementos_enumeracion -> elemento_enumeracion\n"); }
                            ;

elemento_enumeracion: IDENTIFICADOR                     { printf ("elemento_enumeracion -> IDENTIFICADOR\n"); }
                    | IDENTIFICADOR ASIGNACION expresion      { printf ("elemento_enumeracion -> IDENTIFICADOR ASIGNACION expresion\n"); }
                    ;

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
          | sin_modificador declaracion_subprograma          { printf ("componente -> varios_modificadores declaracion_subprograma\n"); }
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
                      | varios_identificadores ':' especificacion_tipo ASIGNACION expresion        { printf ("declaracion_parametros -> varios_identificadores : especificacion_tipo ASIGNACION expresion"); }
                      | varios_identificadores ':' modo especificacion_tipo ASIGNACION expresion   { printf ("declaracion_parametros -> varios_identificadores : modo especificacion_tipo ASIGNACION expresion"); }
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

varias_instrucciones: varias_instrucciones instruccion          { printf ("varias_instrucciones -> varias_instrucciones  instruccion\n"); }                       
                    | instruccion                             { printf ("varias_instrucciones -> instruccion\n"); }
                    ;

instruccion: instruccion_asignacion              { printf ("instruccion -> instruccion_asignacion\n"); }
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

instruccion_asignacion: objeto op_asignacion  expresion ';' { printf ("instruccion_asignacion -> objeto op_asignacion expresion ;\n"); }
;
op_asignacion: ASIGNACION
  |ASIG_SUMA
  |ASIG_DESPD
  |ASIG_RESTA
  |ASIG_DESPI
  |ASIG_DIV
  |ASIG_MULT
  |ASIG_POT
  |ASIG_RESTO
;



instruccion_devolver: DEVOLVER ';' { printf ("instruccion_devolver -> DEVOLVER ;\n"); }
                    | DEVOLVER expresion ';'  { printf ("instruccion_devolver -> DEVOLVER expresion ;\n"); }
                    ;

instruccion_llamada: llamada_subprograma ';'  { printf ("instruccion_llamada -> llamada_subprograma ;\n"); };

llamada_subprograma: nombre '(' sin_definiciones_parametro ')' { printf ("llamada_subprograma -> nombre varias_definiciones_parametro\n"); };

sin_definiciones_parametro: varias_definiciones_parametro   { printf ("sin_definiciones_parametro -> varias_definiciones_parametro ;\n"); }
                          |
                          ;

varias_definiciones_parametro: varias_definiciones_parametro ',' definicion_parametro   { printf ("varias_definiciones_parametro -> varias_definiciones_parametro , definicion_parametro\n"); }
                             | definicion_parametro                                     { printf ("varias_definiciones_parametro ->  definicion_parametro\n"); }
                             ;

definicion_parametro:  expresion       { printf ("definicion_parametro ->  expresion\n"); }
                    | IDENTIFICADOR ASIGNACION expresion { printf ("definicion_parametro ->  IDENTIFICADOR ASIGNACION expresion\n"); }
                    ;

instruccion_si: SI expresion ENTONCES varias_instrucciones FIN SI  { printf ("instruccion_si ->  SI expresion ENTONCES varias_instrucciones\n"); }
              | SI expresion ENTONCES varias_instrucciones SINO varias_instrucciones FIN SI                                 { printf ("instruccion_si ->  SINO FIN SI\n"); }
                                           
              ;

instruccion_casos: CASOS expresion ES varios_casos FIN CASOS { printf ("instruccion_casos ->  CASOS expresion ES varios_casos FIN CASOS \n"); };

caso: CUANDO entradas FLECHA varias_instrucciones { printf ("caso ->  CUANDO entradas FLECHA varias_instrucciones\n"); };

varios_casos: varios_casos caso       { printf ("varios_casos ->  varios_casos caso \n"); }
            | caso                    { printf ("varios_casos ->  caso \n"); }
            ;

entradas: varias_entradas entrada     { printf ("entradas ->  varias_entradas entrada\n"); };

varias_entradas: varias_entradas entrada  ':'     { printf ("varias_entradas ->  varias_entradas entrada :\n"); }
               |        
               ;

entrada: expresion                    { printf ("entrada ->  expresion\n"); }
       | expresion DOS_PUNTOS expresion     { printf ("entrada ->  expresion DOS_PUNTOS expresion\n"); }
       | OTRO                         { printf ("entrada ->  OTRO\n"); }
       ;

instruccion_bucle: clausula_iteracion varias_instrucciones FIN BUCLE                      { printf ("instruccion_bucle ->  clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
                 | IDENTIFICADOR ';' clausula_iteracion varias_instrucciones FIN BUCLE    { printf ("instruccion_bucle ->  IDENTIFICADOR ; clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
                 ;

clausula_iteracion: PARA IDENTIFICADOR EN expresion                                     { printf ("clausula_iteracion -> para identificador en expresion\n"); }
                  | PARA IDENTIFICADOR ':' especificacion_tipo EN expresion             { printf ("clausula_iteracion -> para identificador: especificacion_tipo en expresion\n"); }
                  | REPETIR IDENTIFICADOR EN RANGO                                      { printf ("clausula_iteracion -> repetir identificador en rango\n"); }
                  | REPETIR IDENTIFICADOR EN RANGO DESCENDENTE                          { printf ("clausula_iteracion -> repetir identificador en rango descendente\n"); }
                  | REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO              { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango\n"); }
                  | REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO DESCENDENTE  { printf ("clausula_iteracion -> repetir identificador: especificacion_tipo en rango descendente\n"); }
                  | MIENTRAS expresion                                                  { printf("clausula_iteracion -> mientras expresion\n");}
                  ;

instruccion_interrupcion: SIGUIENTE ';'                                   { printf ("instruccion_interrupcion -> SIGUIENTE ;"); }
                        | SIGUIENTE CUANDO expresion ';'                  { printf ("instruccion_interrupcion -> SIGUIENTE CUANDO expresion ;"); }
                        | SALIR ';'                                       { printf ("instruccion_interrupcion -> SALIR"); }
                        | SALIR DE IDENTIFICADOR CUANDO expresion ';'     { printf ("instruccion_interrupcion -> SALIR DE IDENTIFICADOR CUANDO expresion ;"); }
                        | SALIR DE IDENTIFICADOR ';'                      { printf ("instruccion_interrupcion -> SALIR DE IDENTIFICADOR ;"); }
                        | SALIR CUANDO ';'                                { printf ("instruccion_interrupcion -> SALIR CUANDO ;"); }
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

/*Establecemos las asociatividades de los operadores binarios*/
expresion: expresion OR op_and 
         | op_and
         ;

op_and: op_and AND op_negacion
      | op_negacion
      ;

op_negacion: '~' op_comparacion
           | op_comparacion
           ;

op_comparacion: op_desp '<' op_desp
              | op_desp '>' op_desp
              | op_desp LEQ op_desp
              | op_desp GEQ op_desp
              | op_desp '=' op_desp
              | op_desp NEQ op_desp
              | op_desp
              ;

op_desp: op_desp DESPD op_sumaresta
       | op_desp DESPI op_sumaresta
       | op_sumaresta
       ;

op_sumaresta: op_sumaresta '+' op_multdiv
            | op_sumaresta '-' op_multdiv
            | op_multdiv
            ;

op_multdiv: op_multdiv '*' op_potencia
          | op_multdiv '/' op_potencia
          | op_multdiv '\\' op_potencia
          |op_potencia
          ;

op_potencia: expresion_posfija '^' op_potencia
           | expresion_posfija
           ;

expresion_posfija: expresion_unaria INC	{ printf ("expresion_posfija -> expresion_unaria operador_posfijo\n"); }
                 | expresion_unaria DEC	{ printf ("expresion_posfija -> expresion_unaria operador_posfijo\n"); }
                 | expresion_unaria
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

varias_expresiones: varias_expresiones ',' expresion       { printf ("varias_expresiones ->  varias_expresiones expresion\n"); }
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

clave_valor: CTC_CADENA FLECHA expresion     { printf("\n\tclave_valor -> CTC_CADENA FLECHA expresion"); };

campo_valor: IDENTIFICADOR FLECHA expresion { printf("\n\tcampo_valor -> IDENTIFICADOR FLECHA expresion"); };

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