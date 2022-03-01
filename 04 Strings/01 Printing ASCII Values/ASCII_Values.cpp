#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*

	ASCII Values :

	'0' to '9' : 48 - 57

	'A' to 'Z' : 65 - 90

	'a' to 'z' : 97 - 122

	*/
	char num = '0';

	for (int i = 0; i < 10; i++)
	{
		cout << num << " " << int(num) << endl;
		num++;
	}

	char cap = 'A';

	for (int i = 0; i < 26; i++)
	{
		cout << cap << " " << int(cap) << endl;
		cap++;
	}

	char alpha = 'a';

	for (int i = 0; i < 26; i++)
	{
		cout << alpha << " " << int(alpha) << endl;
		alpha++;
	}
	return 0;
}