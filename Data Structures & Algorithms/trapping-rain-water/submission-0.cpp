class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int lm = 0, rm = 0;
        int ans = 0;
        while (l < r) {
            if (height[l] < height[r]) {
                if (height[l] >= lm) {
                    lm = height[l]; // Update left max
                } else {
                    ans += (lm - height[l]); // Calculate water
                }
                l++;
            } else {
                if (height[r] >= rm) {
                    rm = height[r]; // Update right max
                } else {
                    ans += (rm - height[r]); // Calculate water
                }
                r--;
            }
        }

        return ans;
    }
};
