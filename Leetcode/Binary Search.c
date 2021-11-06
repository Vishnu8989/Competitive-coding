int search(int* d, int a, int target){
    int left = 0;
    int right = a-1,pivot;
    while(left<=right){
        pivot = left + (right - left) / 2;
        if(d[pivot]==target){
               return pivot;
           }
        else if(target<d[pivot]){
            right = pivot-1;
        }
        else{
            left = pivot+1;
        }
    }
    return -1;
}
