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


// TLE code..............

//User function template for C++

class Solution{   
public:
    bool isTrue(vector<int>&arr,int sum,int n){
        if(sum == 0)return true;
        
        if(n == 0 && sum != 0) return false;
        
        return isTrue(arr,sum,n-1) || isTrue(arr,sum-arr[n-1],n-1);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        
        int n = arr.size();
        int sum = 0;
        for(auto it:arr){
            sum += it;
        }
        if(sum%2 != 0)return false;
        return isTrue(arr,sum/2,n-1);
    }
};


// optimized code..............

class Solution{   
public:
    bool isTrue(vector<vector<int>>&t,vector<int>&arr,int sum,int n){
        if(sum == 0)return true;
        
        if(n <= 0) return false;
        
        if(t[n][sum] != -1)return t[n][sum];
        
        if(arr[n-1] > sum)
            return t[n][sum] = isTrue(t,arr,sum,n-1);

        else return t[n][sum] = (isTrue(t,arr,sum,n-1) || isTrue(t,arr,sum-arr[n-1],n-1));
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int sum = 0;

        for(auto it:arr){
            sum += it;
        }
        if(sum % 2 != 0)return false;

        int n = arr.size();
        vector<vector<int>>t(n+1,vector<int>(sum+1,-1));
        return isTrue(t,arr,sum/2,n);        
    }
};
