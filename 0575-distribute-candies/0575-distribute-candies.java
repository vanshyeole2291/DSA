class Solution {
    public int distributeCandies(int[] candyType) {
       HashSet<Integer> set = new HashSet<>();
       for(int x: candyType){
        set.add(x);
       } 
       int s =Math.min(set.size(),candyType.length/2);
       return s;
       
    }
}