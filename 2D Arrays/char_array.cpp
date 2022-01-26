#include <iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char input[])
{
    int s = 0;
    int e = length(input) - 1;

    while (s < e)
    {
        swap(input[s], input[e]);
        s++;
        e--;
    }
}

int main()
{

    char name[100];
    cout << "Enter Your Name: ";
    // cin >> name;
    cin.getline(name, 100);
    // name[3] = 'd';
    // name[1] = '\0';
    cout << endl;
    cout << "Your Name is " << name;
    cout << " and length of Your Name is " << length(name) << endl;

    reverse(name);
    cout << "Reversed name is " << name;
    return 0;
}