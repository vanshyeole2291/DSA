class Solution {
    public int largestAltitude(int[] gain) {
        int sum =0;
        int ans=0;
        for(int n : gain){
            sum+=n;
            ans=Math.max(ans,sum);
        }
        return ans;
    }
}