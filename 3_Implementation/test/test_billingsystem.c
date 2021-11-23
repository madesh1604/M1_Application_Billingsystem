#include "unity.h"
#include <function.h>

/* Modify these two lines according to the project */
#include <function.h>
#define PROJECT_NAME    "Billing System"

/* Prototypes for all the test functions */
void test_bill(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bill);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_bill(void) {
  TEST_ASSERT_EQUAL(1, open(productno.item));
  TEST_ASSERT_EQUAL(2, open(productname.item));
  TEST_ASSERT_EQUAL(3, open(quantity.item));
  TEST_ASSERT_EQUAL(4, open(price.item));
 
    /* Dummy fail*/
  // TEST_ASSERT_EQUAL(0, file does not exist);
  
}