#include "modular_division.h"
#include <stdio.h>


int modular_division(int a,int b)

{
    int result;
    
    if(b!=0){

        result=a%b;

        printf("%d\n",result);
        return result;
    }

    else
    {
        printf("invalid operation\n");
    }

}