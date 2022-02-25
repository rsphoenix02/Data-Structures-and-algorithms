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
    if ((index < 0) or (index > size(p)))
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
void insertLast(Node *head, int x)
{
    Node *t = new Node(x);
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = t;
    t->next = NULL;
}

bool isSorted(Node *p)
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
void sortedInsert(Node *head_ref,
                  int num)
{
    Node *temp = new Node(num);
    if (head_ref->data >= num)
    {
        temp->next = head_ref;
        head_ref = temp;
    }
    else
    {
        Node *top = head_ref;
        while (top != NULL && top->data < num)
        {
            top = top->next;
        }
        top->next = temp;
        temp->next = top->next->next;
    }
}

/* Function to print linked list */
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *Head = takeInput();
    display(Head);
    cout << endl;
    if (isSorted(Head) == true)
    {
        cout << " It is sorted";
    }
    else
    {
        cout << "It is unsorted";
    }
    cout << endl;
    cout << Head << "\n";
    int n;
    cout << "Enter new value"
         << "\n";
    cin >> n;
    sortedInsert(Head, n);
    cout << Head << endl;
    display(Head);

    return 0;
}
