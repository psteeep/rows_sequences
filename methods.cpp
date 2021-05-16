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
	char ch[] = "fdsfdsf";// где ищем
	char ch1[] = "ds"; // что ищем
	char* pos = strstr(ch, ch1);
	if (pos != NULL)
		std::cout << (int)(pos - ch) << std::endl;
	else
		std::cout << "not found\n";
}

int RowsAlgo::longestCommonSubsequence(std::string X, std::string Y, int m, int n) {
	// return if the end of either sequence is reached
	if (m == 0 || n == 0) {
		return 0;
	}

	// if the last character of `X` and `Y` matches
	if (X[m - 1] == Y[n - 1]) {
		return longestCommonSubsequence(X, Y, m - 1, n - 1) + 1;
	}

	// otherwise, if the last character of `X` and `Y` don't match
	return std::max(longestCommonSubsequence(X, Y, m, n - 1), longestCommonSubsequence(X, Y, m - 1, n));
}


int RowsAlgo::Wagner() {
	int d[100][100];
	int i, j, str1_len, str2_len, temp, tracker;
	std::string str1 = "Support";
	std::string str2 = "Suppose";
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
			std::cout << "Pattern found at index "
			<< i << std::endl;
	}
}

void RowsAlgo::commonArrEll(int a[], int b[], int c[], int n, int m) {
		int k = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i] == b[j]) { // так выводит массив c[i] с общими элементами должен без мусора
					c[i] = a[i];
					k++; // счетчик совпадений
				}
			}
			for (int i = 0; i < k; i++)
				std::cout << c[i] << " "; // как правильно вывести c[i]?¬от так правильно
		}
}

//int RowsAlgo::interpolation() {};

//int RowsAlgo::binarySearch_nearest() {};