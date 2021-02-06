#include "multiplication.h"
#include <stdio.h>

int multiplication(int x,int y)
{
    int product;
    if(x==0)
    {
      printf("%d\n",0 );
        return 0;
    }
    else if(y==0)
    {
      printf("%d\n",0 );
        return 0;
    }
    else
    {
    product=x*y;
    printf("%d\n",product);
    return product;
    }
}

