
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* rightSide = nullptr;
            int qLen = q.size();

            for (int i = 0; i < qLen; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node) {
                    rightSide = node;
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if (rightSide) {
                res.push_back(rightSide->val);
            }
        }
        return res;
    }
};