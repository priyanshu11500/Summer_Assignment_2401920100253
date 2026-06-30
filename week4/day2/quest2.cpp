#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;

        if(root == NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            int s = q.size();
            vector<int> v;

            for(int i = 0; i < s; i++) {

                TreeNode* temp = q.front();
                q.pop();

                v.push_back(temp->val);

                if(temp->left != NULL)
                    q.push(temp->left);

                if(temp->right != NULL)
                    q.push(temp->right);
            }

            ans.push_back(v);
        }

        return ans;
    }
};

int main() {

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution obj;

    vector<vector<int>> ans = obj.levelOrder(root);

    for(auto level : ans) {
        for(auto x : level) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}