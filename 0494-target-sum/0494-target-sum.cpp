class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int diff) {
         int n=arr.size();
        int sm=0;
        for(auto i:arr){
            sm+=i;
        }
        int target;
        if(sm-diff>=0 && (sm-diff)%2==0)
        target=(sm-diff)/2;
        else return 0;
        vector<vector<int>> dp(n,vector<int>(target+1,0));
        if (arr[0] == 0)
    dp[0][0] = 2;
else
    dp[0][0] = 1;

if (arr[0] != 0 && arr[0] <= target)
    dp[0][arr[0]] = 1;
        for(int i=1;i<n;i++){
            for(int s=0;s<=target;s++){
                int notpick=dp[i-1][s];
      int pick=0;
      if(arr[i]<=s) pick=dp[i-1][s-arr[i]];
       dp[i][s]=pick+notpick;
            }
        }
        return dp[n-1][target];
    }
};