class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*unordered_map<int,int> m;
        for(auto i:nums)
        {m[i]++;
        if(m[i]>nums.size()/2)
        {
            return i;
        }}
        return 0;*/

        /* sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2]; */

        int ele=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(count==0)
            {
                ele=nums[i];
                count=1;
            }
            else if(nums[i]==ele)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return ele;
    }
};