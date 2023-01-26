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

/******************************************************************************
*FUNCTION - recursivePalindrome
*______________________________________________________________________________
*This Function receives the balance array, the size of the array and the
*menu option that the user has selected
*______________________________________________________________________________
*PRE-CONDITIONS
*	  arrayTolower[]:  Has to be previously defined
*	  start:           Has to be previously defined
*	  end:             Has to be previously defined
*
*POST-CONDITIONS
*	   This function will return value to main.
*
*******************************************************************************/
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

/******************************************************************************
*FUNCTION - convertStringToLower
*______________________________________________________________________________
*This Function take the string and turn any capital letter to a lower case
*______________________________________________________________________________
*PRE-CONDITIONS
*	  word:           Has to be previously defined
*	  arrayToLower[]: Has to be previously defined
*	  size:           Has to be previously defined
*
*POST-CONDITIONS
*	   This function will return value to main.
*
*******************************************************************************/
void Palindrome::convertStringToLower(std::string word, char arrayTolower[], int size) {
	char lowerCase = ' '; //IN - variable to store the letter that is now lower case

	for (int wordSize = 0; wordSize < size; wordSize++) {
		lowerCase = tolower(word[wordSize]);
		arrayTolower[wordSize] = lowerCase;

	}
}

/******************************************************************************
*FUNCTION - convertStringToArray
*______________________________________________________________________________
*This Function receives the string from the user input and converts
* it to an array.
*______________________________________________________________________________
*PRE-CONDITIONS
*	  word:  Has to be previously defined
*	  size:    Has to be previously defined
*
*POST-CONDITIONS
*	   This function will save the string into an new array.
*
*******************************************************************************/
//void Palindrome::convertStringToArray(std::string word, int size) 
//{
//	stringSize = size;  //IN - Holds the value of the string size
//	char* stringToArray = new char(stringSize);
//
//	for (int start = 0; start < size; start++) {
//		stringToArray[start] = word[start];
//	}
//
//	for (int start = 0; start < size; start++) {
//		std::cout << stringToArray[start];
//	}
//}
