

class Solution {
public:
void fun(TreeNode* root,int & i,int maxy){
    if(root==nullptr) return;
    if(root->val>=maxy){
        maxy=max(root->val,maxy);
        i++;
    }
    fun(root->left,i,maxy);
    fun(root->right,i,maxy);
}
    int goodNodes(TreeNode* root) {
        int i=0;
        int max=INT_MIN;
        fun(root,i,max);
        return i;
    }
};
