class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int l=0;
        int i=0;
        while(!isalpha(s[i])){
            i++;
        }
        while(s[i]!=' '&&i!=s.length()){
            l++;
            i++;
        }
        return l;
    }
};