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

void preOrder(TreeNode* root, vector<int>& v) {
    if(root == nullptr) {
        v.push_back(0);
        return;
    }
    v.push_back(root->val);
    preOrder(root->left,v);
    preOrder(root->right,v);
}
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> vec1;
        vector<int>vec2;
        preOrder(p,vec1);
        preOrder(q,vec2);
        return vec1 == vec2;
    }
};
