#include "methods.h"
#include <string>
#include <iostream>

int RowsAlgo::binarySearch(int arr[], int left, int right, int key) {
	int midd = 0;
	while (1)
	{
		midd = (left + right) / 2;

		if (key < arr[midd])       
			right = midd - 1;      
		else if (key > arr[midd])  
			left = midd + 1;    
		else                       
			return midd;           

		if (left > right)
			return -1;
	}
}


void RowsAlgo::stringMatch() {
	char ch[] = "fdfdsfdfg";
	char ch1[] = "ds"; 
	char* pos = strstr(ch, ch1);
	if (pos != NULL) {
		std::cout << "1 string: " << ch << std::endl;
		std::cout << "2 string: " << ch1 << std::endl;
		std::cout << "First match started at index -> " << (int)(pos - ch) << std::endl;
	}
	else
		std::cout << "not found\n";
}

int RowsAlgo::longestCommonSubsequence(std::string X, std::string Y, int m, int n) {
	
	if (m == 0 || n == 0) {
		return 0;
	}


	if (X[m - 1] == Y[n - 1]) {
		return longestCommonSubsequence(X, Y, m - 1, n - 1) + 1;
	}

	
	return std::max(longestCommonSubsequence(X, Y, m, n - 1), longestCommonSubsequence(X, Y, m - 1, n));
}


int RowsAlgo::Wagner(std::string str1, std::string str2) {
	int d[100][100];
	int i, j, str1_len, str2_len, temp, tracker;
	str1_len = str1.length();
	str2_len = str2.length();
	for (i = 0; i <= str1_len; i++)
		d[0][i] = i;
	for (j = 0; j <= str2_len; j++)
		d[j][0] = j;
	for (j = 1; j <= str1_len; j++) {
		for (i = 1; i <= str2_len; i++) {
			if (str1[i - 1] == str2[j - 1]) {
				tracker = 0;
			}
			else {
				tracker = 1;
			}
			temp = std::min((d[i - 1][j] + 1), (d[i][j - 1] + 1));
			d[i][j] = std::min(temp, (d[i - 1][j - 1] + tracker));
		}
	}
	return d[str2_len][str1_len];
}

void RowsAlgo::naive(char* pat, char* txt) {
	int M = strlen(pat);
	int N = strlen(txt);

	for (int i = 0; i <= N - M; i++) {
		int j;

		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == M)  
			std::cout << "match found at index -> "
			<< i << std::endl;
	}
}

void RowsAlgo::commonArrEl(int a[], int b[], int c[], int n, int m) {
		int k = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) { 
					c[k] = a[i];
					k++; 
				}
			}
		}

		std::cout << "array of common -> ";
		for (int i = 0; i < k; i++)
			std::cout << c[i] << " | ";
}

int RowsAlgo::interpolation(int* arr, int size, int key) {
	

		if (size < 0 || !arr)          
			return -1;                


		unsigned long long low = 0;
		unsigned long long high = size - 1;
		unsigned long long mid;


		while (!(arr[high] == arr[low] || key < arr[low] || arr[high] < key))
		{
			mid = low + (key - arr[low]) * ((high - low) / (arr[high] - arr[low]));

			if (arr[mid] < key)
				low = mid + 1;

			else if (key < arr[mid])
				high = mid - 1;

			else return mid;
		}

		if (key == arr[low])
			return low;

		else return -1;

};

int RowsAlgo::lis(int arr[], int n) {
	int* lis, i, j, max = 0;
	lis = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		lis[i] = 1;

	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;

	for (i = 0; i < n; i++)
		if (max < lis[i])
			max = lis[i];

	free(lis);

	return max;
};
