class Solution {
    public int maximumDifference(int[] nums) {
        int curr=nums[0];
        int sum=0;
        int ans=-1;
        for(int x :nums){
            if(x<curr){
                curr=x;
            }
            if(x>curr){
                sum=x-curr;
                ans=Math.max(ans,sum);
                sum=0;
            }
            
        }
        return ans;
    }
}