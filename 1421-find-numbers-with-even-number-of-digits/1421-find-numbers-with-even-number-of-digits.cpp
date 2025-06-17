class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int d=0;
        for(auto& i:nums)
        {
            int c=0;
            while(i>0)
            {
                c++;
                i/=10;
            }
            if(c%2==0)
            d++;
        }
        return d;
    }
};