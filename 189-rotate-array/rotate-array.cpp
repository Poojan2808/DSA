class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>t;
        int n1 = nums.size();

        k = k%n1;

        for(int i=(n1-k);i<n1;i++){
            t.push_back(nums[i]);
        }

        for(int i = n1-1 ; i>=k ;i--){
            nums[i] = nums[i-k];
        }
        int j=0;

        for(int i= 0; i<k; i++){
            nums[i] = t[j++];
        }

       
       
    }
};