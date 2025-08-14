class Solution {
public:
    string largestGoodInteger(string num) {
        string res="";
        for(int i=0;i<num.size()-2;i++){
            string a=num.substr(i,3);
            if(a[0]==a[1]&&a[1]==a[2])
            res=max(res,a);
        }
        return res;
    }
};