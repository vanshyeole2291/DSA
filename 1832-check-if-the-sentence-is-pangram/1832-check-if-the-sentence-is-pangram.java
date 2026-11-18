class Solution {
    public boolean checkIfPangram(String sentence) {
       int[] f = new int[26];
       if(sentence.length()<26){
        return false;
       }
       for(int i=0;i<sentence.length();i++){
        f[sentence.charAt(i)-'a']++;
       }
       for(int n: f){
        if(n<1){
            return false;
        }
       }
       return true;
    } 
}