class Solution {
    void removespaces(string &s)
    {
        string res;
        for(char c:s)
        {
            if(isalnum(c))
            {
                res+=tolower(c);
            }
        }
        s=res;
    }
public:
    bool isPalindrome(string s) {
        removespaces(s);
        string str=s;
        reverse(str.begin(),str.end());
        if(s==str)
        return true;
        else
        return false;
    }
};