#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size){
	unsigned maxp = 0;
	for (int i = 0; i < size; i++) {
		// by symmerty; a[i] * a[j] == a[j] * a[i], so skip some
		for (int j = i; j < size; j++) {
			unsigned p = arr[i] * arr[j];
			if (p > maxp)
				maxp = p;
		}
	}
	return maxp;
}
