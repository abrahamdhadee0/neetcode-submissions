class Solution {
public:
bool validbst(TreeNode* root,long min,long max){
            if(!root) return true;
            if(root->val>=max||root->val<=min) return false;
            return validbst(root->left,min,root->val)
            &&validbst(root->right,root->val,max);
        }
    bool isValidBST(TreeNode* root) {
        return validbst( root,LONG_MIN,LONG_MAX);
    }
        
};
