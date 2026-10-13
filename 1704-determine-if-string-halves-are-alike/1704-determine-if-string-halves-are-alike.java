class Solution {
    public boolean halvesAreAlike(String s) {
        HashSet<Character> set = new HashSet<>(Arrays.asList('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'));

        int a=0,b=0;
        int n=s.length()/2;
        for(int i=0;i<n;i++){
            if(set.contains(s.charAt(i)))a++;
        }
        for(int i=n;i<s.length();i++){
            if(set.contains(s.charAt(i)))b++;
        }
        if(a==b){
            return true;
        }
        return false;
    }
}