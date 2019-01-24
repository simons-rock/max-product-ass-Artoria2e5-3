#include "max_product.h"

// RULE: maxpair(int[] xs) -> (int a, int b) where a, b \in xs and a >= b >= xs \ {a,b}
int max_pairwise_product_fast(int *arr, int size){
	int max_a = 0, max_b = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max_a) {
			max_a = arr[i];
			continue;
		}
		
		if (arr[i] > max_b) {
			max_a = arr[i];
			continue;
		}
	}
	
	return max_a * max_b;
}

