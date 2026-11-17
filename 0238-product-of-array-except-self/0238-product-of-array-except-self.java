class Solution {
    public int[] productExceptSelf(int[] nums) {
        int p = 1,s =1;
        int n = nums.length;
        int[] ans = new int[n];
        for(int i=0;i<n;i++){
            ans[i]=p;
            p*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*s;
            s*=nums[i];
        }
        return ans;
    }
}