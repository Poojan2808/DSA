class Solution {
public:
    int firstUniqChar(string s) {
        vector<pair<char,int>>p;

        for(int i=0;i<s.size();i++){
            int found = 0;
            for(auto &v:p){
                if(v.first == s[i]){
                    v.second++;
                    found = 1;
                }
            }
            if(!found){
                p.push_back({s[i],1});
            }
        }

        for(int i=0;i<s.size();i++){
            for(auto &v : p) {
                if(v.first == s[i] && v.second == 1) {
                    return i;  // original index
                }
            }
        }
        return -1;
    }
};