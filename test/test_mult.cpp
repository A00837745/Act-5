#include <gtest/gtest.h>
#include "mult.h"

TEST(MultTest, HandlesPositiveInput)
{
int result = mult(3, 4);

EXPECT_EQ(result, 12);
}