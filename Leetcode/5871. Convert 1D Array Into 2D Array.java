class Solution {
    public int[][] construct2DArray(int[] orig, int m, int n) {
        int a = orig.length;
        if(m*n!=a){
            return new int[0][0];
        }
        int[][] d = new int[m][n];
        int k=0,j=0;
        for(int i=0;i<a;i++){
            d[k][j] = orig[i];
            j++;
            if(j==n){
                j=0;
                k++;
            }
        }
        return d;
    }
}
