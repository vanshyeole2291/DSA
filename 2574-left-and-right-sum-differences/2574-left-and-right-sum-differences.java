class Solution {
    public int[] leftRightDifference(int[] nums) {
            int n = nums.length;
            int sum=0;
            for(int i:nums){
                sum+=i;
            }
            int[] ans = new int[n];
            int l=0;
    
            for(int i=0;i<n;i++){
                int r = sum-l-nums[i];
                ans[i] = Math.abs(l-r);
                l+=nums[i]; 
            }
            return ans;
    }
}