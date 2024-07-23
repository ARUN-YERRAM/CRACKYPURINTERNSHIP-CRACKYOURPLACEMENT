class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        
        sort(a,a+n);
        sort(b,b+n);
        
        int i=0,j=n-1;
        while(i<n && j>=0){
            if((a[i] + b[j]) < k)return false;
            else i++,j--;
        }return true;
    }
};
