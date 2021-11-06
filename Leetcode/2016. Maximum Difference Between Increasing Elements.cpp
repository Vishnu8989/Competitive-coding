class Solution {
public:
    int maximumDifference(vector<int>& d) {
        int a = d.size();
        int max=-1;
        int l=0,r=1;
        while(r!=a){
            int temp = d[r]-d[l];
            if(temp>max&&temp>0){
                max = temp;
            }
            else if(temp<=0){
                l=r;
            }
            r++;
        }
        return max;
    }

};
