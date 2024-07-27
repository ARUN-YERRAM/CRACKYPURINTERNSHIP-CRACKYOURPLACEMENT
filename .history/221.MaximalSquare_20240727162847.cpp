class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        if(mat.empty() || mat[0].empty())return 0;
        int n = mat.size();
        int m  = mat[0].size();
        int maxi = 0;

        vector<vector<int>>ans(n+1,vector<int>(m+1,0));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(mat[i-1][j-1] == '1'){
                    ans[i][j] = min({ans[i-1][j],ans[i][j-1],ans[i-1][j-1]})+1;
                    maxi = max(maxi,ans[i][j]);
                }
            }
        }return maxi*maxi;
    }
};