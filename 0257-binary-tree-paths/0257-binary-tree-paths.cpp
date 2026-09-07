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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (!root) return result;
        dfs(root, to_string(root->val), result);
        return result;
    }

private:
    void dfs(TreeNode* node, string currentPath, vector<string>& result) {
        if (!node->left && !node->right) {
            result.push_back(currentPath);
            return;
        }
        if (node->left) {
            dfs(node->left, currentPath + "->" + to_string(node->left->val), result);
        }
        if (node->right) {
            dfs(node->right, currentPath + "->" + to_string(node->right->val), result);
        }
    }
};