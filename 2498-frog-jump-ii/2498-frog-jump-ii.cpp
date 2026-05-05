class Solution {
public:
int f(int n,vector<int>& stones,vector<int>& dp){
    if(n==0) return 0;
    if(n==1) return abs(stones[n]-stones[n-1]);
    if(dp[n]!=-1) 1e9;
    int curr=abs(stones[n]-stones[n-2]);
    int rem=f(n-1,stones,dp);
    return dp[n]=max(curr,rem);
}
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        vector<int> dp(n,-1);
        return f(n-1,stones,dp);
    }
};