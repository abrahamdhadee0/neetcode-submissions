class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        else if(nums.size()==1)return 1;
        int maxy=0;
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            int diff=nums[i]-nums[i+1];
            if(diff==-1){
                count++;
            }
            else if(diff==0){
                
            }
            else{
                count=1;
            }
            maxy=max(maxy,count);
        }
        return maxy;
    }
};
