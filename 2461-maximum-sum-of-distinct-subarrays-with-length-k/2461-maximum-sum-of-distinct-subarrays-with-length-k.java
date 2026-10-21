class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        HashMap<Integer,Integer> map =  new HashMap<>();

        int l =0,r=0;
        long sum=0;
       long ans=0;
        while(r<nums.length){
            sum+=nums[r];
            map.put(nums[r],map.getOrDefault(nums[r],0)+1);

            if(r-l+1==k){
                if(map.size()==k){
                ans= Math.max(ans,sum);}
                if(map.get(nums[l])==1){
                    map.remove(nums[l]);
                }else{
                    map.put(nums[l],map.get(nums[l])-1);
                }
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return ans;
    }
}