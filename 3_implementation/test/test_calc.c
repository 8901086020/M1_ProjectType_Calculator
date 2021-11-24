#include "unity.h"
#include "fun.h"

#define PROJECT_NAME    "Calculator"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_power(void);
void test_factorial(void);
void test_modulus(void);
void test_trigno(void);
void test_square(void);


void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, addition(10, 20));
  
 
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtraction(0, 3));
  
 
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiplication(1, 0));
  
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, division(1, 0));
  
 
}

void test_power(void) {
  TEST_ASSERT_EQUAL(1, pow(1, 5));
  
 
}

void test_factorial(void) {
  TEST_ASSERT_EQUAL(120, factorial(5));
  
 
}

void test_modulus(void) {
  TEST_ASSERT_EQUAL(0, modulus(4,2));
  
 
}

void test_trigno(void) {
  TEST_ASSERT_EQUAL(0.866,0.5,0.320, trigno(60));
  
 
}

void test_square(void) {
  TEST_ASSERT_EQUAL(25, square(5));
  
 
}


