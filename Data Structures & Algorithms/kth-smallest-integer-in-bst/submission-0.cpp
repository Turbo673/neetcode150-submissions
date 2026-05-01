/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void dfs(TreeNode* node, vector<int>& vec) {
        if(node == nullptr) return;
        dfs(node->left,vec);
        vec.push_back(node->val);
        dfs(node->right,vec);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vec;
        dfs(root,vec);
        return vec[k - 1];
    }
};
