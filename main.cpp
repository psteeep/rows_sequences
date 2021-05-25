#include <iostream>
#include <cmath>
#include "methods.h"
#include <string>

void PrintArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " | ";

	std::cout << std::endl;
};

int main() {
	
	RowsAlgo my_algo;

	//chose what u wanna :)
	int algoNum;
	std::cout << "Enter wich algo u wish (1-10) -> ";
	std::cin >> algoNum;



	//std::string X = "ABCBDAB", Y = "BDCABA"; // for case 3
	std::string X, Y;

	std::string wag_x, wag_y; // for case 4

	const int SIZE = 12;    //
	int array[SIZE] = {};	// for case 8
	int key = 0;			//
	int index = 0;			//				


	char txt[] = "AABAACAADAABAAABAA";
	char pat[] = "AABA";                  // for case 6


	int a[] = {1,2,4,6,9};
	int b[] = {23,2,132,6,12};  // for case 7
	int c[1000];
	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);


	int arr[] = {10, 12, 13, 16, 18, 19, 20
		, 21, 22, 23, 24, 33, 35, 42, 47};    // for case 9
	int size = sizeof(arr) / sizeof(arr[0]);
	int key9;


	int arr5[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
	//int size5 = sizeof(arr) / sizeof(arr[0]);           // for case 5
	int size5 = 8;

	switch (algoNum)
	{
	case 1:
		std::cout << "\n\t\t***** Find the exact substring in a string *****\n\n";
		my_algo.stringMatch();
		break;
	
	case 2:
		std::cout << "\n\t\t***** Fuzzy search *****\n\n";
		break;
	
	case 3:
		std::cout << "\n\t\t***** Common subsequence *****\n\n";
		std::cout << "Enter two string: " << std::endl;
		std::cin >> X;
		std::cin >> Y;
		std::cout << "The max length -> " <<
			my_algo.longestCommonSubsequence(X, Y, X.length(), Y.length()) << std::endl;
		break;

	case 4:
		std::cout << "\n\t\t***** General subsequence (Wagner) *****\n\n";
		std::cout << "Enter two string: " << std::endl;
		std::cin >> wag_x;
		std::cin >> wag_y;
		std::cout << "distance = " << my_algo.Wagner(wag_x,wag_y) << std::endl;
		break;

	case 5:
		std::cout << "\n\t\t***** Longest incremental sequence *****\n\n";
		std::cout << "Array - ";
		for (int i=0; i < size5; i++)
			std::cout << arr5[i] << " | ";
		std::cout << std::endl;
		std::cout << "Length of LIS is -> " << my_algo.lis(arr5, size5) << std::endl;
		break;

	case 6:
		std::cout << "\n\t\t***** Naive algo *****\n\n";
		std::cout << txt << std::endl;
		std::cout << pat << std::endl;
		my_algo.naive(pat, txt);
		break;

	case 7:
		std::cout << "\n\t\t***** Common array elements *****\n\n";
		std::cout << "first arr:  ";
		PrintArr(a, n);
		std::cout << "second arr:  ";
		PrintArr(b, m);
		my_algo.commonArrEl(a,b,c,n,m);
		std::cout << "\n\n";
		break;

	case 8:
		std::cout << "\n\t\t***** Binary search *****\n\n";
		for (int i = 0; i < SIZE; i++)
		{
			array[i] = i + 1;
			std::cout << array[i] << " | ";
		}

		std::cout << std::endl;
		std::cout << "Enter number to find: ";
		std::cin >> key;

		index = my_algo.binarySearch(array, 0, SIZE, key);

		if (index >= 0)
			std::cout << "Ur number have index: " << index << "\n\n";
		else
			std::cout << "No number like that!\n\n";
		break;
	case 9:
		std::cout << "\n\t\t***** Interpolation search *****\n\n";
		std::cout << "Array:  ";
		PrintArr(arr, size);
		std::cout << "Enter number to find: ";
		std::cin >> key9;
		std::cout << "Ur number have index: " << my_algo.interpolation(arr, size, key9) << std::endl;

		break;
	case 10:
		std::cout << "\n\t\t*****fff*****\n\n";

		break;
	}
   
	return 0;
}