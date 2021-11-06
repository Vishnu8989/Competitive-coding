class Solution {
public:
    bool searchMatrix(vector<vector<int>>& d, int target) {
        int a = d.size();
        int b = d[0].size();
        int low = 0;
        while(low<a){
            if(target>d[low][b-1]){
                low++;
            }
            else{
                break;
            }
        }
        if(low<a){
            for(int i=0;i<b;i++){
                if(target == d[low][i]){
                    return true;
                }
            }
        }
        return false;
    }
};
