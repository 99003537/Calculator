
#include "header/main_header.h"
#include "unity.h"
#include "unity_internals.h"
#include <stdio.h>


void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

/*
void test_cuberoot(void);
void test_percentage(void);
void test_exponential(void);
void test_modular_division(void);
void test_multiplication(void);
void test_squareroot(void);
void test_divide(void);
void test_add(void);
void test_subtraction(void);
*/


void test_cuberoot(void)
{    printf("entered test_  functions\n");
  //  CU_ASSERT(2==2);
   
} 

void test_percentage(void)
{    printf("entered test_  functions\n");
    //CU_ASSERT(2==2);
    
}

void test_exponential(void)
{
    printf("entered test_  functions\n");
    //CU_ASSERT(2==2);
}

void test_modular_division(void)
{    printf("entered test_  functions\n");
    //CU_ASSERT(2==2); 
}


void test_multiplication(void)
{    printf("entered test_  functions\n");
    //CU_ASSERT(2==2);
}

void test_divide(void){
    printf("entered test_  functions\n");
    //CU_ASSERT(2==2);
}


void test_add(void){
    printf("entered test_  functions\n");
    //CU_ASSERT(2==2);
}


void test_subtraction(void){
    printf("entered test_  functions\n");
    //CU_ASSERT_EQUAL(2,2);
}


void test_squareroot(void){
    printf("entered test_  functions\n");

    //CU_ASSERT(2==2);
}





int main(void){

    UNITY_BEGIN();


    RUN_TEST(test_squareroot);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_add);
    RUN_TEST(test_divide);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_modular_division);
    RUN_TEST(test_exponential);
    RUN_TEST(test_percentage);
    RUN_TEST(test_cuberoot);



    return UNITY_END();

}

