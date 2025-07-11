class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string say=countAndSay(n-1);
        string res="";
        for(int i=0;i<say.length();i++){
            char ch=say[i];
            int c=1;
            while(i<say.length()-1&&say[i]==say[i+1])
            {
                c++;
                i++;
            }
            res+= to_string(c)+string(1,ch);
        }
        return res;
    }
};