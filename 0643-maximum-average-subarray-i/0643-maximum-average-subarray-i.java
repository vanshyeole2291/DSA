class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum=0;
        double ans=-Double.MAX_VALUE;
        int l=0,r=0;

        while(r<nums.length){
            sum+=nums[r];
            if(r-l+1==k){
                ans=Math.max(ans,sum);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return ans/k;
    }
}