class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long c=0;
        for(char ch:s){
            if(isalpha(ch))
            c+=1;
            else
            c*=(ch-'0');
        }
        for(int i=s.length()-1;i>=0;i--){
            k=k%c;
            if(k==0&&isalpha(s[i])){
                return string(1,s[i]);
            }
            if(isalpha(s[i]))
            c-=1;
            else
            c=c/(s[i]-'0');
        }
        return "";
    }
};