#include "test_runner.h"

#include "test_report.h"

#include "stdio.h"

using namespace Tobot::Tooling::Test;

testRunner::testRunner(TestReportGenerator * generator) {
    this->generator = generator;
}

testRunner::~testRunner() {
}

void testRunner::addTest(Test test) {
    this->testQueue.push(test);
}
void testRunner::runTests() {
    size_t testCount = this->testQueue.size();
    while (!this->testQueue.empty()) {
        this->generator->handle_pre_test_report(this->testQueue.front(), testCount);
        Tobot::Tooling::Test::TestReport testReport(&this->testQueue.front());
        this->generator->handle_test_report(testReport, testCount);
        this->testQueue.pop();
    }
}