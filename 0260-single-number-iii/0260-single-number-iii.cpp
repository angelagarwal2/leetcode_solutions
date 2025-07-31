class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        unsigned int rightmost = xorr & -static_cast<unsigned int>(xorr);
        int b1=0;
        int b2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightmost)
            b1=b1^nums[i];
            else
            b2=b2^nums[i];
        }
        return {b1,b2};
    }
};