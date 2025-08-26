class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m=matrix.size();
       int n=matrix[0].size();

       int q=n-1;

       int p=0;
       while(p<m && q>=0){
            if(matrix[p][q]==target){
                return 1;
            }
            else if(matrix[p][q]<target){
                p++;
            }
            else{
                q--;
            }
       }
        return 0;
    }
};