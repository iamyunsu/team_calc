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
	EXPECT_EQ(calc.getDivide(10, 2), 5);
	EXPECT_EQ(calc.getDivide(1, 1), 1);
	EXPECT_EQ(calc.getDivide(4, 2), 2);
	EXPECT_THROW(calc.getDivide(4, 0), std::invalid_argument);
	
}

TEST(calc, calcSumSum) {
	EXPECT_EQ(1, 1);
}