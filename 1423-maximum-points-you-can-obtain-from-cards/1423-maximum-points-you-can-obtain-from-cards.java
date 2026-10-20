class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int sum = 0;
        for(int n:cardPoints){
            sum+=n;
        }
        int n = cardPoints.length;
        if(n==k) return sum;
        int l=0,r=0,s=0,m=Integer.MAX_VALUE;
        int t = n-k;
        while(r<n){
            s +=cardPoints[r];
            if(r-l+1==t){
                m = Math.min(m,s);
                s-=cardPoints[l];
                l++;
            }
            r++;
        }
        return sum-m;
    }
}