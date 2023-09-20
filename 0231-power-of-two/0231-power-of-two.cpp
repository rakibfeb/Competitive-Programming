class Solution {
public:
    bool power(int n, double x){
        if(n == 1) return 1;
        if(x>n) return 0;
        if(x == n) return 1;
       
        
        
        return power(n,x*2);
        
    }
    bool isPowerOfTwo(int n) {
      return  power(n,2);
    }
};