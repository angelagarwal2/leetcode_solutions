class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        if(n==2) return abs(stones[1]-stones[0]);
        int ans=0;
        for(int i=2;i<n;i++){
            ans=max(ans,abs(stones[i]-stones[i-2]));
        }
        return ans;
    }
};