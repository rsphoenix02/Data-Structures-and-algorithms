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

void InsertAtTail(Node *head, int data)
{
    // Time Complexity O(n)
    Node *temp = head;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *tail = new Node(data);
    temp->next = tail;
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

    InsertAtTail(head, 20);
    print(head);

    return 0;
}
