#include <iostream>
#include <vector>
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
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
// Insert node at last location
void insertAtLast(Node *&head, int val)
{

    Node *p = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = p;
        p->next = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        p->next = NULL;
    }
}
// Insert node at first position
void insertAtHead(Node *&head, int val)
{
    Node *p = new Node(val);
    Node *temp = new Node;
    temp = head;
    p->next = temp;
    head = p;
}
// Print all nodes
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Insert in sorted linked List
void insertSorted(Node *&head, int val)
{
    Node *p = new Node(val);
    Node *temp = head;
    if (head == NULL)
    {
        head = p;
    }
    else if (head->data >= val)
    {
        p->next = head;
        head = p;
    }
    else
    {
        while (temp->next->data < val)
        {
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = p;
    }
}
// If value is present in linked List
bool search(Node *head, int val)
{
    Node *temp = head;
    bool present = false;
    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
// Delete a value from linkedlist
void deletion(Node *&head, int val)
{
    Node *temp = head;
    if (head->data == val)
    {
        head = head->next;
        delete temp;
    }
    else
    {
        while (temp->next->data != val)
        {
            temp = temp->next;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}
// Returns if sorted or not
bool isSorted(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
        {
            return false;
        }

        temp = temp->next;
    }
    return true;
}
// Remove continously coming dublicate elements from linkedlist
void removeDublicates(Node *&head)
{
    Node *p, *q;
    p = head;
    q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
void reverse(Node *&head)
{
    vector<int> nodes;
    Node *temp = head;
    while (temp != NULL)
    {
        nodes.push_back(temp->data);
        temp = temp->next;
    }
    int i = nodes.size() - 1;
    temp = head;
    while (temp != NULL)
    {
        temp->data = nodes[i];
        temp = temp->next;
        i--;
    }
}
int main()

{
    Node *head = NULL;
    insertAtLast(head, 4);
    insertAtLast(head, 8);
    insertAtLast(head, 10);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertSorted(head, 1);
    display(head);
    cout << search(head, 4) << endl;
    deletion(head, 4);
    display(head);
    isSorted(head);

    if (isSorted(head) == 0)
    {
        cout << "It is unsorted" << endl;
    }
    else
    {
        cout << "Sorted" << endl;
    }
    removeDublicates(head);
    display(head);
    reverse(head);
    display(head);
    return 0;
}
