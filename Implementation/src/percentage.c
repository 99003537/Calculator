#include "percentage.h"
#include<stdio.h>

float percentage(float num1, float num2)
  
/*
{
   float total;
   if(num2==0)
   {
       printf("\nUndefined\n");
   }
   
   else
   {
   //total=((num2-num1)*100)/num1;
      total=((num1/num2)*100);
      printf("\n%f\n",total);
   //return total;
   }
<<<<<<< HEAD
}2/8

=======
}
*/
  
{
    float percent;
   
    //scanf("%f %f", &num1,&num2);
    if(num2==0)
    {
        printf("denominator enterede should be greater than 0");
        percent=0;
    }
    else
    {
       
    percent = (num1 /num2 )*100;
    
    }
    return percent;
}

