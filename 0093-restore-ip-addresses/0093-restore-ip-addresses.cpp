class Solution {
public:
bool isValid(string s)
{
    if(s[0]=='0') return false;
    if(stoi(s)>255||stoi(s)<0) return false;
    return true;
}
void solve(string s,int ind, int n, int parts,string curr,vector<string>& res)
{
    if(parts==4&&ind==n){
        curr.pop_back();
        res.push_back(curr);
    }
    if(ind+1<=n)
    solve(s,ind+1,n,parts+1,curr+s.substr(ind,1)+".",res);
    if(ind+2<=n&&isValid(s.substr(ind,2)))
    solve(s,ind+2,n,parts+1,curr+s.substr(ind,2)+".",res);
    if(ind+3<=n&&isValid(s.substr(ind,3)))
    solve(s,ind+3,n,parts+1,curr+s.substr(ind,3)+".",res);
}
    vector<string> restoreIpAddresses(string s) {
        int n=s.size();
        if(n>12) return {};
        string curr="";
        int parts=0;
        vector<string> res;
        solve(s,0,n,parts,curr,res);
        return res;
    }
};