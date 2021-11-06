class Solution {
public:
       vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i = 1 ; i < numRows ; i++)
        {
            vector<int> nums;
            nums.push_back(1);
            for(int j = 0 ; j < i - 1 ; j++)
            {
                nums.push_back(res[i-1][j] + res[i-1][j+1]);
            }
            nums.push_back(1);
            res.push_back(nums);
        }
        return res;
    }
};
