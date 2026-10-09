class Solution {
public:
   
   void Dfs( int i ,int j ,int m,int n,vector<vector<char>>& grid ,vector<vector<int>>& visited){
    if(visited[i][j])return;
    visited[i][j]=1;
        if(i-1>=0 && grid[i-1][j]=='1') Dfs(i-1,j,m,n,grid,visited);
        if(i+1<m && grid[i+1][j]=='1') Dfs(i+1,j,m,n,grid,visited);
        if(j-1>=0 && grid[i][j-1]=='1') Dfs(i,j-1,m,n,grid,visited);
        if(j+1<n && grid[i][j+1]=='1') Dfs(i,j+1,m,n,grid,visited);
   }

    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
             if (grid[i][j]=='1'&&visited[i][j]==0){
                count+=1;
              Dfs(i,j,m,n,grid,visited);
             } 
          }
        }
        return count;

    }
};