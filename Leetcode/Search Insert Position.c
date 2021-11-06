

int searchInsert(int* d, int a, int target){
    int left = 0;
    int right = a-1;
    int mid;
    while(left<=right){
        mid = left+(right-left)/2;
        if(d[mid]==target){
            return mid;
        }
        else if(d[mid]>target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return right+1;
}
