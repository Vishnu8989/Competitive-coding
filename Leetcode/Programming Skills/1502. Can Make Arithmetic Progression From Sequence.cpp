class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int a = arr.size();
        int diff = arr[1]-arr[0];
        int i=1;
        while(i<a-1){
            if((arr[i+1]-arr[i])!=diff){
                return 0;
            }
            i++;
        }
        return 1;
    }
};
