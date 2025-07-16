class Solution {
public:
    string processStr(string s) {
        string res="";
        for(char ch:s){
            if(isalpha(ch))
            res+=ch;
            if(ch=='#')
            res+=res;
            if(ch=='%')
            reverse(res.begin(),res.end());
            if(ch=='*'&& !res.empty())
            res.pop_back();
        }
        return res;
    }
};