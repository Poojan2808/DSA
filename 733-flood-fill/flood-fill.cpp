class Solution {
public:
    void dfs(int row,int col,vector<vector<int>> &image,vector<vector<int>> &ans,int icolor,int drows[],int dcols[],int color){
            ans[row][col] = color;
            int n = image.size();
            int m = image[0].size();

            for(int i=0;i<4;i++){
                int r = row + drows[i];
                int c = col + dcols[i];

                if(r>=0 && r<n && c>=0 && c<m && image[r][c] == icolor && ans[r][c] !=color){
                    dfs(r,c,image,ans,icolor,drows,dcols,color);

                }
            }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        int icolor = image[sr][sc];
        int drows[] = {-1,0,1,0};
        int dcols[] = {0,1,0,-1};
        dfs(sr,sc,image,ans,icolor,drows,dcols,color);
        return ans;
    }
};