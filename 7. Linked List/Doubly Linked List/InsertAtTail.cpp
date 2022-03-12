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

Node *InsertAtTail(Node *head, int data)
{
    //  Time Complexity O(n)
    Node *p = new Node(data);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
    return head;
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

    InsertAtTail(head, 40);
    print(head);

    return 0;
}
