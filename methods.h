#pragma once
#include <string>

class RowsAlgo {
private:


public:

	int binarySearch(int arr[], int left, int right, int key); //8 done!!! ready
	
	void stringMatch(); // 1 done!!! ready
	
	int fuzzySearch(); // 2 no!!!

	int longestCommonSubsequence(std::string X, std::string Y, int m, int n); // 3 done!!! ready
	
	int Wagner(std::string str1, std::string str2); // 4 done!!! ready
	
	void naive(char* pat, char* txt); //6 done!!! ready
	
	void commonArrEl(int a[], int b[], int c[], int n, int m); //7  done!!! ready
	
	int interpolation(int* arr, int size, int key); //9 done!!! ready
	
	int binarySearch_nearest(); //10 no!!
	
	int lis(int arr[], int n); // 5 done!!! ready
}; 