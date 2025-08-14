class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int p=0;
        int max=0;;
        while(i<nums.size()){
            if(nums[i]!=0){ 
                p++;
            }
            else{
                p=0;
            }
            if(p>max) max=p;
            i++; 
        }
        return max;
    }
};