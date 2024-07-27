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
    bool isPalindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++,j--;
        } return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i<=j){
            if(s[i] == s[j]){
                i++,j--;
            } else{
                return (isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1)); 
            }
        } return true;
    }
};