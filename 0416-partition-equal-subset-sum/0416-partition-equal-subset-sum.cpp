class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        sum/=2;
        vector<bool> prev(sum+1,0), cur(sum+1,0);
        prev[0]=cur[0]=true;
        if(nums[0]<=sum) prev[nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int target=1;target<=sum;target++){
                bool nottake=prev[target];
                bool take=false;
                if(target>=nums[i])
                take=prev[target-nums[i]];
                cur[target]=take | nottake;
            }
            prev=cur;
        }
        return prev[sum];
    }
};