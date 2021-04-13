#include <iostream>


using namespace std;


int getNumberOfVowels(const char list[]);
int getNumberOfConsonants(const char list[]);
void StringToLowercase(char list[]);
void StringToUppercase(char list[]);

int main()
{

	char cString[100] = "Hello, My name is Hak. How are you doing? I'm good, but nowadays, a little tired.";
	cout << "C-String is \"" << cString << "\" and size is " << strlen(cString) << endl << endl;
	cout << "The number of vowels is " << getNumberOfVowels(cString) << endl << endl;
	cout << "The number of consonants is " << getNumberOfConsonants(cString) << endl << endl;
	StringToLowercase(cString);
	cout << "After calling StringToLowercase() --> \"" << cString << "\"\n\n";
	StringToUppercase(cString);
	cout << "After calling StringToUppercase() --> \"" << cString << "\"\n\n";



	return 0;
}

int getNumberOfVowels(const char list[])
{
	const int size = strlen(list);
	int numOfVowels = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i] == 'a' || list[i] == 'A' || list[i] == 'e' || list[i] == 'E' ||
			list[i] == 'i' || list[i] == 'I' || list[i] == 'o' || list[i] == 'O' || list[i] == 'u' || list[i] == 'U')
		{
			numOfVowels++;
		}
	}
	return numOfVowels;
}

int getNumberOfConsonants(const char list[])
{
	const int size = strlen(list);
	int numOfConsonants = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i] == 'a' || list[i] == 'A' || list[i] == 'e' || list[i] == 'E' ||
			list[i] == 'i' || list[i] == 'I' || list[i] == 'o' || list[i] == 'O' || list[i] == 'u' || list[i] == 'U')
		{

		}
		else
		{
			numOfConsonants++;
		}
	}
	return numOfConsonants;
}

void StringToLowercase(char list[])
{
	const int size = strlen(list);
	int numOfConsonants = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i] >= 65 && list[i] <= 90)
		{
			list[i] += 32;
		}
	}
}

void StringToUppercase(char list[])
{
	const int size = strlen(list);
	int numOfConsonants = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i] >= 97 && list[i] <= 122)
		{
			list[i] -= 32;
		}
	}
}
