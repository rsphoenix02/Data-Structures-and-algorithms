#include <iostream>
#include <string>
using namespace std;

int main()
{
	// in-built class named string in header file

	string s = "WebDeveloper"; // s is the object of string class

	// 1.length function
	cout << s.length() << endl;

	// 2.appending strings
	s = s + "dev";
	cout << s << endl;

	// 3.substr(starting index,length of string required) : getting substrings
	cout << s.substr(0, 5) << endl;
	cout << s.substr(1, 5) << endl;

	// 4.find(string)

	/*
	if find got the required string then returns index of that word
	else it returns special character string::npos
	*/

	cout << s.find("web") << endl;
	cout << s.find("lop") << endl;

	// 5.operators to compare strings lexiographically

	string a = "web";
	string b = "developer";

	if (a == b)
	{
		cout << "equal" << endl;
	}
	else if (a > b)
	{
		cout << "a greater than b" << endl;
	}
	else
	{
		cout << "a smaller than b" << endl;
	}

	return 0;
}