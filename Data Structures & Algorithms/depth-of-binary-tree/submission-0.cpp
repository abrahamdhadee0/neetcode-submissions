class Solution {
public:
int fun(TreeNode* root){
    if(root==nullptr) return 0;

return 1+max(fun(root->left),fun(root->right));
}   
   
    int maxDepth(TreeNode* root) {
       int n= fun(root);
       return n;
    }
};