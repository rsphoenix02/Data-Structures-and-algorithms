#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

int IterativeSearch(Node *head, int x)
{
    int cnt = 0;
    while (head != NULL)
    {
        if (head->data == x)
        {
            return cnt;
        }
        head = head->next;
        cnt++;
    }
    return -1;
}

void print(Node *head)
{
    // Time Complexity O(n)
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{

    Node *head = new Node(5);
    Node *second = new Node(10);
    Node *third = new Node(15);

    head->next = second;
    second->next = third;

    cout << IterativeSearch(head, 15);
    return 0;
}
