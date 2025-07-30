class Solution {
public:
    int singleNumber(vector<int>& nums) {
       /* unordered_map<int,int> a;
        for(auto i:nums)
        a[i]++;
        for(auto i:a)
        if(i.second==1)
        return i.first;
        return -1; */
        int a=0;
        for(auto i:nums) //nums=1,1,2,3,3,8,8
        {
            a=a^i;   // 1^1^2^3^3^8^8 = 0^2^0^0 = 0^2 = 2
        }
        return a;
    }
};