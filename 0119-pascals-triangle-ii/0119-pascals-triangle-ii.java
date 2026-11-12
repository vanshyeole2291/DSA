class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> row = new ArrayList<>();
        long val=1;
        for(int i=1;i<=rowIndex+1;i++){
            row.add((int)val);
            val = val*(rowIndex+1-i)/i;

        }
        return row;
    }
}