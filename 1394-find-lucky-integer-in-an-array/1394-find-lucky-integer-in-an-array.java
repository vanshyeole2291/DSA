class Solution {
    public int findLucky(int[] arr) {
        HashMap<Integer,Integer> map =  new HashMap<>();
        for(int n:arr){
            map.put(n,map.getOrDefault(n,0)+1);
        }
        int f=0,s=0;
        for(int x : map.keySet()){
            if(x==map.get(x)){
                f = Math.max(f,x);
            }
        }
        if(f==0){
            return -1;
        } 
        return f;
    }
}