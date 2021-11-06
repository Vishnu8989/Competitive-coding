class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int a=0;
        int b = op.size();
        for(int i=0;i<b;i++){
            if(op[i][1]=='+'){
                a++;
            }
            else{
                a--;
            }
        }
        return a;
    }
};
