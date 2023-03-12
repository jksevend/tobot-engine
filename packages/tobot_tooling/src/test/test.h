#pragma once

#include "test_state.h"

namespace Tobot::Tooling::Test {
    class Test {

        public:
            char const * testName;
            char const * groupName;
            void (*test_function)(TestState * state);
            Test(void (*test_function)(TestState * state), char const * testName, char const * groupName);
            ~Test();
    };

} // namespace Tobot::Tooling::Test