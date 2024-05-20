#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "calc.cpp"

TEST(calc, calcSum) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcGop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcZegop) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcMinus) {
	Calc calc;
	EXPECT_EQ(1, calc.getMinus(3,2));
}

TEST(calc, calcDivide) {
	EXPECT_EQ(1, 1);
}

TEST(calc, calcSumSum) {
	EXPECT_EQ(1, 1);
}