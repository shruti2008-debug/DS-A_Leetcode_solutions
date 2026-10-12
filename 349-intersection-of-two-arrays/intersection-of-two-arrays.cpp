#include<set>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        set<int> s(nums1.begin(),nums1.end());
        set<int> res;
    
        for(int i:nums2){
            if(s.find(i)!=s.end()){
                res.insert(i);

            }
        }
        return vector<int>(res.begin(),res.end());
        
    }
};