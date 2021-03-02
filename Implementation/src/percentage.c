#include "percentage.h"
#include<stdio.h>

float percentage(float num1, float nkkk)
 
  
{
    float percent;
   
    if(nkkk==0)
    {     
     printf("denominator enterede should be greater than 0");
        percent=0;
    
        
    }
    else 
    {

      percent = (num1 /nkkk)*100;
     printf("\n%f\n",percent);  
    }
    return percent;
}

