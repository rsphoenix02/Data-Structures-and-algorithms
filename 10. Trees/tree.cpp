#include <iostream>
#include "treenode.cpp"
using namespace std;

void Inorder(Node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout << (root->data) << " ";
        Inorder(root->right);
    }
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    return 0;
}