class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxInd=0;
        for(int i=0;i<nums.size();i++){
            int s=i+nums[i];
            if(i>maxInd) return false;
            maxInd=max(s,maxInd);
        }
        return true;
    }
};