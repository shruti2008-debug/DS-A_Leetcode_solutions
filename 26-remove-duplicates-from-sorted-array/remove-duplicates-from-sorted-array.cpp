class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        
        
        int temp=nums[0];

        for(int i=1;i<nums.size();i++){
            
                if(nums[i]!=temp){
                    nums[k]=nums[i];
                    
                    temp=nums[i];
                    k=k+1;

                }
            
        }
        return k;
        
    }
};