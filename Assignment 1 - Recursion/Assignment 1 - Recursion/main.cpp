#include "Header.h"
#include "Palindrome.h"

using namespace std;

int main()
{
	Palindrome answer;
	string name = " ";
	int wordLength = 0;
	string newName = "";
	bool finalAnswer = false;

	char lowerCase = ' ';

	cout << finalAnswer << endl;

	cout << "Enter a word (exit to quit): ";
	getline(cin, name);

	//newName = tolower(name);
	wordLength = name.length();
	//isPalindrone.push_back(name);

	char* stringToArray = new char(wordLength);
	answer.convertStringToLower(name, stringToArray, wordLength);


	finalAnswer = answer.recursivePalindrome(stringToArray, 0, wordLength - 1);

	for (int i = 0; i < wordLength; i++)
		cout << stringToArray[i];

	cout << endl;

	cout << (int)stringToArray[0] << endl;

	/*finalAnswer = answer.recursivePalindrome(isPalindrone, 0, wordLength - 1);*/
	cout << "Is this a Palindrome? " << finalAnswer;
	if (finalAnswer == 1)
		cout << endl << "This is a Palindrome";

	return 0;
}