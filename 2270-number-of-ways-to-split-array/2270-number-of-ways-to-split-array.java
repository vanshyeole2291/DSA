class Solution {
    public int waysToSplitArray(int[] nums) {
        long sum=0;
        for(int i:nums){
            sum+=i;
        }
        int c=0;
        long f=0;
        for(int i=0;i<nums.length-1;i++){
            sum-=nums[i];
            f+=nums[i];
            if(f>=sum){
                c++;
            }
        }
        return c;

    }
}