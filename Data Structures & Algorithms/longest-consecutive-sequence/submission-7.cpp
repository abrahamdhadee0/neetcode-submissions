class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());
        int  longest=0;
        for(int num:nums){
            if(mp.find(num - 1) == mp.end()){
                int current=num;
                int count=1;
            
            while(mp.find(current + 1) != mp.end()){
                current++;
                count++;
            } 
            longest=max(longest,count);
        }
        
    }
    return longest;
    }
};
