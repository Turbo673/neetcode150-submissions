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
        queue<TreeNode*> queue;
        queue.push(root);
        while(queue.empty() == false) {
            TreeNode* node = queue.front();
            queue.pop();
            swap(node->left,node->right);
            if(node->left != nullptr) {
                queue.push(node->left);
            } 
            if(node->right != nullptr) {
                queue.push(node->right);
            }
        }
        return root;
    }
};
