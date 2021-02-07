#include "cuberoot.h"
#include <stdio.h>
//function to find the cuberoot
double cuberoot(double x){
    double i,res, precision = 0.000001;
    for(i=1;(i*i*i)<=x;i++);
    for(--i;(i*i*i)<x; i += precision);
    res = i;
    printf("\n%lf\n", res);
    return res;

}
