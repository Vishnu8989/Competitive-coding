class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int c1=0,d=0;
        int a = mat.size();
        int b = mat[0].size();
        if(a*b!=r*c){
            return mat;
        }
        vector<vector<int>>vec(r,vector<int>(c, 0));
        // vector<vector<int>>result(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                vec[i][j] = mat[c1][d++];
                if(d==b){
                    d=0;
                    c1++;
                }
        }
        }
        return vec;
    }
};
