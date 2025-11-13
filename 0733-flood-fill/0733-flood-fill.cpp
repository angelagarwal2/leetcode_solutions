class Solution {
    private: 
    void dfs(int sr,int sc,vector<vector<int>>& ans,vector<vector<int>> image,int newC,int delrow[],int delcol[],int ini){
        ans[sr][sc]=newC;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nr=sr+delrow[i];
            int nc=sc+delcol[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&& image[nr][nc]==ini && ans[nr][nc]!=newC)
            {
                dfs(nr,nc,ans,image,newC,delrow,delcol,ini);
            }        
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor=image[sr][sc];
        vector<vector<int>> ans=image;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        dfs(sr,sc,ans,image,color,delrow,delcol,iniColor);
        return ans;
    }
};