class Solution {
public:
    
    void Dfs(int node,vector<vector<int>>&adjList,vector<int>&visited,int destination){
        visited[node]=1;
        for(int i=0;i<adjList[node].size();i++){
            int neighbour= adjList[node][i];
            if(!visited[neighbour]){
                 Dfs(neighbour,adjList,visited,destination);
            }

        }
      
        
   
    
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
          // first we  convert array of edges into adjacency list. 
          vector<vector<int>>adjList(n);
          for(int i=0;i<edges.size();i++){
            int u= edges[i][0];
            int v= edges[i][1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
          }

      // int V=adjList.size();  // //adjList.size() counts only the nodes that have edges.
       vector<int>visited(n,0);
       Dfs(source,adjList,visited,destination);
       return visited[destination];
      
    }
};