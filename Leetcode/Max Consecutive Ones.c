int findMaxConsecutiveOnes(int* nums, int numsSize){
    int max=0;
    int i=0;
    while(i<numsSize){
        int lmax=0;
        while(nums[i]){
            printf("\nComparing %d",i);
            lmax++;
            if(lmax>max){
                max=lmax;
            }
            if(i==numsSize-1){
                break;
            }
            i++;
        }
        i++;
    }
    return max;
}
