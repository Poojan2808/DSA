class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      
        stack<string>s1;
        for(int i=0 ; i<tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                s1.push(tokens[i]);
            }
            else{
                if(tokens[i] == "+"){
                   string b = s1.top();
                   s1.pop();
                     string a = s1.top();
                     s1.pop();

                    s1.push(to_string(stoi(a) + stoi(b)));
                   
                }
                else if(tokens[i] == "-"){
                      string b = s1.top();
                      s1.pop();
                     string a = s1.top();
                     s1.pop();

                    s1.push(to_string(stoi(a) - stoi(b)));
                   
                }
                else if(tokens[i] == "*"){
                      string b = s1.top();
                      s1.pop();
                     string a = s1.top();
                     s1.pop();

                    s1.push(to_string(stoi(a) * stoi(b)));
                   
                }
                else if(tokens[i] == "/"){
                      string b = s1.top();
                      s1.pop();
                     string a = s1.top();
                     s1.pop();

                    s1.push(to_string(stoi(a) / stoi(b)));
                   
                }
            }
        }   

        return stoi(s1.top());
    }
};