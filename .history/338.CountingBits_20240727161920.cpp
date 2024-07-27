

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


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
            ans[i] = ans[i >> 1] + (i & 1);
            
        return ans;
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);

        for(int i=1;i<=n;i++){
            int c = 0;
            // int j = i;
            for(int j=0;j<32;j++){
                if((i >>j ) & 1 == 1)c++;
            }ans[i] = c;
        }return ans;
    }
};