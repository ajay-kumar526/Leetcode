/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        while (root != NULL) {
            
            // Both p and q are smaller than root
            if (p->val < root->val && q->val < root->val) {
                root = root->left;
            }
            
            // Both p and q are greater than root
            else if (p->val > root->val && q->val > root->val) {
                root = root->right;
            }
            
            // They are on different sides,
            // or one of them is the root
            else {
                return root;
            }
        }
        
        return NULL;
    }
};