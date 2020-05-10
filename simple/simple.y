                              
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

programa: definicion_programa { printf ("\tEXITO: programa -> definicion_programa \n"); }
        | definicion_libreria { printf ("\tprograma -> definicion_libreria \n"); }
        ;


varias_librerias: varias_librerias libreria  { printf ("\tvarias_librerias -> varias_librerias libreria \n"); }
                |
                ;

definicion_programa: PROGRAMA IDENTIFICADOR ';' codigo_programa     { printf ("\tdefinicion_programa -> PROGRAMA IDENTIFICADOR ; codigo_programa \n"); };

codigo_programa: varias_librerias  cuerpo_subprograma               { printf ("\tcodigo_programa -> varias_librerias  cuerpo_subprograma \n"); };

libreria: IMPORTAR LIBRERIA nombre ';'                              { printf ("\tlibreria -> IMPORTAR LIBRERIA nombre ; \n"); }
        | IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ';'           { printf ("\tlibreria -> IMPORTAR LIBRERIA nombre COMO IDENTIFICADOR ; \n"); }
        | DE LIBRERIA nombre IMPORTAR varios_identificadores ';'    { printf ("\tlibreria -> DE LIBRERIA nombre IMPORTAR varios_identificadores ; \n"); }
        ;

varios_identificadores: varios_identificadores ',' IDENTIFICADOR    { printf ("\tvarios_identificadores -> varios_identificadores , IDENTIFICADOR \n"); }
                      | IDENTIFICADOR                               { printf ("\tvarios_identificadores -> IDENTIFICADOR\n"); }
                      ;

nombre: nombre CUATRO_PUNTOS IDENTIFICADOR                          { printf ("\tnombre -> nombre :: IDENTIFICADOR\n");} 
      | IDENTIFICADOR                                               { printf ("\tnombre -> IDENTIFICADOR\n");} 
      | error '\n'                                                  { yyerrok;} 
      ;

definicion_libreria: LIBRERIA IDENTIFICADOR ';' codigo_libreria         { printf ("\tdefinicion_libreria -> LIBRERIA IDENTIFICADOR ; codigo_libreria\n");};

codigo_libreria: varias_librerias varias_declaraciones                  { printf ("\tlibreria -> varias_librerias varias_declaraciones\n"); }
               | varias_librerias exportaciones varias_declaraciones    { printf ("\tlibreria -> varias_librerias exportaciones varias_declaraciones\n"); }
               ;

varios_nombres: varios_nombres ',' nombre     { printf ("\tvarios_nombres ->  varios_nombres , nombre\n"); }
              | nombre                        { printf ("\tvarios_nombres ->  nombre\n"); }
              ;

exportaciones: EXPORTAR varios_nombres ';'    { printf ("\texportaciones -> EXPORTAR varios_nombres ;\n"); };

declaracion: declaracion_objeto               { printf ("\tdeclaracion -> declaracion_objeto\n"); }
           | declaracion_tipo                 { printf ("\tdeclaracion -> declaracion_tipo\n"); }
           | declaracion_subprograma          { printf ("\tdeclaracion -> declaracion_subprograma\n"); }
           ;

/*******************************OBJETOS************************************/

declaracion_objeto: varios_identificadores ':' CONSTANTE especificacion_tipo ASIGNACION expresion ';'     { printf ("\tdeclaracion_objeto -> varios_identificadores : CONSTANTE especificacion_tipo := expresion ;\n"); }
                  | varios_identificadores ':' especificacion_tipo ';'                                    { printf ("\tdeclaracion_objeto -> varios_identificadores : especificacion_tipo ; \n"); }
                  | varios_identificadores ':' especificacion_tipo ASIGNACION expresion  ';'              { printf ("\tdeclaracion_objeto -> varios_identificadores : especificacion_tipo := expresion ;\n"); }
                  ;

especificacion_tipo: nombre                  { printf ("\tespecificacion_tipo -> nombre\n"); }
                   | tipo_no_estructurado    { printf ("\tespecificacion_tipo -> tipo_no_estructurado\n"); }
                   ;

/*******************************TIPOS************************************/

declaracion_tipo: TIPO IDENTIFICADOR ES tipo_no_estructurado ';'     { printf ("\tdeclaracion_tipo -> TIPO IDENTIFICADOR ES tipo_no_estructurado ;\n"); }
                | TIPO IDENTIFICADOR ES tipo_estructurado            { printf ("\tdeclaracion_tipo -> TIPO IDENTIFICADOR ES tipo_estructurado \n"); }
                ;

tipo_no_estructurado: tipo_escalar        { printf ("\ttipo_no_estructurado -> tipo_escalar \n"); }
                    | tipo_tabla          { printf ("\ttipo_no_estructurado -> tipo_tabla\n"); }
                    | tipo_diccionario    { printf ("\ttipo_no_estructurado -> tipo_diccionario \n"); }
                    ;

tipo_escalar: SIGNO tipo_basico                             { printf ("\ttipo_escalar -> SIGNO tipo_basico \n"); }
            | tipo_basico                                   { printf ("\ttipo_escalar -> tipo_basico\n"); }
            | tipo_basico  longitud                         { printf ("\ttipo_escalar -> tipo_basico  longitud \n"); }
            | tipo_basico RANGO rango                       { printf ("\ttipo_escalar -> tipo_basico RANGO rango \n"); }
            | tipo_basico longitud RANGO rango              { printf ("\ttipo_escalar -> tipo_basico longitud RANGO rango \n"); }   
            | SIGNO tipo_basico longitud                    { printf ("\ttipo_escalar -> SIGNO tipo_basico longitud\n"); }
            | SIGNO tipo_basico longitud RANGO rango        { printf ("\ttipo_escalar -> SIGNO tipo_basico longitud RANGO rango \n"); }
            | SIGNO tipo_basico RANGO rango                 { printf ("\ttipo_escalar -> SIGNO tipo_basico RANGO rango \n"); }
            ;

longitud: CORTO   { printf ("\tlongitud -> CORTO \n"); }  
        | LARGO   { printf ("\tlongitud -> LARGO \n"); }
        ;

tipo_basico: BOOLEANO   { printf ("\ttipo_basico -> BOOLEANO \n"); }
           | CARACTER   { printf ("\ttipo_basico -> CARACTER \n"); }
           | ENTERO     { printf ("\ttipo_basico -> ENTERO \n"); }
           | REAL       { printf ("\ttipo_basico -> REAL \n"); }
           ;

rango: expresion DOS_PUNTOS expresion                         { printf ("\trango -> expresion .. expresion\n"); }
     | expresion DOS_PUNTOS expresion DOS_PUNTOS expresion    { printf ("\trango -> expresion .. expresion .. expresion\n"); }
     ;

tipo_tabla: TABLA '(' expresion DOS_PUNTOS expresion ')' DE especificacion_tipo     { printf ("\ttipo_tabla -> TABLA ( expresion .. expresion ) DE especificacion_tipo\n"); }
          | LISTA DE especificacion_tipo                                            { printf ("\ttipo_tabla -> LISTA DE especificacion_tipo \n"); }
          ;

tipo_diccionario: DICCIONARIO  DE especificacion_tipo   { printf ("\ttipo_diccionario -> DICCIONARIO  DE especificacion_tipo\n"); };

tipo_estructurado: tipo_registro                        { printf ("\ttipo_estructurado -> tipo_registro\n"); }
                 | tipo_enumerado                       { printf ("\ttipo_estructurado -> tipo_enumerado\n"); }
                 | clase                                { printf ("\ttipo_estructurado -> clase\n"); }
                 ;

varios_campos: varios_campos campo                     { printf ("\tvarios_campos -> varios_campos campo\n"); }
             | campo                                   { printf ("\tvarios_campos -> campo\n"); }
             ;

tipo_registro: REGISTRO varios_campos FIN REGISTRO     { printf ("\ttipo_registro -> REGISTRO varios_campos FIN REGISTRO\n"); }
             ;

campo: varios_identificadores ':' especificacion_tipo ';'                    { printf ("\tcampo -> varios_identificadores : especificacion_tipo ;\n"); }
     | varios_identificadores ':' especificacion_tipo ASIGNACION expresion ';'     { printf ("\tcampo -> varios_identificadores : especificacion_tipo := expresion ;\n"); }
     ;

tipo_enumerado: ENUMERACION varios_elementos_enumeracion FIN ENUMERACION                     { printf ("\ttipo_enumerado -> ENUMERACION varios_elementos_enumeracion FIN ENUMERACION\n"); }
              | ENUMERACION DE tipo_escalar varios_elementos_enumeracion FIN ENUMERACION     { printf ("\ttipo_enumerado -> ENUMERACION DE tipo_escalar varios_elementos_enumeracion FIN ENUMERACION\n"); }
              ;

varios_elementos_enumeracion: varios_elementos_enumeracion ',' elemento_enumeracion     { printf ("\tvarios_elementos_enumeracion -> varios_elementos_enumeracion , elemento_enumeracion\n"); }
                            | elemento_enumeracion                                      { printf ("\tvarios_elementos_enumeracion -> elemento_enumeracion\n"); }
                            ;

elemento_enumeracion: IDENTIFICADOR                           { printf ("\telemento_enumeracion -> IDENTIFICADOR\n"); }
                    | IDENTIFICADOR ASIGNACION expresion      { printf ("\telemento_enumeracion -> IDENTIFICADOR ASIGNACION expresion\n"); }
                    ;

/*******************************CLASES************************************/

clase: CLASE ULTIMA superclases varias_declaraciones_componentes FIN CLASE  { printf ("\tclase -> CLASE ULTIMA superclases varias_declaraciones_componentes FIN CLASE \n"); }
     | CLASE varias_declaraciones_componentes FIN CLASE                     { printf ("\tclase -> CLASE varias_declaraciones_componentes FIN CLASE \n"); }
     | CLASE ULTIMA  varias_declaraciones_componentes FIN CLASE             { printf ("\tclase -> CLASE ULTIMA  varias_declaraciones_componentes FIN CLASE \n"); }
     | CLASE  superclases varias_declaraciones_componentes FIN CLASE        { printf ("\tclase -> CLASE  superclases varias_declaraciones_componentes FIN CLASE \n"); }
     ;

varias_declaraciones_componentes: varias_declaraciones_componentes declaracion_componente     { printf ("\tvarias_declaraciones_componentes -> varias_declaraciones_componentes declaracion_componente  \n"); }
                                | declaracion_componente                                      { printf ("\tvarias_declaraciones_componentes -> declaracion_componente \n"); }
                                ;

superclases: '(' varios_nombres ')'                 { printf ("\tsuperclases -> ( varios_nombres ) \n"); };


declaracion_componente: componente                  { printf ("\tdeclaracion_componente -> componente \n"); }
                      | visibilidad componente      { printf ("\tdeclaracion_componente -> visibilidad componente \n"); }
                      ;

visibilidad: PUBLICO                                { printf ("\tvisibilidad -> PUBLICO \n"); }
           | PROTEGIDO                              { printf ("\tvisibilidad -> PROTEGIDO \n"); }
           | PRIVADO                                { printf ("\tvisibilidad -> PRIVADO\n"); }
           ;

componente: declaracion_tipo                                   { printf ("\tcomponente -> declaracion_tipo\n"); }
          | declaracion_objeto                                 { printf ("\tcomponente -> declaracion_objeto\n"); }
          | sin_modificador declaracion_subprograma            { printf ("\tcomponente -> sin_modificador declaracion_subprograma\n"); }
          ;

sin_modificador: varios_modificadores               { printf ("\tsin_modificador -> varios_modificadores\n"); }
               |
               ;

varios_modificadores: varios_modificadores ',' modificador     { printf ("\tvarios_modificadores -> varios_modificadores , modificador\n"); }
                    | modificador                              { printf ("\tvarios_modificadores -> modificador\n"); }
                    ;

modificador: CONSTRUCTOR      { printf ("\tmodificador -> CONSTRUCTOR\n"); }
           | DESTRUCTOR       { printf ("\tmodificador -> DESTRUCTOR\n"); }
           | GENERICO         { printf ("\tmodificador -> GENERICO\n"); }
           | ABSTRACTO        { printf ("\tmodificador -> ABSTRACTO\n"); }
           | ESPECIFICO       { printf ("\tmodificador -> ESPECIFICO\n"); }
           | FINAL            { printf ("\tmodificador -> FINAL\n"); }
           ;



/*******************************SUBPROGRAMAS********************************/

declaracion_subprograma: SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA   { printf ("\tdeclaracion_subprograma -> SUBPROGRAMA cabecera_subprograma cuerpo_subprograma SUBPROGRAMA\n"); }
                       ;

cabecera_subprograma: IDENTIFICADOR                                   { printf ("\tcabecera_subprograma -> IDENTIFICADOR \n"); }
                    | IDENTIFICADOR parametrizacion                   { printf ("\tcabecera_subprograma -> IDENTIFICADOR parametrizacion \n"); }
                    | IDENTIFICADOR tipo_resultado                    { printf ("\tcabecera_subprograma -> IDENTIFICADOR tipo_resultado \n"); }
                    | IDENTIFICADOR parametrizacion tipo_resultado    { printf ("\tcabecera_subprograma -> IDENTIFICADOR parametrizacion tipo_resultado \n"); }
                    ;

parametrizacion: '(' varias_declaraciones_parametros declaracion_parametros ')'             { printf ("\tparametrizacion -> ( varias_declaraciones_parametros declaracion_parametros )\n"); };

declaracion_parametros: varios_identificadores ':' especificacion_tipo                             { printf ("\tdeclaracion_parametros -> varios_identificadores : especificacion_tipo\n"); }
                      | varios_identificadores ':' modo especificacion_tipo                        { printf ("\tdeclaracion_parametros -> varios_identificadores : modo especificacion_tipo\n"); }
                      | varios_identificadores ':' especificacion_tipo ASIGNACION expresion        { printf ("\tdeclaracion_parametros -> varios_identificadores : especificacion_tipo := expresion\n"); }
                      | varios_identificadores ':' modo especificacion_tipo ASIGNACION expresion   { printf ("\tdeclaracion_parametros -> varios_identificadores : modo especificacion_tipo := expresion\n"); }
                      ;

varias_declaraciones_parametros: varias_declaraciones_parametros declaracion_parametros ';'  { printf ("\tvarias_declaraciones_parametros -> varias_declaraciones_parametros declaracion_parametros ;\n"); }
                               |
                               ;

modo: VALOR                      { printf ("\tmodo -> VALOR\n"); }
    | REFERENCIA                 { printf ("\tmodo -> REFERENCIA\n"); }
    ;

tipo_resultado: DEVOLVER especificacion_tipo      { printf ("\ttipo_resultado -> DEVOLVER especificacion_tipo\n"); };

cuerpo_subprograma:  varias_declaraciones PRINCIPIO varias_instrucciones FIN    { printf ("\tcuerpo_subprograma -> varias_declaraciones PRINCIPIO varias_instrucciones FIN\n"); }
                  | error '\n'                                                  { yyerrok;}
                  ;

varias_declaraciones: varias_declaraciones declaracion       { printf ("\tvarias_declaraciones -> varias_declaraciones declaracion\n"); }
                    |
                    ;

/*******************************INSTRUCCIONES********************************/

varias_instrucciones: varias_instrucciones instruccion        { printf ("\tvarias_instrucciones -> varias_instrucciones  instruccion\n"); }                       
                    | instruccion                             { printf ("\tvarias_instrucciones -> instruccion\n"); }
                    ;

instruccion: instruccion_asignacion             { printf ("\tinstruccion -> instruccion_asignacion\n"); }
           | instruccion_devolver               { printf ("\tinstruccion -> instruccion_devolver\n"); }
           | instruccion_llamada                { printf ("\tinstruccion -> instruccion_llamada\n"); }
           | instruccion_si                     { printf ("\tinstruccion -> instruccion_si\n"); }
           | instruccion_casos                  { printf ("\tinstruccion -> instruccion_casos\n"); }
           | instruccion_bucle                  { printf ("\tinstruccion -> instruccion_bucle\n"); }
           | instruccion_interrupcion           { printf ("\tinstruccion -> instruccion_interrupcion\n"); }
           | instruccion_lanzamiento_excepcion  { printf ("\tinstruccion -> instruccion_lanzamiento_excepcion\n"); }
           | instruccion_captura_excepcion      { printf ("\tinstruccion -> instruccion_captura_excepcion\n"); }
           | ';'                                { printf ("\tinstruccion -> ;\n"); }
           ;

instruccion_asignacion: objeto op_asignacion  expresion ';' { printf ("\tinstruccion_asignacion -> objeto op_asignacion expresion ;\n"); };

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

instruccion_devolver: DEVOLVER ';'              { printf ("\tinstruccion_devolver -> DEVOLVER ;\n"); }
                    | DEVOLVER expresion ';'    { printf ("\tinstruccion_devolver -> DEVOLVER expresion ;\n"); }
                    ;

instruccion_llamada: llamada_subprograma ';'    { printf ("\tinstruccion_llamada -> llamada_subprograma ;\n"); };

llamada_subprograma: nombre '(' sin_definiciones_parametro ')'  { printf ("\tllamada_subprograma -> nombre ( sin_definiciones_parametro )\n"); };

sin_definiciones_parametro: varias_definiciones_parametro       { printf ("\tsin_definiciones_parametro -> varias_definiciones_parametro\n"); }
                          |
                          ;

varias_definiciones_parametro: varias_definiciones_parametro ',' definicion_parametro   { printf ("\tvarias_definiciones_parametro -> varias_definiciones_parametro , definicion_parametro\n"); }
                             | definicion_parametro                                     { printf ("\tvarias_definiciones_parametro ->  definicion_parametro\n"); }
                             ;

definicion_parametro: expresion                                 { printf ("\tdefinicion_parametro -> expresion\n"); }
                    | IDENTIFICADOR ASIGNACION expresion        { printf ("\tdefinicion_parametro -> IDENTIFICADOR ASIGNACION expresion\n"); }
                    ;

instruccion_si: SI expresion ENTONCES varias_instrucciones FIN SI                                    { printf ("\tinstruccion_si -> SI expresion ENTONCES varias_instrucciones FIN SI\n"); }
              | SI expresion ENTONCES varias_instrucciones SINO varias_instrucciones FIN SI          { printf ("\tinstruccion_si -> SI expresion ENTONCES varias_instrucciones SINO varias_instrucciones FIN SI \n"); }                      
              ;

instruccion_casos: CASOS expresion ES varios_casos FIN CASOS    { printf ("\tinstruccion_casos -> CASOS expresion ES varios_casos FIN CASOS \n"); };

caso: CUANDO entradas FLECHA varias_instrucciones               { printf ("\tcaso -> CUANDO entradas => varias_instrucciones\n"); };

varios_casos: varios_casos caso                   { printf ("\tvarios_casos ->  varios_casos caso \n"); }
            | caso                                { printf ("\tvarios_casos ->  caso \n"); }
            ;

entradas: varias_entradas entrada                 { printf ("\tentradas ->  varias_entradas entrada\n"); };

varias_entradas: varias_entradas entrada  ':'     { printf ("\tvarias_entradas ->  varias_entradas entrada :\n"); }
               |        
               ;

entrada: expresion                                { printf ("\tentrada ->  expresion\n"); }
       | expresion DOS_PUNTOS expresion           { printf ("\tentrada ->  expresion .. expresion\n"); }
       | OTRO                                     { printf ("\tentrada ->  OTRO\n"); }
       ;

instruccion_bucle: clausula_iteracion varias_instrucciones FIN BUCLE                      { printf ("\tinstruccion_bucle ->  clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
                 | IDENTIFICADOR ';' clausula_iteracion varias_instrucciones FIN BUCLE    { printf ("\tinstruccion_bucle ->  IDENTIFICADOR ; clausula_iteracion varias_instrucciones FIN BUCLE\n"); }
                 ;

clausula_iteracion: PARA IDENTIFICADOR EN expresion                                       { printf ("\tclausula_iteracion -> PARA IDENTIFICADOR EN expresion\n"); }
                  | PARA IDENTIFICADOR ':' especificacion_tipo EN expresion               { printf ("\tclausula_iteracion -> PARA IDENTIFICADOR : especificacion_tipo EN expresion\n"); }
                  | REPETIR IDENTIFICADOR EN RANGO                                        { printf ("\tclausula_iteracion -> REPETIR IDENTIFICADOR EN RANGO\n"); }
                  | REPETIR IDENTIFICADOR EN RANGO DESCENDENTE                            { printf ("\tclausula_iteracion -> REPETIR IDENTIFICADOR EN RANGO DESCENDENTE\n"); }
                  | REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO                { printf ("\tclausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN RANGO\n"); }
                  | REPETIR IDENTIFICADOR ':' especificacion_tipo EN RANGO DESCENDENTE    { printf ("\tclausula_iteracion -> REPETIR IDENTIFICADOR : especificacion_tipo EN RANGO DESCENDENTE\n"); }
                  | MIENTRAS expresion                                                    { printf ("\tclausula_iteracion -> MIENTRAS expresion\n");}
                  ;

instruccion_interrupcion: SIGUIENTE ';'                                   { printf ("\tinstruccion_interrupcion -> SIGUIENTE ;\n"); }
                        | SIGUIENTE CUANDO expresion ';'                  { printf ("\tinstruccion_interrupcion -> SIGUIENTE CUANDO expresion ;\n"); }
                        | SALIR ';'                                       { printf ("\tinstruccion_interrupcion -> SALIR"); }
                        | SALIR DE IDENTIFICADOR CUANDO expresion ';'     { printf ("\tinstruccion_interrupcion -> SALIR DE IDENTIFICADOR CUANDO expresion ;\n"); }
                        | SALIR DE IDENTIFICADOR ';'                      { printf ("\tinstruccion_interrupcion -> SALIR DE IDENTIFICADOR ;\n"); }
                        | SALIR CUANDO ';'                                { printf ("\tinstruccion_interrupcion -> SALIR CUANDO ;\n"); }
                        ;

instruccion_lanzamiento_excepcion: LANZA nombre ';'                       { printf ("\tinstruccion_lanzamiento_excepcion -> LANZA nombre ;\n"); }
;

instruccion_captura_excepcion: PRUEBA varias_instrucciones clausulas FIN PRUEBA         { printf ("\tinstruccion_captura_excepcion -> PRUEBA varias_instrucciones clausulas FIN PRUEBA\n"); }
;

clausulas: clausulas_excepcion                                            { printf ("\tclausulas -> clausulas_excepcion\n"); }
         | clausulas_excepcion clausula_finalmente                        { printf ("\tclausulas -> clausulas_excepcion clausula_finalmente\n"); }
         | clausula_finalmente                                            { printf ("\tclausulas -> clausula_finalmente\n"); }  
         ;

clausulas_excepcion: varias_clausula_excepcion_especifica clausula_excepcion_general      { printf ("\tclausulas_excepcion -> varias_clausula_excepcion_especifica clausula_excepcion_general\n"); }
;

varias_clausula_excepcion_especifica: varias_clausula_excepcion_especifica clausula_excepcion_especifica  { printf ("\tvarias_clausula_excepcion_especifica -> varias_clausula_excepcion_especifica clausula_excepcion_especifica\n"); } 
                                    |
                                    ;

clausula_excepcion_especifica: EXCEPCION '(' nombre ')' varias_instrucciones { printf ("\tclausula_excepcion_especifica -> EXCEPCION ( nombre ) varias_instrucciones\n"); }
;

clausula_excepcion_general: EXCEPCION varias_instrucciones  { printf ("\tclausula_excepcion_general -> EXCEPCION varias_instruccion\n"); }
;

clausula_finalmente: FINALMENTE varias_instrucciones        { printf ("\tclausula_finalmente -> FINALMENTE varias_instrucciones\n"); }
;

/*******************************EXPRESIONES********************************/

/*Establecemos las asociatividades de los operadores binarios*/
expresion: expresion OR op_and              { printf ("\texpresion -> expresion \\/ op_and\n"); }
         | op_and                           { printf ("\texpresion -> op_and\n"); }
         ;

op_and: op_and AND op_negacion              { printf ("\top_and -> op_and /\\ op_negacion\n"); }
      | op_negacion                         { printf ("\top_and -> op_negacion\n"); }
      ;

op_negacion: '~' op_comparacion             { printf ("\top_negacion -> ~ op_comparacion\n"); }
           | op_comparacion                 { printf ("\top_negacion -> op_comparacion\n"); }
           ;

op_comparacion: op_desp '<' op_desp         { printf ("\top_comparacion -> op_desp < op_desp\n"); }
              | op_desp '>' op_desp         { printf ("\top_comparacion -> op_desp > op_desp\n"); }
              | op_desp LEQ op_desp         { printf ("\top_comparacion -> op_desp <= op_desp\n"); }
              | op_desp GEQ op_desp         { printf ("\top_comparacion -> op_desp >= op_desp\n"); }
              | op_desp '=' op_desp         { printf ("\top_comparacion -> op_desp = op_desp\n"); }
              | op_desp NEQ op_desp         { printf ("\top_comparacion -> op_desp ~= op_desp\n"); }
              | op_desp                     { printf ("\top_comparacion -> op_desp\n"); }
              ;

op_desp: op_desp DESPD op_sumaresta         { printf ("\top_desp -> op_desp -> op_suma_resta\n"); }
       | op_desp DESPI op_sumaresta         { printf ("\top_desp -> op_desp <- op_suma_resta\n"); }
       | op_sumaresta                       { printf ("\top_desp -> op_sumaresta\n"); }
       ;

op_sumaresta: op_sumaresta '+' op_multdiv   { printf ("\top_sumaresta -> op_sumaresta + op_multdiv\n"); }
            | op_sumaresta '-' op_multdiv   { printf ("\top_sumaresta -> op_sumaresta - op_multdiv\n"); }
            | op_multdiv                    { printf ("\top_multdiv\n"); }
            ;

op_multdiv: op_multdiv '*' op_potencia      { printf ("\top_multdiv -> op_multdiv * op_potencia\n"); }
          | op_multdiv '/' op_potencia      { printf ("\top_multdiv -> op_multdiv / op_potencia\n"); }
          | op_multdiv '\\' op_potencia     { printf ("\top_multdiv -> op_multdiv \\ op_potencia\n"); }
          |op_potencia                      { printf ("\top_multdiv -> op_potencia\n"); }
          ;

op_potencia: expresion_posfija '^' op_potencia    { printf ("\top_potencia -> expresion_posfija ^ op_potencia\n"); }
           | expresion_posfija                    { printf ("\top_potencia -> expresion_posfija\n"); }
           ;

expresion_posfija: expresion_unaria INC	      { printf ("\texpresion_posfija -> expresion_unaria ++\n"); }
                 | expresion_unaria DEC	      { printf ("\texpresion_posfija -> expresion_unaria --\n"); }
                 | expresion_unaria           { printf ("\texpresion_posfija -> expresion_unaria\n"); }
                 ;

expresion_unaria: primario			               { printf ("\texpresion unaria -> primario\n"); }
                | '-' primario	               { printf ("\texpresion unaria -> - primario\n"); }
                ;

primario: literal                              { printf ("\tprimario -> literal\n"); }
        | objeto                               { printf ("\tprimario -> objeto\n"); }
        | llamada_subprograma                  { printf ("\tprimario -> llamada_subprograma\n"); }
        | OBJETO llamada_subprograma           { printf ("\tprimario -> OBJETO llamada_subprograma\n"); }
        | enumeraciones                        { printf ("\tprimario -> enumeraciones\n"); }
        | '(' expresion ')'                    { printf ("\tprimario -> ( expresion )\n"); }
        ;

literal: num			      { printf ("\tliteral -> num\n"); }
       | op_booleano		{ printf ("\tliteral -> op_booleano\n"); }
       | CTC_CARACTER 	{ printf ("\tliteral -> CTC_CARACTER\n"); }
       | CTC_CADENA 		{ printf ("\tliteral -> CTC_CADENA\n"); }
       ;

op_booleano: VERDADERO 	{ printf ("\top_booleano -> VERDADERO\n"); }
           | FALSO 		  { printf ("\top_booleano -> FALSO\n"); }
           ;

num: CTC_ENTERA	        { printf ("\tnum -> CTC_ENTERA\n"); }
   | CTC_REAL 	        { printf ("\tnum -> CTC_REAL\n"); }
   ;	

objeto: nombre                                { printf ("\tobjeto -> nombre\n"); }
      | objeto '.' IDENTIFICADOR              { printf ("\tobjeto -> objeto . IDENTIFICADOR\n"); }
      | objeto '[' varias_expresiones ']'     { printf ("\tobjeto -> objeto [ varias_expresiones ]\n"); }
      | objeto '{' varias_ctc_cadena '}'      { printf ("\tobjeto -> objeto { varias_ctc_cadena }\n"); }
      ;

varias_ctc_cadena: varias_ctc_cadena ',' CTC_CADENA         { printf ("\tvarias_ctc_cadena -> varias_ctc_cadena , CTC_CADENA\n"); }
                 | CTC_CADENA                               { printf ("\tvarias_ctc_cadena -> CTC_CADENA\n"); }
                 ;

enumeraciones: '[' expresion_condicional  ']'                               { printf ("\tenumeraciones -> [ expresion_condicional ]\n"); }
             | '[' expresion_condicional varias_clausulas_iteracion ']'     { printf ("\tenumeraciones -> [ expresion_condicional varias_clausulas_iteracion ]\n"); }
             | '[' varias_expresiones ']'                                   { printf ("\tenumeraciones -> [ varias_expresiones ]\n"); }
             | '{' varias_claves_valor '}'                                  { printf ("\tenumeraciones -> { varias_claves_valor }\n"); }
             | '{' varios_campos_valor '}'                                  { printf ("\tenumeraciones -> { varios_campos_valor }\n"); }
             ; 

varias_clausulas_iteracion: varias_clausulas_iteracion clausula_iteracion  { printf ("\tvarias_clausulas_iteracion -> varias_clausulas_iteracion clausula_iteracion\n"); }
                          | clausula_iteracion                             { printf ("\tvarias_clausulas_iteracion -> clausula_iteracion\n"); }
                          ;

varias_expresiones: varias_expresiones ',' expresion       { printf ("\tvarias_expresiones ->  varias_expresiones , expresion\n"); }
                  | expresion                              { printf ("\tvarias_expresiones -> expresion\n"); }	 
                  ;

varias_claves_valor: varias_claves_valor clave_valor       { printf ("\tvarias_claves_valor -> varias_claves_valor clave_valor\n"); }
                  | clave_valor                            { printf ("\tvarias_claves_valor -> clave_valor\n"); }
                  ;

varios_campos_valor: varios_campos_valor campo_valor       { printf ("\tvarios_campos_valor -> varios_campos_valor campo_valor\n"); }
                   | campo_valor                           { printf ("\tvarios_campos_valor -> campo_valor\n"); }
                   ;

expresion_condicional: expresion SI expresion ENTONCES expresion        { printf ("\texpresion_condicional -> expresion SI expresion ENTONCES expresion\n"); }
                     | SI expresion ENTONCES expresion SINO expresion   { printf ("\texpresion_condicional -> SI expresion ENTONCES expresion SINO expresion\n"); }
                     ;

clave_valor: CTC_CADENA FLECHA expresion        { printf("\tclave_valor -> CTC_CADENA => expresion\n"); };

campo_valor: IDENTIFICADOR FLECHA expresion     { printf("\tcampo_valor -> IDENTIFICADOR => expresion\n"); };

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