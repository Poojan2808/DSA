class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low = 0;
       int high = nums.size()-1;
       int mid =1;
       int ans = nums.size();

       

       while(low<=high){
         mid = (low + high) / 2;
       
            if(nums[mid] == target) {
                return mid;
            };
            if(nums[mid] > target){
                high = mid-1 ;
                ans = mid ;
            }
            else{
                low = mid + 1;
            }
       }    
           return ans;
       }
       
};