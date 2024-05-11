#include "L298N.hpp"
#include "MoveForward.hpp"
#include <unity.h>


void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void simple_test(void)
{
    L298N l298;
    MoveForward moveForward(&l298);

    moveForward.executeAction(200);
    delay(2000);

    TEST_ASSERT_EQUAL(33, 33);
}

void setup()
{
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(simple_test);

    delay(2000);
    UNITY_END();
}

void loop()
{
    delay(1000);
}