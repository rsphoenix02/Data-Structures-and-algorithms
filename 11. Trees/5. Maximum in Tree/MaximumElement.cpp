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

int Maximum(Node *root)
{
    // Time Complexity O(n), Space Complexity O(log n)
    if (root == NULL)
    {
        return INT_MIN;
    }

    return (max((root->data), max(Maximum(root->left), Maximum(root->right))));
}

int main()

{
    Node *Root = new Node(10);
    Node *child1 = new Node(20);
    Node *child2 = new Node(30);
    Node *child3 = new Node(40);
    Node *child4 = new Node(50);

    Root->left = child1;
    Root->right = child2;
    Root->left->left = child3;
    Root->left->right = child4;

    cout << Maximum(Root);
    return 0;
}
