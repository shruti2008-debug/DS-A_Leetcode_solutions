class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int max_water=0;

        while(lp<rp){

            int w=rp-lp;
            int h=min(height[lp],height[rp]);

            int curr_water = w * h;;

            max_water=max(max_water,curr_water);

            height[lp]<height[rp] ? lp++ : rp-- ;
        }
        return max_water;
        
    }
};