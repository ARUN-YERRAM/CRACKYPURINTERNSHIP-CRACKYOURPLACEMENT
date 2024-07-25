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

// Optimized code

class Solution {
public:
        int getIdx(vector<int>&l,int key,int st,int end){
        while(st <= end){
            int mid = st + (end-st)/2;
            
            if(key <= l[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }return st;
    }
    vector<int> countSmaller(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return {};
        
        vector<int>l;
        vector<int>ans(n,0);
        
        l.push_back(arr[n-1]);
        
        for(int i=n-2;i>=0;i--){
            int idx = getIdx(l,arr[i],0,l.size()-1);
            ans[i] = idx;
            l.insert(l.begin()+idx,arr[i]);
        }return ans;
    }
};