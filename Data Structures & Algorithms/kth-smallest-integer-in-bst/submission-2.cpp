class Solution {
public:
    void fun(TreeNode* root, int &el, int k, int &cnt) {
        if (root == nullptr) return;
        if (el != -1) return;          // already found, stop early
        fun(root->left, el, k, cnt);
        cnt++;
        if (cnt == k) {
            el = root->val;
            return;
        }
        fun(root->right, el, k, cnt);
    }

    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        int el = -1;
        fun(root, el, k, cnt);
        return el;
    }
};