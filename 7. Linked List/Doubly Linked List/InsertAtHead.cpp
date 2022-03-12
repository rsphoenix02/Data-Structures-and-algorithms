#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
    Node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
};

Node *InsertAtHead(Node *&head, int data)
{
    // Time Complexity O(1)
    if (head == NULL)
    {
        return NULL;
    }
    Node *p = new Node(data);

    p->next = head;
    head->prev = p;

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
    /*
    Doubly Linked List here is :
    10 <-> 20 <-> 30 <-> NULL
    */

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    InsertAtHead(head, 5);
    print(head);

    return 0;
}
