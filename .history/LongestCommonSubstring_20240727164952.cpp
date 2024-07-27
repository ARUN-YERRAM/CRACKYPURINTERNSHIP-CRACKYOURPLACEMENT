#include <string>
#include <vector>
#include <algorithm> // for std::max

using namespace std;


// TLE code.................


class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(S1[i] == S2[j]){
                    int c = 0;
                    int k = i;
                    int l = j;
                    while(k<n && l<m && S1[k] == S2[l]){
                        k++,l++;
                        c++;
                    }maxi = max(maxi,c);
                }
            }
        }return maxi == INT_MIN?0:maxi;
    }
};


// optimize code
class Solution {
public:
    int longestCommonSubstr(string S1, string S2, int n, int m) {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        
        int maxi = 0;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (S1[i - 1] == S2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    maxi = max(maxi, dp[i][j]);
                } else
                    dp[i][j] = 0;
            }
        }
        return maxi;
    }
};