/******************************************************************************
* AUTHOR : Saul Moreno
* ASSIGNMENT#1 : Recursion
* CLASS : CS1D
* SECTION : MW 2:00pm
* DUE DATE : 1/29/23
******************************************************************************/
#include "Palindrome.h"

Palindrome::Palindrome() {
	secondCompare = ' ';
	secondSecondCompare = ' ';
}


Palindrome::~Palindrome() {


}

/******************************************************************************
*FUNCTION - recursivePalindrome
*______________________________________________________________________________
*This Function receives the lower case array, uses recursion to find out 
* if the word is a palindrom while ignore anything that is not a lower 
* case letter
*______________________________________________________________________________
*PRE-CONDITIONS
*	  arrayTolower[]:  Has to be previously defined
*	  start:           Has to be previously defined
*	  end:             Has to be previously defined
*
*POST-CONDITIONS
*	   This function will return a true or false value to main.
*
*******************************************************************************/
bool Palindrome::recursivePalindrome(char arrayTolower[], int start, int end) {

	if (start == end) {
		return true;
	}
	
	if (start > end) {
		return false;
	}

	secondCompare = arrayTolower[start];
	secondSecondCompare = arrayTolower[end];

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


