class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')') c--;
            if(c!=0) ans.push_back(s[i]);
            if(s[i]=='(') c++;
        }
        return ans;
    }
};