
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      if(root==nullptr) return {};
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* rightSide=nullptr;
            int qLen = q.size();
          while(qLen--){
              TreeNode* front=q.front();
              q.pop();
              rightSide=front;
              if(front->left){
                q.push(front->left);
              }
              if(front->right){
                q.push(front->right);
              }
            }
            res.push_back(rightSide->val);
        }
        return res;
    }
};