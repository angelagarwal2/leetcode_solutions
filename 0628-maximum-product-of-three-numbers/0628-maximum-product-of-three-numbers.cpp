class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        int max3=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(auto i:nums)
        {
            if(max1<i)
            {
                max3=max2;
                max2=max1;
                max1=i;
            }
            else if(max2<i)
            {
                max3=max2;
                max2=i;
            }
            else if(max3<i)
            {
                max3=i;
            }

            if(min1>i)
            {
                min2=min1;
                min1=i;
            }
            else if(min2>i)
            min2=i;
        }
        return (max((max1*max2*max3),(max1*min1*min2)));
    }
};