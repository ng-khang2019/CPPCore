#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* Insert(Node* root, int val)
{
    if (root == nullptr) return new Node(val);
    if (val < root->data)
    {
        root -> left = Insert(root->left, val);
    } else
    {
        root -> right = Insert(root->right, val);
    }
    return root;
}
int CountLeaves(Node* root)
{
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1;
    return CountLeaves(root->left) + CountLeaves(root->right);
}

int main()
{
    int n;
    cin >> n;

    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = Insert(root, x);
    }

    cout << CountLeaves(root);

    return 0;
};