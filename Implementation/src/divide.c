#include "divide.h"
#include <stdio.h>
#include "divide.h"

float divide(float a,float b)
{
    
    if (b!=0){
        printf("\n%f\n", a/b);
        return a/b;
        }
        else{
        printf("\ninvalid operation\n");
        return 0;
        }
    
}
