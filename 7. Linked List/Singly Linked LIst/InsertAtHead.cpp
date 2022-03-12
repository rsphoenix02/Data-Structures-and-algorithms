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

Node *InsertAtHead(Node *&head, int data)
{
    // Time Complexity O(1)
    Node *p = new Node(data);
    p->next = head;
    head = p;
    return p;
}

void print(Node *head)
{
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

    InsertAtHead(head, 4);
    print(head);
    return 0;
}
