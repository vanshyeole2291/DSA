class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n= prices[0];
      int p=0;
      for(int i=1;i<prices.size();i++){
        int d =  prices[i]-n;
        p=max(p,d);
        n=min(n,prices[i]);
      }
      return p;
    }
};