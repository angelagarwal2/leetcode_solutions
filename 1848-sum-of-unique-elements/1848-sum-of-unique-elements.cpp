class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int s=0;
        for(auto i:mp){
            if(i.second==1){
                s+=i.first;
            }
        }
        return s;
    }
};