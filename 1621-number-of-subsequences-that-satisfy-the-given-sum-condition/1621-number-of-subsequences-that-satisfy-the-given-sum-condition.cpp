class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        const int mod=1e9+7;
        int n=nums.size();
        int left=0;
        int right=n-1;
        int c=0;
        vector<int> power(n, 1);
        for (int i = 1; i < n; ++i) {
            power[i] = (power[i - 1] * 2) % mod;
        }
        while(left<=right)
        {
            if(nums[left]+nums[right]>target)
            {
                right--;
            }
            else{
                c=(c+power[right-left])%mod;
                left++;
            }
        }
        return c;
    }
};