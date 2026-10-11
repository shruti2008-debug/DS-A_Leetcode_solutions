class Solution {
public:
    int divide(int dividend, int divisor) {
        
        long long count=0;
        long long temp1=dividend;
        long long temp2=divisor;

        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }

        if(temp1<0){
            temp1=-temp1;
        }
        if(temp2<0){
            temp2=-temp2;

        }

        while(temp1 >= temp2){
            long long temp = temp2;
            long long multiple = 1;

            while(temp1 >= (temp << 1)){
                temp <<= 1;
                multiple <<= 1;
            }

            temp1 -= temp;
            count += multiple;
        }

        if((divisor<0) != (dividend<0)){
            count=-count;

        }
        
        if(count<INT_MIN){
            return INT_MIN;
        }else if(count>INT_MAX){
            return INT_MAX;
        }else{
            return count;
        }
    }
};