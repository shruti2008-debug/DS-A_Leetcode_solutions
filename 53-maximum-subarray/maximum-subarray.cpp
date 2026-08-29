
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  cs=0;
        int max_sum=INT_MIN;;

        for(int i:nums){
            cs+=i;
            max_sum=max(max_sum,cs);

            if(cs<0){
                cs=0;
            }
        }
        return max_sum;
        
    }
};