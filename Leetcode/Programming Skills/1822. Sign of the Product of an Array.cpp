class Solution {
public:
    int arraySign(vector<int>& nums) {
        int s =0;
        int a = nums.size();
        for(int i=0;i<a;i++){
            if(nums[i]<0){
                s++;
            }
            if(nums[i]==0){
                return 0;
            }
        }
        if(s%2==0){
            return 1;
        }
        return -1;
    }
};
