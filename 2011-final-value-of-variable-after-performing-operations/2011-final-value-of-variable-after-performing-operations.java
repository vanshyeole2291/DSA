class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int c=0;

        for(int i=0;i<operations.length;i++){
            if(operations[i].charAt(1)=='+'){
                c++;
            }else{
                c--;
            }
        }
        return c;
    }
}