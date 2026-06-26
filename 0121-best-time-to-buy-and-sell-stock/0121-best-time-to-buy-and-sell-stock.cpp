class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices[0];
        int p=0;
        for(int i=0;i<prices.size();i++){
            int diff=prices[i]-n;
            p=max(p,diff);
            n=min(n,prices[i]);
        }
        return p;
    }
};