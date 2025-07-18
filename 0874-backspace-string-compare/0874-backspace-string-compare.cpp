class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#')
            {
                if(!empty(res1))
                res1.pop_back();
                }
    
                else
                res1+=s[i];
        }
        string res2="";
        for(int i=0;i<t.length();i++){
            if(t[i]=='#')
            {
                if(!empty(res2))
                res2.pop_back();}

                else
                res2+=t[i];
        }
        return res1==res2;
    }
};