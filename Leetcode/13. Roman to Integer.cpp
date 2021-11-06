class Solution {
public:
    int val(char a){
        if(a=='I'){
            return 1;
        }
        else if(a=='V'){
            return 5;
        }
        else if(a=='X'){
            return 10;
        }
        else if(a=='L'){
            return 50;
        }
        else if(a=='C'){
            return 100;
        }
        else if(a=='D'){
            return 500;
        }
        else if(a=='M'){
            return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        char now , next;
        int a = s.length();
        int num = 0;
        for(int i=0;i<a;i++){
            now = s[i];
            if(i<a-1){
                next  = s[i+1];
            }
            if(now == 'I' && (next == 'V'||next == 'X')){
                num  = num + val(next)-val(now);
                i++;
            }
            else if(now == 'X' && (next == 'L'||next == 'C')){
                num  = num + val(next)-val(now);
                i++;
            }
            else if(now == 'C' && (next == 'D'||next == 'M')){
                num  = num + val(next)-val(now);
                i++;
            }
            else{
                num = num + val(now);
            }
        }
        return num;
    }
};
