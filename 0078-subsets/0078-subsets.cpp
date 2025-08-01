class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        for(int num=0;num<(1<<n);num++)
        {
            vector<int> vec;
            for(int i=0;i<n;i++)
            {
                if(num&(1<<i))
                vec.push_back(nums[i]);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};