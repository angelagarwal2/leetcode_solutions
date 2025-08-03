class Solution {
public:
    int longestOnes(vector<int>& nums, int k) { //longest subarray with at most k zeros
        int zeros=0;
        int maxlen=0;
        int r=0,l=0,len;
        while(r<nums.size()){
            if(nums[r]==0) zeros++;
            if(zeros>k){
                if(nums[l]==0) zeros--;
                l++;
            }
            if(zeros<=k) len=r-l+1;
            maxlen=max(len,maxlen);
            r++;
        }
        return maxlen;
    }
};

//TC:o(n)
//SC:o(1)