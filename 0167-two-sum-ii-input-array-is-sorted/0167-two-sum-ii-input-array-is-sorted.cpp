class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            if(nums[left]+nums[right]<target)
            left++;
            else if(nums[left]+nums[right]>target)
            right--;
            else
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
        }
        return ans;
    }
};