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
    cout << endl;
}

Node *DeleteKthNode(Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    if (pos == 1)
    {
        Node *curr = head;
        while (curr->next != head)
        {
            curr = curr->next;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        curr->next = head;

        return head;
    }
    else
    {
        int count = 1;
        Node *curr = head;
        while (count < pos - 1)
        {
            curr = curr->next;
            count++;
        }
        Node *temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
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

    head = DeleteKthNode(head, 2);
    print(head);

    return 0;
}
