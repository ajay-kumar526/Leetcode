class Solution {
public:
   
 void bfs(int i,vector<int>&visited,vector<vector<int>>& adjList){
      
       queue<int>q;
       visited[i]=1;
       q.push(i);
         while(!q.empty()){
          int node =q.front();
          q.pop();
            for(int i=0;i<adjList[node].size();i++){
                int neighbour=adjList[node][i];
                if(!visited[neighbour]){
                visited[neighbour]=1;
                q.push(neighbour);
                }
            }
         }
     }

    int findCircleNum(vector<vector<int>>& isConnected) {
    // Convert adj matrix into adj list then apply bfs or dfs and use count variable  for counting
    int V =isConnected.size();
    vector<vector<int>>adjList(V+1);    // first time ->this line cause error out of bound
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(isConnected[i][j]==1 && i!=j){
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
        }
    }
    int count=0;
     vector<int>visited(V,0); // V+1 never cause any problem so use it 
     for(int i=0;i<V;i++){
        if(!visited[i]){
            count++;
            bfs(i,visited,adjList);
        }
     }
    
    return count;
    }
};
// start from 1,  mark it ->visited 