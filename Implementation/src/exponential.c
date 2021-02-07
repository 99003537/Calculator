#include "exponential.h"
#include <stdio.h>

double exponential(float num)
{
float y;
y=num;
const float e = 2.718;
double res;
res = 1;
if(y>=0)
{
for(y;y>0;y--)
{
    res= res * e;
    }
    
    printf("\n%lf\n", res);
    return res;
}
else if(y<0)
{
 for(y;y<0;y++)
{
    res= res/e;
    }
    
    printf("\n%lf\n", res);
    return res;
}
   else
   {printf("\nInvalid Input\n");

return 0;}
}

