class Solution {
public:
void inorder(TreeNode* root,vector<int>& res){
    if(!root) return;
    inorder(root->left,res);
    res.push_back(root->val);
    inorder(root->right,res);
    
    
}
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return 0;
       vector<int>res;
       inorder(root,res);
     return res[k-1];
    }
};
