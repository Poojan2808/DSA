class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>>q;
        int count = 0;
        int vis[n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                    
                }
                else{
                    vis[i][j] = 0;
                }
                if(grid[i][j]==1) count++;
            }
        }

        int tm = 0;
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        int cnt = 0;

        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();

            tm = max(tm,t);

            for(int i=0;i<4;i++){
                int r = row + drow[i];
                int c = col + dcol[i];

                if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==1 && vis[r][c]==0){
                    q.push({{r,c},t+1});
                    vis[r][c] = 2;
                    cnt++;
                }
            }

            
        }
        if(cnt != count) return -1;
            return tm;
    }
};