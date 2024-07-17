
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
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int len = prices.size()-1;

        int mini = prices[0];

        for(int i=1;i<=len;i++){
            maxi = max(maxi,prices[i]-mini);
            mini = min(mini,prices[i]);
        } return maxi;
    }
};