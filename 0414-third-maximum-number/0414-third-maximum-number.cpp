class Solution {
public:
    int thirdMax(vector<int>& nums) {
            long max1=LONG_MIN;
            long max2=LONG_MIN;
            long max3=LONG_MIN;
            for(auto i:nums)
            {
                if(i==max1||i==max2||i==max3)
                continue;
                if(i>max1)
                {
                    max3=max2;
                    max2=max1;        
                    max1=i;
                }
                else if(i>max2)
                {
                    max3=max2;
                    max2=i;
                }
                else if(i>max3)
                max3=i;
            }
            return (max3==LONG_MIN)?max1:max3;
    }
};