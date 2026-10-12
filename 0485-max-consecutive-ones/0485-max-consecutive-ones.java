class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int ans = 0;
        int count=0;
        for(int i: nums){
            if(i==1){
                count++;
                ans=Math.max(ans,count);
            }else if(i!=1){
                count=0;
            }
        }
        return ans;
    }
}