class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int sum =0;
        int m1= Integer.MIN_VALUE;
        int m2= Integer.MAX_VALUE;
        int sum2=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            sum2+=nums[i];
            if(sum2<m2){
                m2 = Math.min(m2,sum2);
            }
            if(sum2>0){
                sum2=0;
            }
            if(sum>m1){
               m1= Math.max(m1,sum);
            }
            if(sum<0){
                sum=0;
            }
        }
        return Math.max(m1,Math.abs(m2));
    }
}