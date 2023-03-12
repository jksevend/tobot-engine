#pragma once

#include "test_report_generator.h"

#include <queue>

namespace Tobot::Tooling::Test {

    class testRunner {
        private:
            std::queue<Test> testQueue;
            TestReportGenerator * generator;

        public:
            testRunner(TestReportGenerator * generator);
            ~testRunner();
            void addTest(Test test);
            void runTests();
    };

} // namespace Tobot::Tooling::Test
