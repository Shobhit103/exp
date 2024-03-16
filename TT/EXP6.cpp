#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void preOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->right = new Node(2);
    root->right->right = new Node(5);
    root->right->right->left = new Node(3);
    root->right->right->left->right = new Node(4);
    root->right->right->right = new Node(6);

    cout << "Pre Order Traversal: ";
    preOrder(root);
    cout << endl;

    return 0;
}