
#include<bits/stdc++.h>
#include <iostream>   
#include <fstream>      
#include <string>      
#include <vector>      
#include <map>          
#include <unordered_map>
#include <algorithm>    
#include <functional>   
#include <memory>       
using namespace std;



ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);



int main(){
    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        string str;
        cin>>str;
        // vector<string>t1;
        map<int,int>mp;
        // map<string,int>mp;

        vector<int>t1(n,0);
        vector<int>t2(n,0);

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            t1[i] = k;
        }
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            t2[i] = k;
        }
    }
    return 0;
}




class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int top = 0;
        int bot = m-1;

        int left = 0;
        int right = n-1;
        vector<int>ans;
        while(top<= bot && left <= right){
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            } top = top + 1;

            for(int i=top;i<=bot;i++){
                ans.push_back(mat[i][right]);
            } right = right - 1;

            if(top<=bot){
                for(int i=right;i>=left;i--){
                    ans.push_back(mat[bot][i]);
                } bot = bot - 1;
            }
            if(left<=right){
                for(int i=bot;i>=top;i--){
                    ans.push_back(mat[i][left]);
                } left = left + 1;
            }
        } return ans;
    }
};