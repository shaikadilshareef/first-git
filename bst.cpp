#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *L_child;
    Node *R_child;
    Node(int x)
    {
        data = x;
        L_child = R_child = NULL;
    }
};
Node *insert(int *root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    if (x < root->data)
    {
        root->L_child = insert(root->L_child, x);
    }
    else
    {
        root->R_child = insert(root->R_child, x);
    }
    return root;
}
bool search(Node *root, int key)
{
    if (root->data == key)
    {
        return
    }
}
