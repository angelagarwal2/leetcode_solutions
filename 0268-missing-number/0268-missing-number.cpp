class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=(n*(n+1))/2;
        int sm=0;
        for(auto i:nums)
        {
            sm+=i;
        }
        return s-sm;
    }
};