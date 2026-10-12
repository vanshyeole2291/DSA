class Solution {
    public int findNumbers(int[] nums) {
        int count =0;

        for(int num : nums){
            String s = String.valueOf(num);
            int digit = s.length();
            if(digit %2==0){
                count++;
            }
        }
        return count;
    }
}