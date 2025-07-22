class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(-1);
        ans.push_back(-1);

    int flag=1;
    int j=-1;
    int k=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){

                if(flag){
                    j=i;
                }
                k=i;
                flag=0;

            }
        }

        ans[0]= j;
        ans[1]= k;

        return ans;

        
    }
};