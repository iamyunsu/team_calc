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
	EXPECT_EQ(1, 1);
}

TEST(calc, calcDivide) {
	Calc calc;
	EXPECT_EQ(5, calc.getDivide(10, 2));
	EXPECT_EQ(1, calc.getDivide(1, 1));
	EXPECT_EQ(2, calc.getDivide(4, 2));
}

TEST(calc, calcSumSum) {
	EXPECT_EQ(1, 1);
}