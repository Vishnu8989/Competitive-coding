

void rotate(int* nums, int numsSize, int k){
    k = k%numsSize;
    int l=0;
    int r = numsSize-1;
    for(int i=0;i<numsSize;i++){
        printf(" %d",nums[i]);
    }
    while(l<r){
        int temp = nums[l];
        nums[l]=nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
    for(int i=0;i<numsSize;i++){
        printf(" %d",nums[i]);
    }
    l=0;
    r = k-1;
    while(l<r){
        int temp = nums[l];
        nums[l]=nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
    l=k;
    r = numsSize-1;
    while(l<r){
        int temp = nums[l];
        nums[l]=nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
}
