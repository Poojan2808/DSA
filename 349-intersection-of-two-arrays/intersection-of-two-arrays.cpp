class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
    int i=0;
        while(i<nums1.size()){
            s.insert(nums1[i]);
            i++;
        }
         unordered_set<int>s1;
        i=0;
         while(i<nums2.size()){
            s1.insert(nums2[i]);
            i++;
        }

        unordered_set<int>s3;

        for (int val : s) {
        if (s1.count(val)) {
            s3.insert(val);
        }
    }

        vector<int>ans;

        for(auto v :s3){
            ans.push_back(v);
        }
        return ans;
    }
};