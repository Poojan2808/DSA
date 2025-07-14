class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
       
    for(int i=0;i<nums.size();i++){
          int flag = 1;
         for(int j=0 ; j<nums.size();j++){
            if(nums[i] == nums[j] && i!=j){
                flag = 0;
            }
         }

         if(flag==1) return nums[i];
         
        
    }
    return 0 ;
    }
};