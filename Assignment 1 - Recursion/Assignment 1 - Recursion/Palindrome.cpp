/******************************************************************************
* AUTHOR : Saul Moreno
* ASSIGNMENT#1 : Recursion
* CLASS : CS1D
* SECTION : MW 2:00pm
* DUE DATE : 1/29/23
******************************************************************************/
#include "Palindrome.h"

Palindrome::Palindrome() {
	stringSize = 0;

	finalDecision = true;
	compareValue = " ";
	compareSecondValue = " ";
	stringSize = 0;
	secondCompare = ' ';
	secondSecondCompare = ' ';
}


Palindrome::~Palindrome() {


}

bool Palindrome::recursivePalindrome(char arrayTolower[], int start, int end) {
	//For this recursive function you need to pass the starting point and the 
	//ending point - 1 to compare.
	/* To do:
	*  ignore white spaces and stay within ASCII values
	*/
	if (start == end) {
		return true;
	}
	
	if (start > end) {
		//std::cout << "This should be false ";
		//std::cout << start << " " << end << std::endl;
		return false;

	}

	//This will have to be a while since there might be multiple spaces and we can conbine them
	// into two seperate whiles. One for the start and one for the end
	secondCompare = arrayTolower[start];
	secondSecondCompare = arrayTolower[end];

	/********************************************************************************************************
		The if statement is the key to solving this recursino. You just need to create a different function that
		will ignore everything that is not a letter
	********************************************************************************************************************************/

	while ((int)secondCompare == 32 || (122 >= (int)secondCompare && (int)secondCompare <= 97)) {
		start++;
		secondCompare = arrayTolower[start];
	}

	while ((int)secondSecondCompare == 32 || 122 >= (int)secondSecondCompare && (int)secondSecondCompare <= 97) {
		end--;
		arrayTolower[end];
		secondSecondCompare = arrayTolower[end];
	}
	if (secondCompare == secondSecondCompare)
	{
		return true;
	}

	if (arrayTolower[start] == arrayTolower[end])
		return recursivePalindrome(arrayTolower, start + 1, end - 1);
	else
	{
		return false;
	}
}

void Palindrome::convertStringToLower(std::string word, char arrayTolower[], int size) {
	char lowerCase = ' ';

	for (int wordSize = 0; wordSize < size; wordSize++) {
		lowerCase = tolower(word[wordSize]);
		arrayTolower[wordSize] = lowerCase;

	}
}

void Palindrome::convertStringToArray(std::string word, int size) {
	stringSize = size;
	char* stringToArray = new char(stringSize);

	for (int start = 0; start < size; start++) {
		stringToArray[start] = word[start];
	}

	for (int start = 0; start < size; start++) {
		std::cout << stringToArray[start];
	}
}
