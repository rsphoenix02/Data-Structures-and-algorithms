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

void traverse(Node *head)
//  Time Complexity O(n)
{
    cout << head->data << " ";
    if (head != NULL)
    {
        traverse(head->next);
    }
}

int main()
{

    Node *head = new Node(5);
    Node *second = new Node(10);
    Node *third = new Node(15);

    head->next = second;
    second->next = third;

    traverse(head);
    return 0;
}
