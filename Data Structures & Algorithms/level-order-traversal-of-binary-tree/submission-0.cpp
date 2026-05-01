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
private:
void dfs(TreeNode* root, vector<vector<int>>& vec, int depth) {
    if(root == nullptr) {
        return;
    }
    if(vec.size() == depth) {
        vec.resize(depth + 1);
    }
    vec[depth].push_back(root->val);
    dfs(root->left,vec,depth + 1);
    dfs(root->right,vec,depth + 1);
}
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        int depth = 0;
        dfs(root,vec,depth);
        return vec;
    }
};
