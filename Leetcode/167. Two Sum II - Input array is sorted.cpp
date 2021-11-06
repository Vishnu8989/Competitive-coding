class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> d;
        int left = 0,right=numbers.size()-1;
        while(right>left){
            if(numbers[right]+numbers[left]==target){
                d.push_back(left+1);
                d.push_back(right+1);
            }
            if(numbers[right]+numbers[left]>target){
                right--;
            }
            else{
                left++;
            }

        }
        return d;
    }
};
