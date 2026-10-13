class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> set1=new HashSet<>();
        HashSet<Integer> set2= new HashSet<>();
        for(int x:nums2){
            set1.add(x);
        }
        for(int x:nums1){
            if(set1.contains(x)){
                set2.add(x);
            }
        }
        int num[] = new int[set2.size()];
        int res=0;
        for(int x : set2){
            num[res++]=x;
        }
        return num;
    }
}