class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        int maxl=0;
        for(auto& [num,count]:mp)
        {
            if(mp.count(num+1))
            {
                int l=count+mp[num+1];
                maxl=max(maxl,l);
            }
        }
        return maxl;
    }
};