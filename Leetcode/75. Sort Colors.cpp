class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,on=0;
        int a = nums.size();
        for(int i=0;i<a;i++){
            if(nums[i]==0){
                z++;
            }
            else if(nums[i]==1){
                on++;
            }
        }
        for(int i=0;i<z;i++){
            nums[i] = 0;
        }
        for(int i=z;i<on+z;i++){
            nums[i] = 1;
        }
        for(int i=on+z;i<a;i++){
            nums[i] = 2;
        }
    }
};
