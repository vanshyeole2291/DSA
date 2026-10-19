class Solution {
    public int minimumRecolors(String blocks, int k) {
        int l =0,r=0;
        int c=0,ans=Integer.MAX_VALUE;

        while(r<blocks.length()){
            if(blocks.charAt(r)=='W'){
                c++;
            }
            if(r-l+1 == k){
                ans=Math.min(ans,c);
                if(blocks.charAt(l)=='W'){
                  c--;
                }
                l++;
            }
            r++;
        }
        return ans;
    }
}