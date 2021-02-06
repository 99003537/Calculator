#include "squareroot.h"
#include <stdio.h>
#include <math.h>

int squareroot(int number)
{

    if (number<1)
    {
        printf("Result is an imaginary number");
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
        printf("The square root of %d is %f",number,result);
       
    }

}