class Solution {
public:
    string reverseWords(string s) {
     /*    stringstream ss(s);
        string token="";
        string res="";
        while(ss>>token){
            reverse(begin(token),end(token));
            res+=token+" ";
        }
        return res.substr(0,res.length()-1); */
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                int j=i;
                while(j<n&&s[j]!=' '){
                    j++;
                }
                 reverse(begin(s)+i,begin(s)+j);
                 i=j;
            }
        }
        return s;
    }
};