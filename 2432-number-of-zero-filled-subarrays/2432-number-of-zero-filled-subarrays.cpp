class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0;
        for(int i=0;i<nums.size();i++){
            long long ct=0;
            while(i<nums.size()&&nums[i]==0){
                ct++;
                i++;
            }
                c+=(ct*(ct+1))/2;
        }
        return c;
    }
};