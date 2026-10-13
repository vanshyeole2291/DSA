class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        HashSet<Character> set = new HashSet<>();
        for(char ch : brokenLetters.toCharArray()){
            set.add(ch);
        }
        int c=0;
        String[] word = text.split(" ");
        for(String t : word){
            boolean valid =true;
            for(char ch : t.toCharArray()){
                if(set.contains(ch)){
                    valid=false;
                    break;
                }
            }
            if(valid==true)c++;
        }
        return c;
    }
}