class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(),greater<int>());
        int a = nums.size();
        for(int i=0;i<a;i++){
            cout<<nums[i]<<'\n';
        }
        int j=0;
        while(j<a-2){
            int k = form_triangle(nums[j],nums[j+1],nums[j+2]);
            if(k>0){
                return k;
            }
            j++;
        }
        return 0;
        }
    int form_triangle(int a,int b,int c){
        if(a+b>c && b+c>a && c+a>b){
            return a+b+c;
        }
        return 0;
    }
};
