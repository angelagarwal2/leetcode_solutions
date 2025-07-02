class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(char i:magazine)
        {
            mp[i]++;
        }
        for(char a:ransomNote)
        {
            if(mp.count(a))
            mp[a]--;
            else return false;
            if(mp[a]==0)
            mp.erase(a);
        }
        return true;
    }
};