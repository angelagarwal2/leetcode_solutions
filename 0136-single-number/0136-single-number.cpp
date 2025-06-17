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
        for(auto i:nums)
        {
            a=a^i;
        }
        return a;
    }
};