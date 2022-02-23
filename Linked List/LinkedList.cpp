#include <iostream>
#include "Node.cpp"
using namespace std;

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

// Function to print using recursion
void display(Node *p)
{

    if (p != NULL)
    {
        cout << p->data << " ";
        display(p->next);
    }
}

// Count Nodes using recursion
int size(Node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + size(p->next);
    }
}

//  Sum using recursion
int sum(Node *p)
{

    if (p == 0)
    {
        return 0;
    }
    else
    {
        return sum(p->next) + p->data;
    }
}

// Finding Maximum Element in LinkedList
int maxElement(Node *p)
{
    int max = 0;
    while (p != NULL)
    {
        if ((p->data) > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
// Linear Search to find element in linear search
int search(Node *p, int x)
{
    int count = 0;
    while (p != NULL)
    {
        if (p->data == x)
        {
            return count;
        }
        else
        {
            p = p->next;
            count++;
        }
    }
    return -1;
}
void insert(Node *p, int element, int index)
{
    if (index < 0 or index > size(p))
    {
        return;
    }

    Node *t = new Node(element);
    int count = 0;
    Node *temp = p;

    while (count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    t->next = temp->next;
    temp->next = t;
}
void insertLast(Node *p, int x)
{
    Node *t = new Node(x);

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = t;
    t->next = NULL;
}
void sortedInsert(Node *p, int element)
{
    Node *t = new Node(element);
    while ((p->next->data) <= element)
    {
        p = p->next;
        if (p->next = NULL)
        {
            return;
        }
    }
    t->next = p->next;
    p->next = t;
}
int isSorted(Node *p)
{
    bool Sorted = true;
    while (p->next != NULL)
    {
        if ((p->next->data) < (p->data))
        {
            Sorted = false;
        }
        p = p->next;
    }
    return Sorted;
}
int main()
{

    // Node n1(1);
    // Node *head = &n1;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    Node *head = takeInput();
    display(head);
    cout << endl;
    cout << size(head) << endl;
    cout << sum(head) << endl;

    cout << maxElement(head) << endl;
    insert(head, 5, 2);
    cout << search(head, 5) << endl;
    insertLast(head, 12);
    display(head);
    cout << endl;
    sortedInsert(head, 15);
    display(head);
    cout << isSorted(head);
    return 0;
}
