#include "Module_1.h"

int var_1 ; 
char var_2 ;
float var_3 ; 
char  var_4 ;
double var_5 ; 


void m1_get_var_1 ( int  * c_var1 ) 
{
    * c_var1 =  var_1 ;
}
void m1_get_var_2 ( char * c_var2 ) 
{
    * c_var2 = var_2 ;
}
void m1_get_var_3 ( float * c_var3) 
{
    * c_var3 = var_3 ; 
}
void m1_get_var_4 ( char *  c_var4) 
{
    * c_var4 = var_4 ;
}
void m1_get_var_5 ( double * c_var5) 
{
    * c_var5 = var_5 ;
}


void m1_set_var_1 ( int c_var1) 
{
    var_1 = c_var1 ; 
}
void m1_set_var_2 ( char c_var2) 
{
    var_2 = c_var2 ;
}
void m1_set_var_3 ( float c_var3) 
{
    var_3 = c_var3 ; 
}
void m1_set_var_4 ( char  c_var4) 
{
    var_4 = c_var4 ;
}
void m1_set_var_5 ( double c_var5) 
{
    var_5 = c_var5 ;
}



char m1_process_var_1 ( int c_var1 , int c_var2 , float c_var3  ) 
{
    var_1 = c_var1 + c_var2 ;
    var_3 = c_var3 * 2 ;
    return 1 ;
}
char m1_process_var_2 ( char * cp_var1 , float c_var2 , int c_var3 , char c_var4 ) 
{
    var_4 = * cp_var1 ; 
    var_3 = c_var2 * 10 ; 
    return 1 ;

}
char m1_process_var_3 ( float c_var_1) 
{
    var_3 = c_var_1 / 15 ;  
    return 1 ;
}
char m1_process_var_4 ( char * c_var_1) 
{
    return 1 ;
}
char m1_process_var_5 ( double c_var_1) 
{

    return 1 ;
}



