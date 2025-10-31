class Solution {
public:

    void swap1(vector<int>& a,vector<int>& b,int c,int d){
        if(a[c] > b[d]){
            swap(a[c],b[d]);
        }
}

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int t = (n+m);
    int gap = (t/2) + (t%2);



    while(gap > 0){
        int left = 0;
        int right = left+gap;
        while(right < t){

            if(left < m && right >= m){
                     swap1(nums1,nums2,left,right-m);
            }
            else if(left>=m){
                    swap1(nums2,nums2,left-m,right-m);
            }
            else if(right<m){
                swap1(nums1,nums1,left,right);
            }
           left++;
           right++;
        }
        if(gap == 1) break;
        gap = (gap/2) + (gap%2);
    }
      for(int i = 0; i < n; i++){
            nums1[m + i] = nums2[i];
        }
    }
};