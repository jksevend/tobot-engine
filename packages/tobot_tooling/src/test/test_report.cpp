#include "test_report.h"

using namespace Tobot::Tooling::Test;

TestReport::TestReport(Test * corresponding_test) {
    this->state = new (TestState);
    this->corresponding_test = corresponding_test;
    this->corresponding_test->test_function(state);
}

TestReport::~TestReport() {
}