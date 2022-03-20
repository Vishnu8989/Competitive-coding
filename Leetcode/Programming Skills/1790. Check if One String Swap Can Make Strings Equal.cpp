class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int a1 = s1.size();
        int a2 = s2.size();
        if(a1!=a2){
            return false;
        }
        int count=0;
        char t1,t2,t3,t4;
        for(int i=0;i<a1;i++){
            if(s1[i]!=s2[i]){
                if(count==0){
                    t1 = s1[i];
                    t2 = s2[i];
                }
                t3 = s1[i];
                t4 = s2[i];
                count++;
            }
            if(count>2){
                return 0;
            }
        }
        if(count==0) return true;
        if(t1==t4 && t2==t3){
            return 1;
        }
        return 0;
    }
};
