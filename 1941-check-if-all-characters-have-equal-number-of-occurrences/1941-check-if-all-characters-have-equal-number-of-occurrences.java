class Solution {
    public boolean areOccurrencesEqual(String s) {
        HashMap<Character,Integer> map = new HashMap<>();

        for(char c : s.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
        }
        char ch = s.charAt(0);
        int f = map.get(ch);

        for(char c: map.keySet()){
            if(map.get(c)!=f){
                return false;
            }
        }
        return true;
    }
}