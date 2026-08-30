#include<climits>
#include<algorithm>
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_Val=INT_MAX;;
        int max_Val=INT_MIN;
        int min_Index,max_Index;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_Val){
                max_Val=nums[i];   
                max_Index=i+1;
            }
            if(nums[i]<min_Val){
                min_Val=nums[i];
                min_Index=i+1;
            }
        }


        int n=nums.size();
        
        if(min_Index>max_Index){
            swap(min_Index,max_Index);
        }
        int s1=max_Index;
        int s2=n-min_Index+1;
        int s3=min_Index+(n-max_Index+1);
 

        return min({s1,s2,s3});

    }
};