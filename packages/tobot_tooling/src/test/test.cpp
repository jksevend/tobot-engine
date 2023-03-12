#include "test.h"

using namespace Tobot::Tooling::Test;

Test::Test(void (*test_function)(TestState * state), char const * testName, char const * groupName) {
    this->test_function = test_function;
    this->testName = testName;
    this->groupName = groupName;
}

Test::~Test() {
}