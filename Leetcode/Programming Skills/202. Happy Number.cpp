class Solution {
public:
    bool isHappy(int n) {
        int s = n, f=n;
        while(s!=1){
            s = sumofSq(s);
            f = sumofSq(sumofSq(f));
            if(s == f && s != 1) return false;
        }
        return true;
    }
    int sumofSq(int a){
        int ans = 0,r;
        while(a){
            r = a%10;
            ans += r*r;
            a=a/10;
        }
        return ans;
    }
};
