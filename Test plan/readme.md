**TEST PLANS**

| **Test ID** | **Description** | **Expected I/P** | **Expected O/P** | **Type of test case** |
| ----------- | --------------- | ---------------- | ---------------- | --------------------- |
| **HL\_01** | Enter the numbers in the calculator | User is able to enter numbers in the calculator | It will show the correct numbers entered by the user | Requirement based |
| **HL\_02** | Selecting the operation | User is able to select the different switch cases | It will be able to display the correct operation chosen by the user | Requirement based |
| **HL\_03** | Accuracy | Number of digits allowed to enter in the calculator for any operation | It will be to display the accurate result | Requirement based |
| **HL\_04** | Check if the operations are working fine | User should be able to provide correct operants mentioned in the list. | It will be able to display correct result according to operation chosen | Requirement based |
 
 
 
 **TEST CASES**

| **ID**         | **DESCRIPTION**| **PRE-CONDITION** | **EXPECTED INPUT** | **EXPECTED OUTPUT** |**Type of sub test**|
| -------------- | -------------- | ----------------- | ------------------ | ------------------- |--------------------| 
| **LL\_01\_01** |  Testing for addition of two numbers | Two numbers are positive and integer numbers | 4,8 | 12 | Positive test case |
| **LL\_01\_02** | Testing for addition of two number | Two numbers are positive and float | 4.2,8.2 | 12.4 | Positive test case |
| **LL\_02\_01** | Testing for subtraction of two numbers| Two numbers are positive and integer numbers | 4,8 | -4 | Positive test case |
| **LL\_02\_02** | Testing for subtraction of two numbers | numbers are positive and float values | 5.2,1.2| 4.0 | 
| **LL\_03\_01** | Testing for multiplication of two numbers| Two numbers are positive and integer | 2,3 | 6 |
| **LL\_03\_02** | Testing for multiplication of two numbers| Two numbers are positive and float | 1.0,5.0| 5.0 |
| **LL\_04\_01** | Testing for division of two numbers| numbers are positive and integer | 16,4 | 4 |
| **LL\_04\_02** | Testing for division of two numbers| numbers are positive and float | 24.3,3.0 | 8.1 |
| **LL\_05\_01** | Testing for modulus| If number is positive and integer | 10,3 | 1 |
| **LL\_05\_02** | Testing for modulus| If number are positive and float | 10.2,2.2 | 0.6 |
| **LL\_06\_01** | Testing for square root| If number is positive and integer | 9 | 3 |
| **LL\_06\_02** | Testing for square root| If number is positive and float | 10.89 | 3.3 |
| **LL\_07\_01** | Testing for percentage| If number is positive and integer | 10,100 | 10 |
| **LL\_07\_02** | Testing for percentage| If number is positive and float | 2.5,10 | 2.5 |
| **LL\_08\_01** | Testing for cuberoot| If number is positive and integer | 27 | 3 |
| **LL\_08\_02** | Testing for cuberoot| If number is positive and float | 10.2 | Number is not a perfect cube |
| **LL\_07\_01** | Testing for exponential| If number is positive and integer | 1 | 2.718 |
| **LL\_07\_01** | Testing for exponential| If number is negative integer | -1 | 0.367 |
