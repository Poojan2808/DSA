class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        vector<int> res;
        stack<int>s;

        for(int i=nums2.size()-1;i>=0;i--){
           while (!s.empty() && s.top() <= nums2[i]) {
                s.pop();
            }

            // if stack empty => no greater element
            if (s.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(s.top());
            }

            // push current element
            s.push(nums2[i]);
        


        }
         reverse(ans.begin(), ans.end());
        int n = nums2.size();
        for(int i=0;i<nums1.size();i++){
             auto it = find(nums2.begin(), nums2.end(), nums1[i]);
             int index = distance(nums2.begin(), it);
             res.push_back(ans[index]);


        }
         

        return res;
    }
};