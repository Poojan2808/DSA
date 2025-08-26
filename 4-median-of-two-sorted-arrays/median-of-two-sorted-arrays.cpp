class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int count = 0;
        int n = (nums1.size() + nums2.size());

        int in1 = (n/2) - 1;
        int in2 = (n/2);

        int in11 = -1;
        int in22 = -1;

        int i=0;
        int j=0;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                
                
                if(count == in1) in11 = nums1[i];
                if(count == in2) in22 = nums1[i];
                count++;
                i++;
            }
            else{
            
                
                if(count == in1) in11 = nums2[j];
                if(count == in2) in22 = nums2[j];
                j++;
                  count++;
            }
        }
        while(i < nums1.size()){
           
                
                if(count == in1) in11 = nums1[i];
                if(count == in2) in22 = nums1[i];
                i++;
                  count++;
        }

        while(j < nums2.size()){
          
                
                if(count == in1) in11 = nums2[j];
                if(count == in2) in22 = nums2[j];
                j++;
                  count++;
        }

        if(n%2 == 1) return in22;
        return (double)((double)(in11 + in22)) / 2.0;
    }
};