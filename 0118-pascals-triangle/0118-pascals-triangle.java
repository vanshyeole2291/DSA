class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> tr = new ArrayList<>();

        for(int i=0;i<numRows;i++){
            List<Integer> row = new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    row.add(1);
                }else{
                    List<Integer> pr = tr.get(i-1);
                    row.add(pr.get(j-1)+pr.get(j));
                }
            }
            tr.add(row);
        }
        return tr;
    }
}