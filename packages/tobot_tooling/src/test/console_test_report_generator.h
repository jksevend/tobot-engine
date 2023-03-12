#pragma once

#include "test_report_generator.h"

#include <mutex>

namespace Tobot::Tooling::Test {
    class ConsoleTestReportGenerator : public Tobot::Tooling::Test::TestReportGenerator {
        private:
            size_t passedTestCounter = 0;
            size_t executedTestCounter = 0;
            /// @brief for thread safety
            std::mutex log_mutex;

        public:
            ConsoleTestReportGenerator();
            ~ConsoleTestReportGenerator();
            virtual void handle_test_report(TestReport report, size_t totalNumberOfTests) override;
            virtual void handle_pre_test_report(Test test, size_t totalNumberOfTests) override;
    };

} // namespace Tobot::Tooling::Test