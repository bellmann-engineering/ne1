#include <gtest/gtest.h>
#include "../sum.h"

TEST(SumTest, PositiveValues) {
    EXPECT_EQ(sum(2, 3), 5);
    EXPECT_EQ(sum(10, 5), 15);
}

TEST(SumTest, NegativeValues) {
    EXPECT_EQ(sum(-2, -3), -5);
    EXPECT_EQ(sum(-5, +3), -2);
}

TEST(SumTest, ZeroValues) {
    EXPECT_EQ(sum(0, 0), 0);
}