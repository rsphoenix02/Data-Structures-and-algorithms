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

Node *InsertAtPosition(Node *head, int pos, int data)
{
    Node *p = new Node(data);
    if (pos == 1)
    {
        p->next = head;
        return p;
    }

    Node *curr = head;
    int i = 1;

    while (i <= (pos - 2) and curr != NULL)
    {
        curr = curr->next;
        i++;
    }

    if (curr == NULL)
    {
        return head;
    }

    p->next = curr->next;
    curr->next = p;

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

    head->next = second;
    second->next = third;

    InsertAtPosition(head, 2, 8);
    print(head);
    return 0;
}
