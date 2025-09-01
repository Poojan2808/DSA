class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;

        string ans = "";
        string temp = "";
        int flag = 0;

        while (left <= right) {
            if (s[left] != ' ') {
                temp += s[left];
                flag = 1;
            } else {
                if (flag == 1) {  // word ended
                    if (!ans.empty()) ans = temp + " " + ans;
                    else ans = temp;
                    temp = "";
                    flag = 0;
                }
            }
            left++;
        }

        // add the last word
        if (!temp.empty()) {
            if (!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
        }

        return ans;
    }
};
