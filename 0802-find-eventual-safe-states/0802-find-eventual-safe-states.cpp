class Solution {
public:
bool dfs(int node,vector<vector<int>>& graph,vector<int> &vis,vector<int> &visPath,vector<int>& check){
      vis[node]=1;
      visPath[node]=1;
      for(int i:graph[node]){
          if(!vis[i]){
              if(dfs(i,graph,vis,visPath,check)){
                check[node]=0;
                return true;
              }
          }
          else if(visPath[i])
          {
            check[node]=0;
            return true;
          }
      }
      check[node]=1;
      visPath[node]=0;
      return false;
  }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> vis(V,0);
        vector<int> visPath(V,0);
        vector<int> check(V,0);
        vector<int> ans;
       for(int i=0;i<V;i++){
           if(!vis[i]) dfs(i,graph,vis,visPath,check);
       }
       for(int i=0;i<V;i++){
        if(check[i]==1){
            ans.push_back(i);
        }
       }
       return ans;
    }
};