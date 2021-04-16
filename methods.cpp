#include "methods.h"


int RowsAlgo::binarySearch(int arr[], int len, int r, int x) {

	if (len >= r) {
		int mid = len + (r - len) / 2;

		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return binarySearch(arr, len, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}


