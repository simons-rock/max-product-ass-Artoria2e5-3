#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size){
	unsigned maxp = 0;
	for (int i = 0; i < size; i++) {
		// by symmerty; a[i] * a[j] == a[j] * a[i], so skip some
		// note: skip self too
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j])
				continue;
			unsigned p = arr[i] * arr[j];
			if (p > maxp)
				maxp = p;
		}
	}
	return maxp;
}
