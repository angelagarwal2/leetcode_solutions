class Solution {
public:
int atMost(vector<int>& nums, int k){
    if(k<0) return 0;
    int r=0,l=0,sum=0,cnt=0;
    while(r<nums.size()){
        sum+=(nums[r]%2);
        while(sum>k){
            sum-=(nums[l]%2);
            l++;
        }
        cnt+=(r-l+1);
        r++;
    }
    return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};