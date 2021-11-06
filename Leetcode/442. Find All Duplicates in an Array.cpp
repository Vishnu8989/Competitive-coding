class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> d;
        int s = nums.size();
        int temp[100002] = {0};
        for(int i=0;i<s;i++){
            temp[nums[i]]++;
            if(temp[nums[i]]>1){
                d.push_back(nums[i]);
            }
        }
        return d;
    }
};
