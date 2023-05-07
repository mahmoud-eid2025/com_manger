#ifndef NERVIOUS_SYSTEM_H
#define NERVIOUS_SYSTEM_H

#include "Nervious_system_data_types_def.h"


// typedef int int32_t;
// typedef char int8_t;
// typedef  double    int32_t;

typedef int get_id_t;
typedef int set_id_t;
typedef int request_id_t;
typedef char BOOL;

#define TRUE (1)
#define FALSE   (0)



typedef struct args 
{
    void * ret ;
    void * param_1 ;
    void * param_2 ;
    void * param_3 ; 
    void * param_4 ;
    void * param_5 ;
    void * param_6 ;
}ARGS;

typedef void (* function_set_ptr) ( int , void * ) ;
typedef void (* function_get_ptr) ( int , void * ) ;
typedef void (* function_request_ptr) ( int , ARGS * ) ;



typedef struct Componant
{
    function_set_ptr     set ;
    function_get_ptr     get ;
    function_request_ptr request ;
}component_manager_node_t ;

typedef enum 
{
    MODULE_1 ,
    MODULE_2 ,
    MODULE_3 ,
    MODULE_4 ,
    MODULE_5 ,
    MODULE_6 ,
    LAST_MODULE 
}components_id_t ;


BOOL component_manager_set ( components_id_t , get_id_t , void *  ) ;

BOOL component_manager_get ( components_id_t , set_id_t , void * ) ;

BOOL component_manager_request (  components_id_t , request_id_t , ARGS *   ) ;

BOOL component_manager_attach_node ( components_id_t , component_manager_node_t *node  ) ;

#endif


