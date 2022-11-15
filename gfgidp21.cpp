#include "library.h"

class node
{
public:
    int data;
    int liss;
    node *left, *right;
};

node *newNode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->liss = 0;
    temp->left = temp->right = NULL;
    return temp;
}

int solution(node *root)
{
    if (root == nullptr)
        return 0;
    int temp = 0;
    if (root->left == nullptr and root->right == nullptr)
        root->liss = 1;
    if (root->liss)
        return root->liss;
    if (root->left != nullptr)
    {
        temp += solution(root->left->left) + solution(root->left->right);
    }
    if (root->right != nullptr)
    {
        temp += solution(root->right->left) + solution(root->right->right);
    }
    return max(1 + temp, solution(root->left) + solution(root->right));
}

int main()
{
    node *root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);
    cout << solution(root);
}