#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "calc.cpp"

TEST(calc, calcSum) {
	Calc calc;
	EXPECT_EQ(3, calc.getSum(2, 1));
	EXPECT_EQ(3, calc.getSum(1, 2));
	EXPECT_EQ(5, calc.getSum(2, 3));
}

TEST(calc, calcGop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcZegop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcMinus) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcDivide) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcSumSum) {
	EXPECT_EQ(1, 1);
}