#include <stdexcept>
#include <iostream>

class Calc {
public:
	int getSum(int a, int b) {
		return 0;
	}
	int getGop(int a, int b) {
		return 0;
	}
	int getZegop(int a, int b) {
		return 0;
	}
	int getMinus(int a, int b) {
		return 0;
	}
	int getDivide(int a, int b) {
		if (!b) throw std::invalid_argument("b cannot be zero");
		return a / b;
	}
	int getSumSum(int a, int b) {
		return 0;
	}
};