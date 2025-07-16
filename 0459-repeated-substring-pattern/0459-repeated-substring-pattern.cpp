class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        /* string ss = s + s;
        return ss.substr(1, ss.length() - 2).find(s) != string::npos; */
        int n=s.length();
        int times;
        string pattern;
        string newstr;
        for(int l=n/2;l>=1;l--){
            if(n%l==0){          //tc: o(2 root n)
                times=n/l;
                pattern=s.substr(0,l);     //tc: o(n)
                newstr="";
                while(times--){
                    newstr+=pattern;     //tc: o(n)
                }
                if(newstr==s)
                return true;
            }
        }
        return false;
    }
};

//tc: o(n root n)