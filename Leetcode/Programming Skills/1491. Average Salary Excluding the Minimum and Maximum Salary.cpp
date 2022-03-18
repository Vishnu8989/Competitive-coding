class Solution {
public:
    double average(vector<int>& s) {
        double sum;
        int a = s.size();
        int max = s[0];
        int min = s[a-1];
        for(int i=0;i<a;i++){
            sum+=s[i];
            if(max<s[i]){
                max = s[i];
            }
            if(s[i]<min){
                min = s[i];
            }
        }
        cout<<sum<<'\n';
        cout<<max<<'\n';
        cout<<min<<'\n';

        sum = sum-max-min;
        sum = sum/(a-2);
        return sum;
    }
};
