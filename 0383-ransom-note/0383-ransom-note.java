class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character,Integer> map = new HashMap<>();

        for(char c : magazine.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
        }
        for(char n : ransomNote.toCharArray()){
            if(!map.containsKey(n) || map.get(n)<=0){
                return false;
            }
            map.put(n,map.getOrDefault(n,0)-1);
        }
        return true;
    }
}