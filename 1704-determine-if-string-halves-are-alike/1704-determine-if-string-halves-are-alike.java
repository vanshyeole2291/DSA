class Solution {
    public boolean halvesAreAlike(String s) {
        HashSet<Character> set = new HashSet<>(Arrays.asList('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'));

        int a=0,b=0;
        int n=s.length()/2;
        for(int i=0;i<n;i++){
            if(set.contains(s.charAt(i)))a++;
            if(set.contains(s.charAt(i+n)))b++;
        }
       
        return a==b;
    }
}