class Solution {
public:
    bool detectCapitalUse(string word) {
        int ccap=0;
        int csma=0;
        int n=word.size();
        for(char ch:word){
            if(isupper(ch)) ccap++;
            if(islower(ch)) csma++;
        }
        if(ccap==n||csma==n||(isupper(word[0])&&ccap==1))
        return true;
        return false;
    }
};