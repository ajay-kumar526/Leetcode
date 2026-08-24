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

 //Preorder->
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode*current=root;
        while(current!=NULL){
            if(current->left){
             TreeNode*temp=current->left;
              while(temp->right!=NULL){
                temp=temp->right;
              }
              temp->right=current->right;
              current->right=current->left;
              current->left=NULL;

            }
            current=current->right;
        }




    }
};