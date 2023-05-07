#include "Module_1_interface.h" 
#include "Module_1.h" 


void module_4_set ( int , void * ptr ) ;
void module_4_set ( int , void * ptr ) ; 
void module_4_request ( int , ARGS *  ) ;



component_manager_node_t module_4_node = 
{
    module_4_set , 
    module_4_set , 
    module_4_request ,
} ;

void module_4_interface_init ( void ) 
{
    component_manager_attach_node ( MODULE_4 , & module_4_node ) ;
}

void module_1_set ( int c_set_id , void * ptr ) 
{
    switch (c_set_id )
    {
    case SET_VAR_1 :
        m1_set_var_1( *(int *) ptr ) ;
        break;
    case SET_VAR_2 :
        m1_set_var_2( *(char *) ptr ) ;
        break;
    case SET_VAR_3 :
        m1_set_var_3( *( float * ) ptr ) ;
        break;
    case SET_VAR_4 :
        m1_set_var_4( * ( char *) ptr ) ;
        break;
    case SET_VAR_5 :
        m1_set_var_5( *(double *) ptr ) ;
        break;
    default:
        break;
    }
}


void module_1_get ( int c_set_id , void * ptr ) 
{
    switch (c_set_id )
    {
    case GET_VAR_1 :
        m1_get_var_1( (int *) ptr ) ;
        break;
    case GET_VAR_2 :
        m1_get_var_2( (char *) ptr ) ;
        break;
    case GET_VAR_3 :
        m1_get_var_3( (float * ) ptr ) ;
        break;
    case GET_VAR_4 :
        m1_get_var_4(  (char *) ptr ) ;
        break;
    case GET_VAR_5 :
        m1_get_var_5( (double *) ptr ) ;
        break;
    default:
        break;
    }
}

void module_1_request ( int c_set_id , ARGS * args )  
{
    switch (c_set_id )
    {
    case GET_VAR_1 :
        *(char *) args->ret = m1_process_var_1( *(int*) args->param_1 ,
                                                *(int*) args->param_2 ,
                                                *(float*) args->param_3) ;
        break;
    case GET_VAR_2 :
        *(char *) args->ret = m1_process_var_2((char * )args->param_1 ,
                                                *(float *) args->param_2 ,
                                                *(int *) args->param_3 ,
                                                *(char *) args->param_4 ) ;
        break;
    case GET_VAR_3 :
        *(char *) args->ret = m1_process_var_3(*(float *) args->param_1 ) ;
        break;
    case GET_VAR_4 :
        *(char *) args->ret = m1_process_var_4((char *) args->param_1 ) ;
        break;
    case GET_VAR_5 :
        *(char *) args->ret = m1_process_var_5( *(double *) args->param_1 ) ;
        break;
    default:
        break;
    }
}

