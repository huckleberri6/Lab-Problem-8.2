
#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main()
{
	string s = "The quick brown fox jumped over the lazy dog";
	int numWords = countWords(s);
	cout << numWords;
}

int countWords(string str)
{
	int words = 0;
	if (str == "")
		return words;
	else
		words++;

	for (int i = 0; i < str.length(); i++)
	{
		bool space = false;
		bool firstLetter = false;
		if (str.substr(i, 1) == " ")
			space = true;
		while (space == true)
		{
			i++;
			if (str.substr(i, 1) == " ")
				space = true;
			else
			{
				firstLetter = true;
				break;
			}
		}
		if (firstLetter)
			words++;
	}
	return words;
}