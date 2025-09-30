class Solution {
public:
  bool dfs(int node,int c,vector<int> &color,vector<vector<int>> &adj){
        color[node] = c;

        for(auto it: adj[node]){
            if(color[it] == -1){
                if(dfs(it,!c,color,adj) == false) return false;
            }
            if(color[it] == c){
                return false;
            }
        }
        return true;
  }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<int> color(n,-1);

        for(int i=0;i<n;i++){
            if(color[i] == -1){
                if(dfs(i,0,color,graph) == false) return false;
            }
        }
        return true;
    }
};
