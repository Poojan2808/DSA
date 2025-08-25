class Solution {
public:
int cal(vector<int>&arr , int a){
    int day = 1;
    int sum = 0;
    for(int i=0; i<arr.size();i++){
        if((sum + arr[i]) > a){
            day++;
            sum = arr[i];
        }
        else{
            sum += arr[i];
        }
  
    }
    
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int max = 0;
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            if(weights[i] > max){
                max=weights[i];
            }
            sum += weights[i];
        }

        int low = max;
        int n = max;
        long long high = sum;
        int ans = 0;

        while(low <= high){
            int mid = (low + high) /2;

            if(cal(weights,mid) <= days){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};