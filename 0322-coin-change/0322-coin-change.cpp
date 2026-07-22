class Solution {
public:
int f(int n,int T, vector<int> &coins,vector<vector<int>>& dp){
      if(n==0){
          if(T%coins[0]==0) return T/coins[0];
          else return 1e9;
      }
      if(dp[n][T]!=-1) return dp[n][T];
      int nottake=f(n-1,T,coins,dp);
      int take=INT_MAX;
      if(coins[n]<=T)
      take=1+f(n,T-coins[n],coins,dp);
      return dp[n][T]=min(take,nottake);
  }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
       vector<vector<int>> dp(n,vector<int>(amount+1,-1));
       int ans=f(n-1,amount,coins,dp);
       return (ans>=1e9) ? -1 : ans;
    }
};