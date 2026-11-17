class Solution {
    public int maxProfit(int[] prices) {
       int n = prices[0];
       int ans=0;
       for(int i=1;i<prices.length;i++){
        int d = prices[i]-n;
        ans = Math.max(ans,d);
        n=Math.min(n,prices[i]);
       }
       return ans;
    }
}