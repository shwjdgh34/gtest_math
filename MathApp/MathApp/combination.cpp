#include "combination.h"

int Combination(int n, int r) {

	if (n == r || r == 0) {
		return 1;
	}
	//nCr = (n-1)C(r-1) + (n-1)C(r)
	return Combination(n - 1, r - 1) + Combination(n - 1, r);
}