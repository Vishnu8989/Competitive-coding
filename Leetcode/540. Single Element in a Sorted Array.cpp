class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int a = nums.size();
        int l = 0;
        int r = a-1;
        if(a==1){
            return nums[a-1];
        }
        if(nums[r]!=nums[r-1]){
            return nums[r];
        }
        if(nums[l]!=nums[l+1]){
            return nums[l];
        }
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            else if(mid%2==0&&nums[mid]==nums[mid-1]){
                r = mid;
            }
            else if(mid%2==1&&nums[mid]==nums[mid+1]){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        return nums[l];
    }
};
