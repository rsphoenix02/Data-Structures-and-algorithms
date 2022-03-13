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

int height(Node *root)
{
    // Time Complexity O(n), Space Complexity O(log n)
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return 1 + max((leftHeight), (rightHeight));
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

    cout << height(Root);
    return 0;
}
