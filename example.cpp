
#include <gtest/gtest.h>


int foo_add(int n, int m);
int foo_minus(int n, int m);

class Example : public ::testing::TestWithParam<int> { };

TEST_P(Example, ExampleTest1)
{
    int i = GetParam();
    ASSERT_TRUE(foo_add(i, 1) == i + 1);
}

TEST_P(Example, ExampleTest2)
{
    int i = GetParam();
    ASSERT_TRUE(foo_minus(i,1) == i - 1);
}


INSTANTIATE_TEST_CASE_P(ExampleCategory, Example, ::testing::Range(0, 2));
