class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;
        for(int i=0,n=s.length();i<n;++i)
        {
            char key=s[i];
            char value=t[i];
            if(!(map1.count(key))) map1[key]=value;
            else if(!(map1[key]==value)) return false;
            if(!(map2.count(value))) map2[value]=key;
            else if(!(map2[value]==key)) return false;
        }
        return true;
    }
};