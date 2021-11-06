
int maxSubArray(int* d, int a){
    int max = d[0];
    int lmax = 0;
    for (int i=0;i<a;i++){
        if(lmax<0){
            lmax= 0;
        }
        lmax = lmax+d[i];
        max = lmax>max?lmax:max;
    }
    return max;
}
