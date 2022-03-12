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

Node *DeleteAtTail(Node *head)
{
    // Time Complexity O(n)
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
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

    Node *head = new Node(5);
    Node *second = new Node(10);
    Node *third = new Node(15);
    Node *forth = new Node(20);

    head->next = second;
    second->next = third;
    third->next = forth;

    DeleteAtTail(head);
    print(head);
    return 0;
}
