
class Solution {
public:
    int fun(TreeNode* root,int& count){
        if(root==nullptr) return 0;
        int left=fun(root->left,count);
        int right=fun(root->right,count);
        count= max(left+right,count);
        return 1+max(left,right);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int count=0;
        fun(root,count);
        return count;
    }
};
