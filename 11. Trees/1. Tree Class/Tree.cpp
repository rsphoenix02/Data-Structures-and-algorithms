#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
};

int main()

{
    Node *Root = new Node(10);
    Node *child1 = new Node(20);
    Node *child2 = new Node(30);

    Root->left = child1;
    Root->right = child2;
    return 0;
}
