#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // push elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // size of stack
    cout << st.size() << endl;

    // OVERFLOW condition
    st.push(60);

    // top element
    cout << st.top() << endl;

    // pop elements from end of array
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    // check if stack empty, returns 1 if stack empty
    cout << st.size() << endl;

    // UNDERFLOW condition
    st.pop();
    st.top();

    // stack traversal
    st.push(10);
    st.push(20);
    st.push(15);

    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}