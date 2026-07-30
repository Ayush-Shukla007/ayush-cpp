#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

int main() {
    // Create nodes
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    cout << "Root: " << root->val << endl;
    cout << "Left Child: " << root->left->val << endl;
    cout << "Right Child: " << root->right->val << endl;

    return 0;
}