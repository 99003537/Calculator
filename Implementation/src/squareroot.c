#include "squareroot.h"
#include <stdio.h>
#include <math.h>

int squareroot(int number)
{

    if (number<1)
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
        printf("\nThe square root of %d is %f\n",number,result);
       
    }

}
//please check your logic 
//this was the error:test_squareroot:FAIL: Expected 3 Was 32