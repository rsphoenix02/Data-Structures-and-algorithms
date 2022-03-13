#include <iostream>
#include <string>
using namespace std;

class Books
{
public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    Books book1;
    book1.setName("Harry Potter");
    cout << book1.getName() << endl;
    return 0;
}