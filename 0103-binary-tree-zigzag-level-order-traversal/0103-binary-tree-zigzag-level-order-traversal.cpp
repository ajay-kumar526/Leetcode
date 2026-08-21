class Solution {
public:

    void levelorder(TreeNode* root, vector<vector<int>>& ans) {

        if (root == NULL)
            return;

        queue<TreeNode*> q;
        q.push(root);

        int lev = 0;

        while (!q.empty()) {

            vector<int> level;
            int size = q.size();

            while (size--) {

                TreeNode* temp = q.front();
                q.pop();

                level.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            lev++;

            if (lev % 2 == 0) {
                reverse(level.begin(), level.end());
            }

            ans.push_back(level);
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> ans;

        levelorder(root, ans);

        return ans;
    }
};