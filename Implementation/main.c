#include "header/main_header.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float temp;

    //first input from user: a number
    float A,B;

    printf("Hello user, please enter the 1st numbers \n");
    scanf("%f", &A);
    printf("Hello user, please enter the 2nd numbers \n");
    scanf("%f", &B);
    

    //users choice 
    char choice='y';
    
    int operation;
    printf("hello user, you can do operation now please proceed\n");
    printf("enter your choice for function as mentioned further:\n ");
    printf("+: 0\n-: 1\nx: 2\n/: 3\nmod. division: 4\nsqrt: 5\npercentage: 6\ncube_root: 7\nexpo.: 8\nexit: 9\n");
    scanf("%d",&operation);
        
        
    //switching functions
    switch (operation)
    {
        case 0:
            add(A,B);
            break;    
            
        case 1:
            subtraction(A,B);
            break;

        case 2:
            multiplication(A,B);
            break;
        case 3:
            divide(A,B);
            break;
        case 4:
            modular_division(A,B);
            break;
        case 5:
            squareroot(A);
            break;
        case 6:
            //percentage(A,B);
            break;
        case 7:
            cuberoot(A);
            break;
        case 8:
            exponential(A);
            break;
        case 9:

            printf("you have chosen to exit\n");
            break;

        default:
            break;
    }

    //test_function();
    test_main();
return 0;}
