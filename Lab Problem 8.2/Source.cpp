#include <iostream>
using namespace std;

int countWords(string str);

int main(void)
{
	cout << countWords("Barry B. Benson should not be able to fly");
}

int countWords(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str.substr(i,2).compare(str.substr(i,1)+" ") == 0)
			count++;
	}
	if (count >= 1)
		return count+1;
	else
		return 1;
}