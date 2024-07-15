
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

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    
       long long mini = INT_MAX;
       
       for(int i=0;i<=n-m;i++)
           mini = min(mini,a[i+m-1]-a[i]);
       return mini;
    }   
};