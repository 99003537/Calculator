
#include "main_header.h"

#include "../unity/unity.h"
#include "../unity/unity_internals.h"

#include <stdio.h>


void setUp (void) {}

void tearDown (void) {}

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
{    //LL_08_01
    TEST_ASSERT_EQUAL(3, cuberoot(27));
     
    //LL_08_02 
    //Dummy fail
    TEST_ASSERT_EQUAL(2, cuberoot(10.2));    
} 

void test_percentage(void)
{     //LL_07_01
    TEST_ASSERT_EQUAL(10, percentage(10,100));
    // LL_07_02
    //dummy fail
    TEST_ASSERT_EQUAL(10, percentage(2.5, 10)); 
    
}

void test_exponential(void)
{      
    //LL_07_01
    TEST_ASSERT_EQUAL(2.718, exponential(1));
    // LL_07_02
    //dummy fail
    TEST_ASSERT_EQUAL(0, exponential(-1)); 
   
}

void test_modular_division(void)
{
    //LL_05_01
    TEST_ASSERT_EQUAL(1, modular_division(10,3)); 
    //LL_05_02
    TEST_ASSERT_EQUAL(0.6, modular_division(10.2,2.2)); 
    //LL_05_03
    TEST_ASSERT_EQUAL(4, modular_division(4,12));
      

}


void test_multiplication(void)
{   //LL_03_01
    TEST_ASSERT_EQUAL(6, multiplication(2,3)); 
    //LL_03_01
    TEST_ASSERT_EQUAL(5.0, multiplication(1.0,5.0)); 
}

void test_divide(void){
    //LL_04_01
    TEST_ASSERT_EQUAL(4, divide(16,4)); 
    //LL_04_02
    TEST_ASSERT_EQUAL(8.1, divide(24.3,3.0)); 
}


void test_add(void){
    //LL_01_01
    TEST_ASSERT_EQUAL(12, add(4,8)); 
    //LL_01_02
    TEST_ASSERT_EQUAL(12.4, add(4.2,8.2)); 
}


void test_subtraction(void){
    //LL_02_01
    TEST_ASSERT_EQUAL(-4,subtraction(4,8)); 
    //LL_02_02
    //dummy fail
    TEST_ASSERT_EQUAL(3, subtraction(5.2,1.2)); 
}


void test_squareroot(void){
    // LL_06_01 
    //wrong logic please check in squarerrot .c
    TEST_ASSERT_EQUAL(34, squareroot(9)); 
    //LL_06_02
    //dummy fail special case logic is not right
    TEST_ASSERT_EQUAL(35, squareroot(10.89)); 
}





int test_main(void){

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

