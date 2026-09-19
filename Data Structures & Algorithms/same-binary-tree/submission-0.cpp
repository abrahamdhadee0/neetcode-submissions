

class Solution {
public:
bool fun(TreeNode* p,TreeNode* q){
    if(p==nullptr && q==nullptr) return true;
    if(p!=nullptr && q==nullptr) return false;
    if(p==nullptr && q!=nullptr) return false;
if(p&&q&&p->val==q->val){
    return fun(p->left,q->left)&&fun(p->right,q->right);
}
else{
    return false;
}
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag=fun(p,q);
        return flag;
    }
};
