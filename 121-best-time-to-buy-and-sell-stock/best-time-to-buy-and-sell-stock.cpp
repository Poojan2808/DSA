class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0,p;
        int buy=prices[0];
        for(int i=0;i<prices.size();i++){
          if(prices[i]<buy) buy=prices[i];
                 p=prices[i]-buy;

                 if(p>max) max=p;
               
            
        }
        return max;
    }
};