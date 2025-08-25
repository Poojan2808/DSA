class Solution {
public:

    long long cal(vector<int> &arr, int i){
        long long sum = 0;
        for(int k=0;k<arr.size();k++){
            if(arr[k]%i == 0) sum += (arr[k]/i);
            else sum+= (arr[k]/i)+1;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;

        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max = piles[i];
            }
        }

        int low = 1;
        int high = max;
        int ans = INT_MAX;

        while(low <= high){
            int mid = (low + high) / 2;
            if(cal(piles,mid) <= h){
                high = mid - 1;
                if(ans > mid){
                    ans = mid;
                }
            }
            else{
                low = mid + 1;
            }

        }
        return ans;
    }
};