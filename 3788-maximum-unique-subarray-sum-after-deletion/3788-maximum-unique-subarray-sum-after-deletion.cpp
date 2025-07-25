class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int sum=0;
        int maxi=-101;
        int flag=1; //all neg
        for(int i:nums){
            if(i>=0) flag=0;
            if(i>maxi) maxi=i;
        }
        if(flag) return maxi;
        for(int i:s)
        {
            if(i>=0) sum+=i;
        }
        return sum;
    }
};