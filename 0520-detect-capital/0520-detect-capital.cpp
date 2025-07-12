class Solution {
public:
    bool detectCapitalUse(string word) {
        int ccap=0;
        int n=word.size();
        for(char ch:word){
            if(isupper(ch)) ccap++;
        }
        if(ccap==n||ccap==0||(isupper(word[0])&&ccap==1))
        return true;
        return false;
    }
};