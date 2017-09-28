#include "math.h"

namespace math {
	int sqr(int num) {
		return num*num;
	}
	
	int pow(int base, int pow) {
		int result = base;
		while (pow > 1) {
			result *= base;
			pow--;
		}
		return result;
	}
	
	bool isOdd(int num) {
		return num & 1;
	}
}