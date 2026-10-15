class Solution {
    public int numIdenticalPairs(int[] nums) {
        HashMap<Integer,Integer> map= new HashMap<>();

        for(int n : nums){
            map.put(n,map.getOrDefault(n,0)+1);
        }
        int ans=0;
        for(int n : map.keySet()){
            int f = map.get(n);
            ans+=f*(f-1)/2;
        }
        return ans;
    }
}