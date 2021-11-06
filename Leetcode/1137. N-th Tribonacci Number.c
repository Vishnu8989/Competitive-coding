int tribonacci(int n){
    double a0=0,a1=1,a2=1,an;
    if(n==0){
        return a0;
    }
    if(n==1){
        return a1;
    }
    if(n==2){
        return a2;
    }
    for(int i=3;i<=n;i++){
        an = a0+a1+a2;
        // printf("\n%lf=%lf+%lf+%lf\t",an,a2,a1,a0);
        a0 = a1;
        a1 = a2;
        a2 = an;
        // printf("%f+%f+%f",an,a2,a1,a0);
    }
    return an;
}
