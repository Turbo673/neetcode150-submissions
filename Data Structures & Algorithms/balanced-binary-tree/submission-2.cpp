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

    int findHeight(TreeNode* root) {
    if(root == nullptr) {
        return 0;
    }
    int l = findHeight(root->left);
    int r = findHeight(root->right);
    int max = (l > r) ? l : r;
    return 1 + max;

    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr) {
            return true; // nothing
        }
        int l = findHeight(root->left);
        int r = findHeight(root->right);

        if(abs(l - r) > 1) return false;
        
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
