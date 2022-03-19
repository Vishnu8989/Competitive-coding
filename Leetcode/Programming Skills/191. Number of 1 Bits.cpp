class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n >= 1){
            if((n & 1)==1){
                count+=1;
            }
            n = n>>1;
        }
        return (int)count;
    }
};
