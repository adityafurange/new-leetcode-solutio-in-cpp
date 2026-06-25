class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
       int i=1;
       int buy=0;
       int sell=0;
       while(i!=prices.size())
       {
        if(prices[i-1]<prices[i])
       {  buy=prices[i-1];
    sell=sell+(prices[i]-prices[i-1]);
    i++;
    }
    else
    i++;


       } 
       return sell;
    }
};