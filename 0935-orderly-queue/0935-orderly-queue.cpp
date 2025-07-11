class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.length();
        if(k>1)
        {
            sort(s.begin(),s.end());
            return s;
        }
        string res=s;
        for(int i=1;i<n;i++)
        {
            string temp=s.substr(i)+s.substr(0,i);
            res=min(res,temp);
        }
        return res;
    }
};