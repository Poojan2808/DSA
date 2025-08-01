class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I') sum+=1;
           
            else if(s[i]=='V'){
                    if(i>0 && s[i-1]=='I') sum+=3;
                    else sum+=5;
                
            }
            else if(s[i]=='X'){
                    if(i>0 && s[i-1]=='I') sum+=8;
                    else sum+=10;
                
            }
            else if(s[i]=='L'){
                
                    if( i>0 && s[i-1]=='X') sum+=30;
                    else sum+=50;

            }
            else if(s[i]=='C'){
                    if(i>0 && s[i-1]=='X') sum+=80;
                    else sum+=100;
                
            }
            else if(s[i]=='D'){
                    if(i>0 && s[i-1]=='C') sum+=300;
                    else sum+=500;
                
            }
            else if(s[i]=='M'){
                    if(i>0 && s[i-1]=='C') sum+=800;
                    else sum+=1000;
                
            }
         
           
        }
        return sum;
    }
};