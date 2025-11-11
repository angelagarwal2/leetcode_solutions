class Solution {
    private:
    void bfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>& vis){
         vis[row][col]=1;
         queue<pair<int,int>> q;
         q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
         while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    if (abs(delrow) + abs(delcol) != 1) { 
                         continue;
                     }
                    int neighrow=r+delrow;
                    int neighcol=c+delcol;
                    if(neighrow>=0 && neighrow<n && neighcol>=0 && neighcol<m&& grid[neighrow][neighcol]=='1' && !vis[neighrow][neighcol]){
                        vis[neighrow][neighcol]=1;
                        q.push({neighrow,neighcol});
                    }
                }
            }
         }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int c=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    c++;
                    bfs(row,col,grid,vis);
                }
            }
        }
        return c;
    }
};