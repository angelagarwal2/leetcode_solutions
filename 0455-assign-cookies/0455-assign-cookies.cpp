class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cg=0;
        int cs=0;
        while(cg<g.size()&&cs<s.size())
        {
            if(g[cg]<=s[cs])
            {
                cg++;
            }
            cs++;
        }
        return cg;
    }
};