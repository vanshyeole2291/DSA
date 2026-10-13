class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        HashSet<Character> set = new HashSet<>();
        for(char ch: allowed.toCharArray()){
            set.add(ch);
        }
    int c=0;
        for(String w : words){
            boolean valid =true;
            for(char ch : w.toCharArray()){
                if(!set.contains(ch)){
                    valid=false;
                }
                
            }
            if(valid ==true){
                    c++;
                }
        }
        return c;
    }
}