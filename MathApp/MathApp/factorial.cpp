#include "factorial.h"

int Factorial(int x) {
	if (x == 0) return 1;
	return x * Factorial(x - 1);
}