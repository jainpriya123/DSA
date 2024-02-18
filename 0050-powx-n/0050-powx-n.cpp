class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            return myPow(1/x,abs(n));
        }
        if(x==1 || n==0) return 1;
        if(n==1) return x;
        double even,odd;
        if(n%2 !=0) {
           odd= myPow(x,(n-1)/2);
           return odd*odd*x;
        } 
        else{
            even= myPow(x,n/2);
            return even*even;
        }
        return 0;
    }
};