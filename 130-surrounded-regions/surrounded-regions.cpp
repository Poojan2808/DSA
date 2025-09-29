class Solution {
public:

    void dfs(vector<vector<char>> &m, vector<vector<int>>&vis,int crow,int ccol,int drow[],int dcol[]){
        int n = m.size();
        int m1 = m[0].size();
        vis[crow][ccol] = 1;

        for(int i=0;i<4;i++){
            int row = crow + drow[i];
            int col = ccol + dcol[i];

            if(row >= 0 && row < n && col >= 0 && col<m1 && !vis[row][col] && m[row][col]=='O'){
                dfs(m,vis,row,col,drow,dcol);
            }


        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};

        vector<vector<int>>v(n,vector<int>(m,0));

        for(int j=0;j<m;j++){
            if(board[0][j] == 'O' && !v[0][j]){
                dfs(board,v,0,j,delrow,delcol);
            }
            if(board[n-1][j] == 'O' && !v[n-1][j]){
                dfs(board,v,n-1,j,delrow,delcol);
            }
        }

        for(int i=0;i<n;i++){
            if(board[i][0] == 'O' && !v[i][0]){
                dfs(board,v,i,0,delrow,delcol);
            }
            if(board[i][m-1] == 'O' && !v[i][m-1]){
                dfs(board,v,i,m-1,delrow,delcol);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};