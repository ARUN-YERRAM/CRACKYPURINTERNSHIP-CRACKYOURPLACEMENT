class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int>r;
        vector<int>c;
        int k = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        vector<vector<int>>dup(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                dup[i][j] = mat[i][j];

        for(;k<r.size();k++){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i == r[k] || j == c[k]){
                        mat[i][j] = 0;
                    }
                }
            }
        }
    }
};