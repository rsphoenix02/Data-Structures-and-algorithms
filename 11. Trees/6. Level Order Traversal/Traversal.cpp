#include <iostream>
#include <queue>
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

void LevelTraversal(Node *root)
{
    // Time Complexity O(n), Space Complexity O(n + m)
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.empty() == false)
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl; // Leaving Line after printing a line elements
            if (!q.empty())
            {
                q.push(NULL); // Pushing NULL after pushing all elements at that line
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
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

    LevelTraversal(Root);
    return 0;
}
