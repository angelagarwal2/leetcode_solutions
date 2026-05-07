class Solution {
public:
long long f(int n,int m,vector<vector<int>>& grid,vector<vector<long long>>& dp){
    if(n==0 && m==0) return grid[0][0];
    if(n<0 || m<0) return INT_MAX;
    if(dp[n][m]!=-1) return dp[n][m];
    long long up=grid[n][m]+f(n-1,m,grid,dp);
    long long left=grid[n][m]+f(n,m-1,grid,dp);
    return dp[n][m]=min(up,left);
}
    long long minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<long long>> dp(n,vector<long long>(m,-1));
        return f(n-1,m-1,grid,dp);
    }
};