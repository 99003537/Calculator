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
   
    scanf("%f %f", &num1,&num2);
    if(num1==0 || num2==0)
    {
        printf("Both the numbers entered should be greater than 0");
    }
    else
    {
       
    percent = (num1 *num2 )/100;
    
    }
    return percent;
}
>>>>>>> dd04dde7594b01bb90b74f808234da9da74e2788
