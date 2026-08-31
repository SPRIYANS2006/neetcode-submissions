class Solution {
public:
    int maxArea(vector<int>& height) {

        // BRUTE FORCE APPROACH

        // int n = height.size();
        // int MW =0;
        // for(int i =0 ; i< n; i++){
        //     for(int j= i+1; j< n; j++){
        //         int water = (j-i) * (min(height[i], height[j]));
        //         MW = max(MW, water);
        //     }
        // }
        // return MW;

        // TWO SUM
        int n = height.size();
        int i = 0;
        int j = n-1;
        int ans =0;

        while(i < j){
            int hei = min(height[i],height[j]);
            int width = j-i;
            int water = hei * width;
            ans = max(ans,water);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};