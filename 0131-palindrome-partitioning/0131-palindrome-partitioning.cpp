class Solution {
public:
bool isPalin(string s,int start,int end)
{
    while(start<=end)
    {
        if(s[start++]!=s[end--])
        return false;
    }
    return true;
}
void func(int ind,string s,vector<string>& path,vector<vector<string>>& res)
{
    if(ind==s.size())
    {
        res.push_back(path);
        return;
    }
    for(int i=ind;i<s.size();++i)
    {
        if(isPalin(s,ind,i)){
            path.push_back(s.substr(ind,i-ind+1));
            func(i+1,s,path,res);
            path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        func(0,s,path,res);
        return res;
    }
};