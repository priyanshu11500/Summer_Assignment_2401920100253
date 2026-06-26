#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;

        int left = maxDepth(root->left) + 1;
        int right = maxDepth(root->right) + 1;

        return max(left, right);
    }
};

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    Solution obj;

    cout << obj.maxDepth(root);

    return 0;
}