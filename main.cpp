#include <iostream>
#include <cmath>
#include "methods.h"
#include <string>

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



	switch (algoNum)
	{
	case 1:
		my_algo.stringMatch();
		break;
	
	case 2:

		break;
	
	case 3:
		std::cout << "Enter two string: " << std::endl;
		std::cin >> X;
		std::cin >> Y;
		std::cout << "The max length -> " <<
			my_algo.longestCommonSubsequence(X, Y, X.length(), Y.length()) << std::endl;
		break;

	case 4:
		std::cout << "Enter two string: " << std::endl;
		std::cin >> wag_x;
		std::cin >> wag_y;
		std::cout << "distance = " << my_algo.Wagner(wag_x,wag_y) << std::endl;
		break;

	case 5:

		break;

	case 6:
		my_algo.naive(pat, txt);
		break;

	case 7:
		my_algo.commonArrEll(a,b,c,n,m);
		break;

	case 8:
		for (int i = 0; i < SIZE; i++)
		{
			array[i] = i + 1;
			std::cout << array[i] << " ";
		}
		std::cout << "Enter number to find: ";
		std::cin >> key;

		index = my_algo.binarySearch(array, 0, SIZE, key);

		if (index >= 0)
			std::cout << "Ur number have index: " << index << "\n\n";
		else
			std::cout << "No number like that!\n\n";
		break;
	case 9:
		break;
	case 10:
		break;
	}
   
	return 0;
}