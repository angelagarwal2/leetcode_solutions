class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(0,0,"",n,res);
        return res;
    }
    void dfs(int open,int close,string s,int n,vector<string>&res)
    {
        if(open==close && open+close==n*2){
            res.push_back(s);
            return;
        }
        if(open<n){
            dfs(open+1,close,s+'(',n,res);
        }
        if(close<open)
        {
            dfs(open,close+1,s+')',n,res);
        }
    }
};