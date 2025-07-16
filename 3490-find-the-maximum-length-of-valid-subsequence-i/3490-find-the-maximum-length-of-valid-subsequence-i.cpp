class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int oddCnt = 0, evenCnt = 0, cnt = 1;
        int prev=nums[0]%2;
        if(prev) oddCnt++;
        else evenCnt++;
       for (int num=1;num<nums.size();num++) {
        int curr=nums[num]%2;
            if (curr==0) {
                evenCnt++;
            } else {
                oddCnt++;
            }
            if(prev!=curr){
                cnt++;
                prev=curr;
            }
        }
        return max({cnt, oddCnt, evenCnt});
    }
};