
#include <gtest/gtest.h>


class Example : public ::testing::TestWithParam<int> { };

TEST_P(Example, ExampleTest)
{
    int i = GetParam();
    ASSERT_TRUE(i == i);
}

INSTANTIATE_TEST_CASE_P(ExampleCategory, Example, ::testing::Range(0, 2));
