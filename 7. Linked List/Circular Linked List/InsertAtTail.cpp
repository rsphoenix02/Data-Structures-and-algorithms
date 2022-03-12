#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
    Node()
    {
        data = 0;
        next = NULL;
    }
};

void print(Node *head)
{
    // Time Complexity O(n)
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        cout << head->data;
        return;
    }

    cout << head->data << " ";
    Node *temp = head->next;
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *InsertAtTail(Node *head, int data)
{
    Node *p = new Node(data);
    if (head == NULL)
    {
        head = p;
        head->next = head;
        return head;
    }
    Node *curr = head->next;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = p;
    p->next = head;

    return p;
}

int main()
{
    /*
    Circular Linked List here is :

    10 -> 20 -> 30
    ^           |
    |			|
    -------------
    */
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;
    third->next = head;

    InsertAtTail(head, 40);
    print(head);

    return 0;
}
