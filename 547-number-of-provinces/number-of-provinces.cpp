class Solution {
public:
    void dfs(int i, vector<int> adj[], vector<int>& vis) {
        vis[i] = 1;
        for (auto it : adj[i]) {
            if (!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();  
        vector<int> adjLs[v];

        // Build adjacency list
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j);
                }
            }
        }

        int count = 0;
        vector<int> vis(v, 0);

        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                count++;
                dfs(i, adjLs, vis);
            }
        }

        return count;
    }
};
