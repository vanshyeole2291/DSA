class Solution {
    public int minStartValue(int[] nums) {
        int sum=0;
        int cur=0;

        for(int n:nums){
            sum+=n;
            cur=Math.min(cur,sum);
        }
        return 1-cur;
    }
}