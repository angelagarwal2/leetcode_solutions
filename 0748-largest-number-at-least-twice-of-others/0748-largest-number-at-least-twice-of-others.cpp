class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=INT_MIN;
        int ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(max<nums[i])
            {ind=i;
            max=nums[i];}
        }
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>max/2)
            return -1;
        }
        return ind;
    }
};