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
    TreeNode* invertTree(TreeNode* root) {
    if(root == nullptr) {
        return nullptr;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* n = q.front();
        q.pop();
        TreeNode* tmp = n->left;
        n->left = n->right;
        n->right = tmp;
        if(n->left != nullptr) q.push(n->left);
        if(n->right != nullptr) q.push(n->right);
    } 
    return root;   
    }
};
