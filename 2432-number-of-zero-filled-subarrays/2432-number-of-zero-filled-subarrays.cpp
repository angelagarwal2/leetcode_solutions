class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0,ct=0;
        for(int i:nums){
            if(i==0){
                ct++;
                c+=ct;
            }
            else
            ct=0;
        }
        return c;
    }
};