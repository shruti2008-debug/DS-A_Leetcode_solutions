class Solution {
public:
    double myPow(double x, int n) {
        
        long long binForm=n;
        long double ans=1.0;
        long double base=x;
        
    
        if(binForm<0){
            base=1.0/base;
            binForm=-binForm;

        }

        while(binForm>0){
            if(binForm%2!=0){
                ans=ans*base;
            }
            base*=base;
            binForm/=2;
        }

        return ans;
    }
        
    
};