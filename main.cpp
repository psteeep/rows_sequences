#include <iostream>
#include <cmath>
#include "methods.h"

int main() {
	
	RowsAlgo my_algo;


    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = my_algo.binarySearch(arr, 0, n - 1, x);
    (result == -1) ? std::cout << "Element is not present in array"
        : std::cout << "Element is present at index " << result;

	return 0;
}