class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set<int>s(nums.begin(),nums.end());

        int n=nums.size();
        int m=s.size();

        if(m==n){
            return false;
        }else{
            return true;
        }
        
    }
};