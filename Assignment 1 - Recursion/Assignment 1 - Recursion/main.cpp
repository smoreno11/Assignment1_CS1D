/******************************************************************************
* AUTHOR : Saul Moreno
* ASSIGNMENT#1 : Recursion
* CLASS : CS1D
* SECTION : MW 2:00pm
* DUE DATE : 1/29/23
******************************************************************************/
#include "Header.h"
#include "Palindrome.h"

using namespace std;

int main()
{
	Palindrome answer;        //This is an instance of the Palidrome class
	string name = " ";        //IN - Stores the user input 
	int wordLength = 0;       //CALC - Used to find the length of the word
	//string newName = "";      //
	bool finalAnswer = false; // OUT - Determines if the word is a palindrome

	//char lowerCase = ' ';

	cout << "/**************************************************************************\n"
		 << "* Program Description\n"
		 << "---------------------------------------------------------------------------\n"
		 << "This program takes a work and uses a recursive function to see if the\n"
		 << "word inputed is a Palindrom. It ignores whitespaces, capital letter,"
		 << "and puntuation.\n";

	cout << "\n\n\nOUTPUT\n"
		 << "---------------------------------------------------------------------------\n"
		 << "Outputs the word entered and whether it is a palindrome or not.\n"
		 << "**************************************************************************/\n\n\n\n\n";
	cout << "Enter a word (exit to quit): ";
	getline(cin, name);


	wordLength = name.length();
	
	char* stringToArray = new char(wordLength);
	answer.convertStringToLower(name, stringToArray, wordLength);


	finalAnswer = answer.recursivePalindrome(stringToArray, 0, wordLength - 1);

	if (finalAnswer == 1)
	{
		//cout << endl;
		for (int i = 0; i < wordLength; i++)
			cout << stringToArray[i];
		cout << " is a Palindrome";
	}
	else
	{
		for (int i = 0; i < wordLength; i++)
			cout << stringToArray[i];
		cout << " is not a Palindrome";
	}

	return 0;
}