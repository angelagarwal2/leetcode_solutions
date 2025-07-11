class Solution {
public:
    string makeGood(string s) {
        string res="";
        for(char ch:s)
        {
            if(res.size()>0&&(ch+32==res.back() || ch-32==res.back()))
            res.pop_back();
            else
            res.push_back(ch);
        }
        return res;
    }
};