#ifndef MODULE_1_INTERFACE_H
#define MODULE_1_INTERFACE_H

#include "Nervios_system.h" 
#include "Nervious_system_data_types_def.h"

typedef enum 
{
    SET_VAR_1 , 
    SET_VAR_2 , 
    SET_VAR_3 , 
    SET_VAR_4 , 
    SET_VAR_5 , 
} MODULE_1_SET_TYPE;

typedef enum 
{
    GET_VAR_1 , 
    GET_VAR_2 , 
    GET_VAR_3 , 
    GET_VAR_4 , 
    GET_VAR_5 , 
} MODULE_1_GET_TYPE;

typedef enum 
{
    REQUEST_FUN_1 , 
    REQUEST_FUN_2 , 
    REQUEST_FUN_3 , 
    REQUEST_FUN_4 , 
    REQUEST_FUN_5 , 
} MODULE_1_RE1UEST_TYPE ;

void module_1_interface_init ( void ) ;


GET_VAR_PROTO(MODULE_1,GET_VAR_1,int*);
GET_VAR_PROTO(MODULE_1,GET_VAR_2,char*);
GET_VAR_PROTO(MODULE_1,GET_VAR_3,float*);
GET_VAR_PROTO(MODULE_1,GET_VAR_4,char*);
GET_VAR_PROTO(MODULE_1,GET_VAR_5,double*);

SET_VAR_PROTO(MODULE_1,SET_VAR_1,int*);
SET_VAR_PROTO(MODULE_1,SET_VAR_2,char*);
SET_VAR_PROTO(MODULE_1,SET_VAR_3,float*);
SET_VAR_PROTO(MODULE_1,SET_VAR_4,char*);
SET_VAR_PROTO(MODULE_1,SET_VAR_5,double*);



EXECUTE_PROTO(MODULE_1,REQUEST_FUN_1,char*,int*,int*,float*);
EXECUTE_PROTO(MODULE_1,REQUEST_FUN_2,char*,char*,float*,int*,char*);
EXECUTE_PROTO(MODULE_1,REQUEST_FUN_3,char*,float*);
EXECUTE_PROTO(MODULE_1,REQUEST_FUN_4,char*,char*);
EXECUTE_PROTO(MODULE_1,REQUEST_FUN_5,char*,double*);


#endif 


