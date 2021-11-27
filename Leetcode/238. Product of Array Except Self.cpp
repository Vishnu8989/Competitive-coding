class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int num = 1;
        int a = nums.size();
        vector<int> ret;
        int zero=-1;
        for(int i=0;i<a;i++){
            if(nums[i]){
                num = num*nums[i];
            }
            else{
                if(zero==-1){
                    zero=i;
                }
                else{
                    zero==-2;
                    for(int i=0;i<a;i++){
                        ret.push_back(0);
                    }
                    return ret;
                }
            }
        }
        if(zero==-1){
            for(int i=0;i<a;i++){
                if(nums[i]){
                    ret.push_back(num/nums[i]);
                }
                else{
                    ret.push_back(num);
                }
            }
            return ret;
        }
        if(zero>=0){
            for(int i=0;i<a;i++){
                ret.push_back(0);
            }
            ret[zero] = num;
            return ret;
        }
        return ret;
    }
};
