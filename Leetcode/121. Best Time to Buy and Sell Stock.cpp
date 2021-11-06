class Solution {
public:
    int maxProfit(vector<int>& d) {
        int a = d.size();
        int min = 99999;
        int max=0;
        for(int i=0;i<a;i++){
            if(d[i]<min){
                min=d[i];
            }
            else if(d[i]-min>max){
                max=d[i]-min;
            }
        }
        return max;
    }
};
