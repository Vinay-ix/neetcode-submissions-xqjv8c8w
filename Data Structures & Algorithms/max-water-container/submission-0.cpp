class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i=0;
        int j = n-1;
        int max1 = 0;
        while(i<j){
            int h = min(heights[i],heights[j]);
            int area =  (j-i)*h;
            max1 = max(max1,area);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max1;
    }
};
