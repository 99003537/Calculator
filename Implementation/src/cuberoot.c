#include "cuberoot.h"
<<<<<<< Updated upstream
//function to find the cuberoot
=======

>>>>>>> Stashed changes
double cuberoot(double x){
    double i,res, precision = 0.000001;
    for(i=1;(i*i*i)<=x;i++);
    for(--i;(i*i*i)<x; i += precision);
    res = i;
    return res;

}
