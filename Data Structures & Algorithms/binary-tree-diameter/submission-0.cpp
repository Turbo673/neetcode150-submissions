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
int dfs(TreeNode* root, int& res) {
    if(root == nullptr) {
        return 0;
    }
    int l = dfs(root->left, res);
    int r = dfs(root->right,res);
    res = (res > (l + r)) ? res : (l + r);
    return 1 + ((l > r) ? l : r);
}

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0; 
        dfs(root,result);
        return result;
    }
};
