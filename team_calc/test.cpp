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
	Calc calc;
	EXPECT_EQ(6, calc.getGop(2, 3));
}

TEST(calc, calcZegop) {
	Calc calc;
	EXPECT_EQ(4, calc.getZegop(2));
}

TEST(calc, calcMinus) {
	Calc calc;
	EXPECT_EQ(1, calc.getMinus(3,2));
}

TEST(calc, calcDivide) {
	Calc calc;
	EXPECT_EQ(calc.getDivide(10, 2), 5);
	EXPECT_EQ(calc.getDivide(1, 1), 1);
	EXPECT_EQ(calc.getDivide(4, 2), 2);
	EXPECT_THROW(calc.getDivide(4, 0), std::invalid_argument);
	
}

TEST(calc, calcSumSum) {
	Calc calc;

	EXPECT_EQ(6, calc.getSumSum(1, 2, 3));
	EXPECT_EQ(-6, calc.getSumSum(-1, -2, -3));
	EXPECT_EQ(4, calc.getSumSum(-1, 2, 3));
	EXPECT_EQ(0, calc.getSumSum(1, 2, -3));
}