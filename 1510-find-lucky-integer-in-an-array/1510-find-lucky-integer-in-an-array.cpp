class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i:arr)
        {
            mp[i]++;
        }
        int luck=-1;
        for(auto& [key,val]:mp){
            if(key==val)
            luck=max(luck,key);
        }
        return luck;
    }
};