class Solution {
    public int[] sumZero(int n) {
        int d[] = new int[n];
        int k = 1;
        for(int i=0;i<n-1;i=i+2){
            d[i] = k;
            d[i+1] = -1*k;
            k++;
        }
        return d;
    }
}
