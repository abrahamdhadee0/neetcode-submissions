class Solution {
public:
    vector<int> prefix(vector<int>& heights){
        int n = heights.size();
        vector<int> ans(n);
        ans[0] = heights[0];
        for(int i = 1; i < n; i++){
            ans[i] = max(ans[i-1], heights[i]); // running max from left
        }
        return ans;
    }

    vector<int> suffix(vector<int>& heights){
        int n = heights.size();
        vector<int> ans(n);
        ans[n-1] = heights[n-1];
        for(int i = n-2; i >= 0; i--){
            ans[i] = max(ans[i+1], heights[i]); // running max from right
        }
        return ans;
    }

    int trap(vector<int>& heights) {
        int n = heights.size();
        vector<int> pre = prefix(heights);
        vector<int> suf = suffix(heights);

        int area = 0;
        for(int i = 0; i < n; i++){
            area += min(pre[i], suf[i]) - heights[i]; // water trapped at index i
        }
        return area;
    }
};