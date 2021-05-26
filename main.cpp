#include <bits/stdc++.h>
using namespace std;

/* Node Structure */
struct Node {
    int data;
    Node *left;
    Node *right;
};

/* Create New Node */
Node *createNode(int data) {
    Node *newNode = new Node();

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/* Insert Node in Binary Search Tree */
Node *insertNode(Node *root, int data) {
    if (root == NULL)
        root = createNode(data);
    else if (data < root->data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
    return root;
}

void Inorder(Node *root) {
    if (root != NULL) {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

int main() {
    Node *root = NULL;

    /* Insert Node with Value */
    root = insertNode(root, 12);
    insertNode(root, 15);
    insertNode(root, 5);
    insertNode(root, 53);
    insertNode(root, 98);
    insertNode(root, 0);

    Inorder(root);

    return 0;
}