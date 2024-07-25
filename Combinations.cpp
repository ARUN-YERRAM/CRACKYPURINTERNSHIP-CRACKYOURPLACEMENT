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
    vector<vector<int>>ans;
    void Recrse(int n,int k,int i,vector<int>&t){
        // if(i>n)return;
        if(t.size()==k){
            ans.push_back(t);
            return;
        }
        if(i>n)return;

        t.push_back(i);
        Recrse(n,k,i+1,t);
        t.pop_back();
        Recrse(n,k,i+1,t);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>t;
        Recrse(n,k,1,t);
        return ans;
    }
};