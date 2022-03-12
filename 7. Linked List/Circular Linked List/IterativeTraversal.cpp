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

    cout << head->data << " ";
    Node *temp = head->next;
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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

    print(head);

    return 0;
}
