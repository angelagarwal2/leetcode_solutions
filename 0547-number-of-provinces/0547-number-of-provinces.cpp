class Solution {
    private:
    void dfs(int i,vector<int> adj[],vector<int>& vis){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<int> adj[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(isConnected[i][j]==1&&i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(v,0);
        int c=0;
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                c++;
                dfs(i,adj,vis);
            }
        }
        return c;
    }
};