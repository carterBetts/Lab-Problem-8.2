#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main(void)
{
	string input;
	while (true)
	{
		cout << "Enter a sentence or press \'Q\' to exit" << endl;
		getline(cin, input);
		if (input.compare("Q") == 0)
			return 0;
		cout << "Words: " << countWords(input) << endl;
	}
}

int countWords(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if ((str.substr(i,2).compare(str.substr(i,1)+" ") == 0) && (str.substr(i,1).compare(" ") !=0))
			count++;
	}
	if (count >= 1)
		return count+1;
	else
		return 1;
}