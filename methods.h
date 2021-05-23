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
	
	void commonArrEll(int a[], int b[], int c[], int n, int m); //7  done!!! ready
	
	int interpolation(); //9 
	
	int binarySearch_nearest(); //10
};