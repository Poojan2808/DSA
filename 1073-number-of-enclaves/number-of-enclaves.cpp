class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
    int m = grid[0].size();
    queue<pair<int,int>>q;

    vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
		        if(i==0 || i== n-1 || j==0 || j==m-1){
			        if(grid[i][j] == 1){
				        vis[i][j] = 1;
                        q.push({i,j});
                    }   
                }
            }
        }

        while(!q.empty()){
            int nrow = q.front().first;
            int ncol = q.front().second;
            q.pop();
            int drow[] = {-1,0,+1,0};
            int dcol[] = {0,+1,0,-1};

            for(int i=0;i<4;i++){
                int row = nrow + drow[i];
                int col = ncol + dcol[i];

                if(row>=0 && row<n && col>=0 && col<m && vis[row][col]==0 && grid[row][col]==1){
                    vis[row][col] = 1;
                    q.push({row,col});
                }
            }
        } 

        int count = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    count++;
                }
            }
        }

        return count;

        
    }
};