#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    v1.pop_back();
    for (int i = 0; i < 100; i++)
    {
        v1.push_back(i + 1);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    cout << "capacity: " << v1.capacity();

    // cout << v1[0] << endl;
    return 0;
}
