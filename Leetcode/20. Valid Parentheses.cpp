class Solution {
public:
    bool isValid(string s) {
        char temp;
        stack<char> A;
        char now = 'a';
        int a = s.length();
        if(a%2!=0){
            return false;
        }
        for(int i=0;i<a;i++){
            temp = s[i];
            if(temp == '['){
                now = ']';
                A.push(now);
            }
            else if(temp == '{'){
                now = '}';
                A.push(now);
            }
            else if(temp == '('){
                now = ')';
                A.push(now);
            }
            else{
                if(!A.empty()&&temp==A.top()){
                    A.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(A.empty()){
        return true;
        }
        else{
            return 0;
        }
    }
};
