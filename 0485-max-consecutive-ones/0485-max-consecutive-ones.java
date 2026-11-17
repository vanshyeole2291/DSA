class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int a= 0,ans=0;
        for(int n : nums){
            if(n==1){
                a++;
            }else if(n==0){
                a=0;
            }
            ans = Math.max(ans,a);
        }
        return ans;
    }
}