#include "Module_2.h"
#include "Module_1_interface.h"
#include "Nervios_system.h"

void system_init()
{
    module_1_interface_init();
}

int int1,int2,int3,int4;
char ret,char1,char2,char3,char4;
float float1,float2,float3;
double double1,double2,double3;

int reet ;
void system_run()
{
    GET_VARIABLE(MODULE_1,GET_VAR_1,reet,&int1);
    GET_VARIABLE(MODULE_1,GET_VAR_2,reet,&char1);
    GET_VARIABLE(MODULE_1,GET_VAR_3,reet,&float1);
    GET_VARIABLE(MODULE_1,GET_VAR_4,reet,&char1);
    GET_VARIABLE(MODULE_1,GET_VAR_5,reet,&double1);
    
    SET_VARIABLE(MODULE_1,SET_VAR_1,reet,&int1);
    SET_VARIABLE(MODULE_1,SET_VAR_2,reet,&char1);
    SET_VARIABLE(MODULE_1,SET_VAR_3,reet,&float1);
    SET_VARIABLE(MODULE_1,SET_VAR_4,reet,&char1);
    SET_VARIABLE(MODULE_1,SET_VAR_5,reet,&double1);

    EXECUTE(MODULE_1,REQUEST_FUN_1,&ret,&int1,&int2,&float1);

    EXECUTE(MODULE_1,REQUEST_FUN_3,&ret,&float1);

    EXECUTE(MODULE_1,REQUEST_FUN_2,&ret,&char1,&float1,&int1,&char2);

    EXECUTE(MODULE_1,REQUEST_FUN_4,&ret,&char1);

    EXECUTE(MODULE_1,REQUEST_FUN_5,&ret,&double1);
    

}
