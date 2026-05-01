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
void dfs(TreeNode* n, vector<int>& vec, int depth) {
 if(n == nullptr) return;
 if(vec.size() == depth) vec.push_back(n->val);
  dfs(n->right, vec, depth + 1);
 dfs(n->left,vec,depth + 1);
}
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr) {
            return vector<int>();
        }
        vector<int> vec;
        dfs(root,vec,0);
        return vec;
    }
};
