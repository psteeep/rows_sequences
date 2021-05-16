#pragma once
#include <string>

class RowsAlgo {
private:


public:

	int binarySearch(int arr[], int left, int right, int key); // 8 no!!!
	
	void stringMatch(); // 1 not correct
	
	int fuzzySearch(); // 2 no!!!

	int longestCommonSubsequence(std::string X, std::string Y, int m, int n); // 3 done!!!
	
	int Wagner(); // 4 done!!!
	
	void naive(char* pat, char* txt); //6 done!!!
	
	void commonArrEll(int a[], int b[], int c[], int n, int m); //7  need fix 
	
	int interpolation(); //9 
	
	int binarySearch_nearest(); //10
};