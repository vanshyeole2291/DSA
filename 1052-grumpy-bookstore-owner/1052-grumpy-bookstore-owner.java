class Solution {
    public int maxSatisfied(int[] customers, int[] grumpy, int minutes) {
        int l=0,r=0,sum=0,extra=0,ans=0;
        for(int i=0;i<grumpy.length;i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        while(r<grumpy.length){
            if(grumpy[r]==1){
                ans+=customers[r];
            }
            if(r-l+1 == minutes){
                extra= Math.max(extra,ans);
                 if(grumpy[l]==1){
                    ans-=customers[l];
                }
                l++; 
            }
            r++;
        }
        return sum + extra;
    }
}