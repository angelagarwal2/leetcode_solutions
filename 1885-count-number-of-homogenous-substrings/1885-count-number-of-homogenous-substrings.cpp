class Solution {
public:
int MOD=1e9+7;
    int countHomogenous(string s) {
        int l=0;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(i>0&&s[i]==s[i-1]){
                l+=1;
            }
            else
            l=1;
            res=(res+l)%MOD;
        }
        return res;
    }
};