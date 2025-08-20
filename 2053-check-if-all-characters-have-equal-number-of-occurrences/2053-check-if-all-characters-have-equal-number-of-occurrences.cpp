class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        int first=mp[s[0]];
        for(auto i:mp){
            if(i.second!=first)
            return false;
        }
        return true;
    }
};