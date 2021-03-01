#include "squareroot.h"
#include <stdio.h>
#include <math.h>

float squareroot(float number)
{

    if (number<0)
    {
        printf("\nResult is an imaginary number\n");
    }
    else 
    {
        float temp;
        float result;
        result=number/2;
        temp=0;
        while(result!=temp)
            {
                temp=result;
                result = ((number/temp)+temp)/2;
                
            }
        printf("\nThe square root of %f is %f\n",number,result);
       
    }

}