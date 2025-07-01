class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') c++;
            if(c>max) max=c;
            if(s[i]==')') c--;
        }
        return max;
    }
};