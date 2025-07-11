class Solution {
public:
void solve(vector<vector<int>>& ans,vector<int>& path,int ind,int k,int sum)
{
    if(k==0&&sum==0)
    {
        ans.push_back(path);
        return;
    }
    if(k==0&&sum!=0)
    {
        return;
    }
    for(int i=ind;i<=9;i++)
    {
        if(i>sum) break;
        path.push_back(i);
        solve(ans,path,i+1,k-1,sum-i);
        path.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(ans,path,1,k,n);
        return ans;
    }
};