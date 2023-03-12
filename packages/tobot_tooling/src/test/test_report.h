#pragma once

#include "test.h"
#include "test_state.h"

namespace Tobot::Tooling::Test {
    class TestReport {
        public:
            Test * corresponding_test;
            TestState * state;
            TestReport(Test * corresponding_test);
            ~TestReport();
    };

} // namespace Tobot::Tooling::Test
