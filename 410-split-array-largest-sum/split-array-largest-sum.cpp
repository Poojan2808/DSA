class Solution {
public:

    int cal(vector<int>&arr , int a){
        int day = 1;
        int sum = 0;

        for(int i=0;i<arr.size();i++){
            if(sum + arr[i] <= a){
                sum += arr[i];
            }
            else{
                sum = arr[i];
                day++;
            }
        }
        return day;
    }
    int splitArray(vector<int>& nums, int k) {
        int max = 0;
        int sum =0 ;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>max) max = nums[i];
            sum+= nums[i];
        }

        int low = max;
        int high = sum;

        while(low <= high){
            int mid = (low + high) /2;
            if(cal(nums,mid) <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};