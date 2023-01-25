/******************************************************************************
* AUTHOR : Saul Moreno
* ASSIGNMENT#1 : Recursion
* CLASS : CS1D
* SECTION : MW 2:00pm
* DUE DATE : 1/29/23
******************************************************************************/
#include "Header.h"
#include <string>
#include <vector>
#pragma once
class Palindrome
{
public:
	Palindrome();
	~Palindrome();
	bool recursivePalindrome(char arrayTolower[], int start, int end);
	void convertStringToLower(std::string word, char arrayTolower[], int size);
	void convertStringToArray(std::string word, int size);

private:
	std::string name;
	bool finalDecision;
	std::vector<char> asciiCompare;

	std::string compareValue;
	std::string compareSecondValue;
	char secondCompare;
	char secondSecondCompare;
	int stringSize;
	int* lowerCaseAnswer;


};

