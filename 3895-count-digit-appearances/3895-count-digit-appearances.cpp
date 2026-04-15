class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            while(num!=0){
                int d=num%10;
                if(d==digit)
                c++;
                num/=10;
            }
        }
        return c;
    }
};