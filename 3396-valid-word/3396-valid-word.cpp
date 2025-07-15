class Solution {
public:
    bool isValid(string word) {
        int n=word.length();
        if(n<3) return false;
        int v=0,c=0;
        string vowelList = "aeiouAEIOU";
        for(char ch:word)
        {
            if(isalpha(ch)){
                if(vowelList.find(ch)!=string::npos){
                    v++;
                }
                else{
                    c++;
                }
            }
            else if(!isdigit(ch)) return false;
        }
        return v>=1&&c>=1;
    }
};