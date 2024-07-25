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

// TLE CODE...............


// class Solution {
// public:
//     vector<int> countSmaller(vector<int>& nums) {
//         vector<int>ans;

//         int n = nums.size();

//         for(int i=0;i<n;i++){
//             int c = 0;
//             for(int j=i+1;j<n;j++){
//                 if(nums[i] > nums[j])c++;
//             }ans.push_back(c);
//         }
//         return ans;
//     }
// };