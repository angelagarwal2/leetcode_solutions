class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.length();
        unordered_set<char> letters;
        for(char i:s){
            letters.insert(i);
        }
        int res=0;
        for(char ch:letters){
            int start=s.find(ch);
            int end=s.rfind(ch);
            if(start<end){
            unordered_set<char> st;
            for(int i=start+1;i<end;i++)
            st.insert(s[i]);
            res+=st.size();
            }
        }
        return res;
    }
};