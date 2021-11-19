int hammingDistance(int x, int y){
    int a = x^y;
    int count = 0;
    while(a/2>0){
        a%2;
        if(a%2){
            count++;
        }
        a = a/2;
    }
    if(a%2==1){
        count++;
    }
    return count;
}
