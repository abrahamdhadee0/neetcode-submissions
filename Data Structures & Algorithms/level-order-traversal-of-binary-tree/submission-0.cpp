
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qt;
        if(root==nullptr) return {};
        qt.push(root);
        vector<vector<int>>res;
        while(!qt.empty()){
            int levelsize=qt.size();
            vector<int>temp;
            while(levelsize--){
                TreeNode* t=qt.front();
                qt.pop();
                temp.push_back(t->val);
                if(t->left!=nullptr){
                    qt.push(t->left);
                }
                if(t->right!=nullptr){
                    qt.push(t->right);
                }
            
            }
                res.push_back(temp);
        }
        return res;
    }
};
