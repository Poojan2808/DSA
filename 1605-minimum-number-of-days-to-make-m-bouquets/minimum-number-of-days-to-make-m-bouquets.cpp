class Solution {
public:

    int cal(vector<int>&arr , int k, int p){
        int ans = 0;
        int count = 0;
        for(int i=0; i<arr.size();i++){
            if(arr[i]<=k){
                count++;
            }
            else{
                ans += (count/p);
                count = 0;
            }
        }
       ans += (count/p);
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int min = INT_MAX;
        int max = INT_MIN;

        for(int i=0;i<bloomDay.size(); i++){
            if(bloomDay[i] > max){
                max = bloomDay[i];
            }
            if(bloomDay[i] < min){
                min = bloomDay[i];
            }
        }

        int low = min;
        int high = max;
        int ans = -1 ;

        while(low <= high){
            int mid = (low + high) / 2;
            if(cal(bloomDay,mid,k) >= m){
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