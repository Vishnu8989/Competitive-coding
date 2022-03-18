class Solution {
public:
    int countOdds(int l, int h) {
        int tot = h-l+1;
        if(tot%2==0){
            return tot/2;
        }
        else {
            tot = tot/2;
        }
        if(l%2!=0){
            tot+=1;
        }
        return tot;
    }
};
