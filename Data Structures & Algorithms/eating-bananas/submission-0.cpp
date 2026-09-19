class Solution {
public:
        int findmaxy(vector<int>& p){
            int maxi=INT_MIN;
            for(int i=0;i<p.size();i++){
                    if(p[i]>maxi){
                        maxi=p[i];
                    }
                   
            }
             return maxi;
        }
        long long fun(long long  guess,int n,vector<int>& piles){
           long long hrs=0;
            for(int i=0;i<n;i++){
               hrs+=(piles[i]/guess);
                if(piles[i]%guess!=0){
                    hrs++;
                }
            }
                return hrs;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int n=piles.size();
        int high=findmaxy(piles);
        int res=-1;
        while(low<=high){
                int guess=(low+high)/2;
                long long hrs=fun(guess,n,piles);
                if(hrs>h) low=guess+1;
                else{
                    res=guess;
                    high=guess-1;
                }
        }
        return res;
    }
};