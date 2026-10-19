class Solution {
    public int maxVowels(String s, int k) {
        Set<Character> set = Set.of('a','e','i','o','u');
        int c =0,ans=0;
        int l=0,r=0;
        while(r<s.length()){
            
                if(set.contains(s.charAt(r))){
                    c++;
                }
               
                if(r-l+1==k){
                ans = Math.max(ans,c);
                if(set.contains(s.charAt(l))){
                    c--;
                }
                l++;
            }
            r++;
        }
        return ans;
    }
}