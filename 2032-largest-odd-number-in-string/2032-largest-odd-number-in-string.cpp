class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.length()-1;
        while(i>=0)
        {
            int n=num[i];
            if(n%2==1) return num.substr(0,i+1);
            i--;
        }
        return "";
    }
};