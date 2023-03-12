#pragma once

#include "test_report.h"

namespace Tobot::Tooling::Test {
    class TestReportGenerator {
        private:
        public:
            TestReportGenerator();
            virtual ~TestReportGenerator();
            virtual void handle_test_report(TestReport report, size_t totalNumberOfTests) = 0;
            virtual void handle_pre_test_report(Test test, size_t totalNumberOfTests) = 0;
    };

} // namespace Tobot::Tooling::Test
