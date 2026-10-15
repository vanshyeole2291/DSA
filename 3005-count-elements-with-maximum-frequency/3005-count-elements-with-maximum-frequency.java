class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int n:nums){
            map.put(n,map.getOrDefault(n,0)+1);
        }
        int m=0,ans=0;
        for(int n:map.keySet()){;
            m=Math.max(m,map.get(n));
        }
        for(int n:map.keySet()){;
            if(map.get(n)==m){
                ans+=map.get(n);
            }
        }
        return ans;
    }
}