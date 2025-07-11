class Solution {
public:
    bool isValid(string s) {
       
        vector<char>v;

        for(int i=0;i<s.size();i++){
        if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(v.empty()) return 0;
            else{
                if((s[i]==')' && v.back()=='(') || (s[i]==']' && v.back()=='[') || (s[i]=='}' && v.back()=='{')){
                    v.pop_back();
                }
                else return 0;
            }
        }
        else if(s[i]=='(' || s[i]=='[' || s[i]=='{') v.push_back(s[i]);
        }
        if(v.empty()) return 1;
        return 0;
    }
};