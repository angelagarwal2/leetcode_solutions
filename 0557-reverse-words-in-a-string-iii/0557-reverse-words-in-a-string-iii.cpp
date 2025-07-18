class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token="";
        string res="";
        while(ss>>token){
            reverse(begin(token),end(token));
            res+=token+" ";
        }
        return res.substr(0,res.length()-1);
    }
};