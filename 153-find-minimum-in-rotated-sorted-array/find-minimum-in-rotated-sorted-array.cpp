class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=5000;
        int low = 0;
        int high = nums.size()-1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[low] <= nums[mid]){

                if(nums[low] < min){
                     min = nums[low];
                }
               
                low = mid+1;
            }
            else{
                if(min > nums[mid]){
                     min = nums[mid];
                }
               
                high = mid - 1;
            }
        }
        return min;
    }
};