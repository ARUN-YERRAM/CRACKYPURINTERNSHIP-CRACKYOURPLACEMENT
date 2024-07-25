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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        do{
            if(find(ans.begin(),ans.end(),nums) == ans.end()){
                ans.push_back(nums);
            }
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};