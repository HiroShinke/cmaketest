
#include <gtest/gtest.h>


class Example : public ::testing::TestWithParam<int> { };

TEST_P(Example, ExampleTest)
{
    int i = GetParam();
    ASSERT_TRUE(1 == 1);
}

INSTANTIATE_TEST_CASE_P(ExampleCategory, Example, ::testing::Range(0, 0));
