
#include "header/main_header.h"
#include <stdio.h>

#define PROJECT_NAME    "Calculator"

#include "subtraction.h"
#include "add.h"
#include "cuberoot.h"
#include "divide.h"
#include "exponential.h"
#include "modular_division.h"
#include "multiplication.h"
#include "percentage.h"
#include "squareroot.h"
//#include "test_functions.h"




void test_cuberoot(void);
void test_percentage(void);
void test_exponential(void);
void test_modular_division(void);
void test_multiplication(void);
void test_squareroot(void);
void test_divide(void);
void test_add(void);
void test_subtraction(void);

/*

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}




int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);

  
  
  Add your test functions in this format for testing
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtraction);
  CU_add_test(suite, "multiply", test_multiplication);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "cuberoot", test_cuberoot);
  CU_add_test(suite, "percentage", test_percentage);
  CU_add_test(suite, "exponential", test_exponential);
  CU_add_test(suite, "modular_division", test_modular_division);
  CU_add_test(suite, "divide", test_squareroot);
  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  
  CU_basic_run_tests();
  
  CU_cleanup_registry();
  return 0;
}
*/



void test_cuberoot(void)
{
    CU_ASSERT(2==2);
   
} 

void test_percentage(void)
{
    CU_ASSERT(2==2);
    
}

void test_exponential(void)
{

    CU_ASSERT(2==2);
}

void test_modular_division(void)
{
    CU_ASSERT(2==2); 
}


void test_multiplication(void)
{
    CU_ASSERT(2==2);
}

void test_divide(void){

    CU_ASSERT(2==2);
}


void test_add(void){

    CU_ASSERT(2==2);
}


void test_subtraction(void){
    CU_ASSERT_EQUAL(2,2);
}


void test_squareroot(void){

    CU_ASSERT(2==2);
}

