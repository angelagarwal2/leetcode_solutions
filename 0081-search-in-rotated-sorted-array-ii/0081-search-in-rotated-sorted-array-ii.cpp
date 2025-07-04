class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            if(nums[mid]==target) return true;
            if(nums[low]==nums[mid]&&nums[mid]==nums[high])
            {
                high-=1;
                low+=1;
                continue;
            }
            //left sorted
            if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target&&nums[mid]>=target)
                high=mid-1;
                else
                low=mid+1;
            }
            //right sorted
            else
            {
                if(nums[high]>=target&&nums[mid]<=target)
                low=mid+1;
                else
                high=high-1;
            }
        }
        return false;
    }
};