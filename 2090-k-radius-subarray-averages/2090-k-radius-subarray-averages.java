class Solution {
    public int[] getAverages(int[] nums, int k) {
        int[] ans = new int[nums.length];
        Arrays.fill(ans,-1);
        if(k==0){
            return nums;
        }
        int l=0,r=0;
        long sum=0;
        int w=2*k+1;
        while(r<nums.length){
            sum+=nums[r];
            
            if(r-l+1==w){
                ans[r-k]=(int)(sum/w);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return ans;
    }
}