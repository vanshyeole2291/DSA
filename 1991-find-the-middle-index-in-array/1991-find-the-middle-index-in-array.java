class Solution {
    public int findMiddleIndex(int[] nums) {
        int sum =0;
        int ans=0;
        for(int i : nums){
            sum+=i;
        }
        int l=0,r=0;

        for(int i=0;i<nums.length;i++){
            r = sum-l-nums[i];
            if(r==l){
                return i;
            }
            l+=nums[i];
        }
        return -1;
    }
}