class Solution {
    public int pivotIndex(int[] nums) {
        int sum=0;
        int lf_sum=0;
        for(int n:nums){
            sum+=n;
        } 

        for(int i=0;i<nums.length;i++){
            int r_sum=sum-lf_sum-nums[i];
            if(lf_sum==r_sum){
                return i;
            }
            lf_sum +=nums[i];
        }    
        return -1;    
   }
}