class Solution {
    public int minSteps(String s, String t) {
        int[] f = new int[26];

        for(int i=0;i<s.length();i++){
            f[s.charAt(i)-'a']++;
            f[t.charAt(i)-'a']--;
        }
        int c =0;
        for(int n:f){
            if(n>0){
                c+=n;
            }
        }
        return c;
    }
}