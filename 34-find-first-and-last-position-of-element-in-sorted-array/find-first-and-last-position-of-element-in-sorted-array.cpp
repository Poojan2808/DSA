class Solution {
public:

    int first(vector<int> &arr,int target){
        int low = 0;
        int first1 = -1;
        int high = arr.size()-1;

        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] == target) {
                first1 = mid;
                high = mid-1;
            }
            else if(arr[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return first1;
    }

    int last(vector<int> &arr,int target){
        int low = 0;
        int last1 = -1;
        int high = arr.size()-1;

        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] == target) {
                last1 = mid;
                low = mid+1;
            }
            else if(arr[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return last1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first2 = first(nums,target);

        if(first2 == -1) return {-1,-1};
        int last2 = last(nums,target);
        return {first2,last2};
    }
};