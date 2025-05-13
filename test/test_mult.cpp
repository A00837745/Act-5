#include <gtest/gtest.h>
#include "mult.h"

TEST(MultTest, HandlesPositiveInput)
{
int result = mult(9, 3);

EXPECT_EQ(result, 3);
}

TEST(MultTest, HandlesZeroInput)
{
int result = mult(9, 0);

EXPECT_EQ(result, 0);
}