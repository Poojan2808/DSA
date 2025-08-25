class Solution {
public:

    int cal(vector<int>& arr, int a) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += ceil((double)arr[i] / a);
    }
    return sum;
}

    int smallestDivisor(vector<int>& nums, int threshold) {
        int max = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max) max = nums[i];
        }

        int low = 1;
        int high = max;
        int ans = 0;

        while(low <= high){
            int mid = (low + high) / 2;

            if(cal(nums,mid) <= threshold ){
                high = mid - 1;
                ans = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
        
    }
};