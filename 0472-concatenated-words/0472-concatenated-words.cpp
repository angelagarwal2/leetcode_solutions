class Solution {
public:
unordered_map<string,bool> mp;
bool isConcatenated(string s,unordered_set<string>& st){
    if(mp.find(s)!=mp.end())
    return mp[s];
    int l=s.length();
    for(int i=0;i<l;i++){
        string pref=s.substr(0,i+1);
        string suff=s.substr(i+1);
         if(st.count(pref) && (isConcatenated(suff, st) || st.count(suff)))
        return mp[s]=true;
    }
    return mp[s]=false;
}
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n=words.size();
        mp.clear();
        unordered_set<string> st(begin(words),end(words));
        vector<string> res;
        for(int i=0;i<n;i++)
        {
            string word=words[i];
            if(isConcatenated(word,st))
            res.push_back(word);
        }
        return res;
    }
};