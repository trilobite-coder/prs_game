/*
   Troglobyte AppHub:
   author: Michael Gene Brockus
   gmail: <michaelbrockus@gmail.com>
*/
#include "app.h"
#include <troglodyte/utest.h>
#include <stdlib.h>


/*
 >
 >  project setup teardown functions if needed
 >
*/
void setup(void)
{
    // TODO.
} // end of function setUp


void teardown(void)
{
    // TODO.
} // end of function tearDown


/*
 >
 > list of all the test cases for this project
 >
*/
static void test_01_simpleAssertTrue(void)
{
    //
    // we setup are test data here.
    int trueValue = 1, falseValue = 0;

    //
    // here we run the asserts
    trog_assert_its_true(trueValue);
    trog_assert_its_false(falseValue);
} // end of test case


static void test_02_simpleAssertNull(void)
{
    //
    // we setup are test data here.
    void *nullPtr = NULL;
   
    //
    // here we run the asserts
    trog_assert_its_nullptr(nullPtr);
} // end of test case


static void test_03_simpleAssertCompare(void)
{
    //
    // we setup are test data here.
    int dummy = 3;

    //
    // here we run the asserts
    trog_assert_equal_int(3, dummy);
} // end of test case


static void test_04_simpleAssertCall(void)
{
    //
    // we setup are test data here.
    const char *dummy = "Salutations and welcome to C";

    //
    // here we run the asserts
    trog_assert_equal_str(dummy, salutations());
} // end of test case


/*
 >
 > here main is used as the test runner
 >
*/
int main(void)
{
    //
    // setup and teardown can be set to nullptr.
    UTestRunner *runner = trog_utest_create_runner();

    trog_utest_set_setup(runner, setup);
    trog_utest_set_teardown(runner, teardown);

    //
    // list of test cases being ran in this
    // project.
    trog_utest_run(runner, test_01_simpleAssertTrue);
    trog_utest_run(runner, test_02_simpleAssertNull);
    trog_utest_run(runner, test_03_simpleAssertCompare);
    trog_utest_run(runner, test_04_simpleAssertCall);

    return trog_utest_end(runner);
} // end of function main
