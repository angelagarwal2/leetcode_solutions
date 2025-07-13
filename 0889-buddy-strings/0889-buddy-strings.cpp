class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length())
        return false;
        if(s==goal)
        {
            unordered_set<char> map;
            for(int i=0;i<s.length();++i){
                if(map.count(s[i])) return true;
                map.insert(s[i]);
            }
            return false;
        }
        vector<int> ind;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=goal[i])
            ind.push_back(i);
        }
        if(ind.size()!=2)
        return false;
        swap(s[ind[0]],s[ind[1]]);
        return s==goal;
    }
};