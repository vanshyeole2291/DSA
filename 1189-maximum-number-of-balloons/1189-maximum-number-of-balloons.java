class Solution {
    public int maxNumberOfBalloons(String text) {
        HashMap<Character,Integer> map = new HashMap<>();
        for(char c : text.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
        }

        int b = map.getOrDefault('b',0);
        int a = map.getOrDefault('a',0);
        int l = map.getOrDefault('l',0);
        int o = map.getOrDefault('o',0);
        int n = map.getOrDefault('n',0);
        int ans  = Math.min(a,b);
        ans  = Math.min(ans,l/2);
        ans  = Math.min(ans,o/2);
        ans  = Math.min(ans,n);
        return ans;
        
    }
}