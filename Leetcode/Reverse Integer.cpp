class Solution {
public:
    int reverse(int x) {
        if(x>=2147483647||x<=-2147483648){
            return 0;
        }
        int neg =0;
        if(x<0){
            x=x/(-1);
            neg=1;
        }
        long int n = 0;
        while(x>0){
            n = (n*10)+x%10;
            x=x/10;
        }
        if(neg==1){
            n=n*-1;
        }
        if(n>2147483647||n<-2147483648){
            return 0;
        }
        return n;
    }

};
