class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> cTow;
        unordered_map<string,char> wToc;
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            words.push_back(word);
        }
        if(words.size()!=pattern.size()) return false;
        for(int i=0;i<pattern.size();++i)
        {
            char ch=pattern[i];
            string w=words[i];
            if(cTow.count(ch)){
                if(cTow[ch]!=w) return false;
            }
            else cTow[ch]=w;
            if(wToc.count(w)){
                if(wToc[w]!=ch) return false;
            }
            else wToc[w]=ch;
        }
        return true;
    }
};