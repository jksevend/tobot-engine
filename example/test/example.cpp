#include "tobot_tooling.h"

using namespace Tobot::Tooling::Test;

TOBOT_TEST(example, first) {
    EXPECT_TRUE(1 < 5);
    ASSERT_TRUE(true);
    ASSERT_STREQUAL("test", "test");
}

TOBOT_TEST(example, second) {
    EXPECT_TRUE(true);
    ASSERT_TRUE(true);
    ASSERT_STREQUAL("test", "test");
}

int main(int argc, char const ** argv) {
    ConsoleTestReportGenerator generator;
    testRunner runner(&generator);
    Test firstTest(test_example_first, "first", "example");
    Test secondTest(test_example_second, "second", "example");
    runner.addTest(firstTest);
    runner.addTest(secondTest);
    runner.runTests();
    return 0;
}
