class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int s=0;
            int mid=low+((high-low)/2);
            for(int i:nums)
            {
                s+=(i+mid-1)/mid;
            }
            if(s<=threshold)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};