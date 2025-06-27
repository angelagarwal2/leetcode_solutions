class Solution {
public:
    bool canSplit(vector<int>& nums,int mid,int k)
    {
        int first=0;
        int cnt=1;
        for(int i=0;i<nums.size();i++)
        {
            if(first+nums[i]<=mid)
            {
                first+=nums[i];
            }
            else{
                cnt++;
                first=nums[i];
            }
        }
        return cnt>k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            if(canSplit(nums,mid,k))
            {
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};