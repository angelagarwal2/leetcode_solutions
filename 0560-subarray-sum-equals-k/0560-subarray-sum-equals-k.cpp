class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int presum=0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            presum+=nums[i];
            int remove=presum-k;
            c+=mp[remove];
            mp[presum]+=1;
        }
        return c;
    }
};