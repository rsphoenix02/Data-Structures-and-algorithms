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
};

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

    print(head);

    return 0;
}
