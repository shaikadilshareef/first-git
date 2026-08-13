// separate chaining and hashing
#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node *back;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
class BST
{

public:
    node *root;
    BST()
    {
        root = NULL;
    }
    node *insert(node *root, int val)
    {
        if (root == NULL)
        {
            return new node(val);
        }
        else if (val < root->data)
        {
            root->left = insert(root->left, val);
            root->left->back = root;
        }
        else
        {
            root->right = insert(root->right, val);
            root->right->back = root;
        }
        return root;
    }
    node *search(node *root, int key)
    {
    }
};

int main()
{
    node *root = NULL;
    BST tree;
    BST tree2;
    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 25);
    tree.insert(tree.root, 49);
}