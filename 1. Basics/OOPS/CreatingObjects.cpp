#include <iostream>
using namespace std;

// Creating Class
class student
{
public:
    int age;
    int RollNo;

private:
    string name;
};
int main()
{
    // Creating Objects Statically
    student s1;
    student s2;
    student s3, s4, s5;

    //  Creating Objects Dynamically
    student *s6 = new student;

    s1.age = 18;
    s1.RollNo = 31;

    cout << s1.age << endl;
    cout << s1.RollNo << endl;

    s6->age = 22;
    s6->RollNo = 35;
    return 0;
}
