class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;
        for(int i=0;i<s.length();++i)
        {
            char c1=s[i];
            char c2=t[i];
            if(map1.count(c1) && map1[c1]!=c2) return false;
            if(map2.count(c2) && map2[c2]!=c1) return false;
            map1[c1]=c2;
            map2[c2]=c1;
        }
        return true;
    }
};