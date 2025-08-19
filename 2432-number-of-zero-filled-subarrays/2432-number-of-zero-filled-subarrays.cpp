class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0;
        int n=nums.size();
        int i=0;
        while(i<n)
            {
                if(nums[i]==0){
                    long long ct=0;
                    while(i<n&&nums[i]==0){
                    ct++;
                    i++;
                }
                c+=(ct*(ct+1))/2;
                }
                else
                i++;
        }
        return c;
    }
};