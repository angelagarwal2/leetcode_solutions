class Solution {
public:
int f(vector<vector<int>> &dp,int ind,int T,vector<int>& coins){
    if(ind==0) return (T%coins[ind]==0);
    if(dp[ind][T]!=-1) return dp[ind][T];
    int nottake=f(dp,ind-1,T,coins);
    int take=0;
    if(coins[ind]<=T)
    take=f(dp,ind,T-coins[ind],coins);
    return dp[ind][T]=take+nottake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return f(dp,n-1,amount,coins);
    }
};