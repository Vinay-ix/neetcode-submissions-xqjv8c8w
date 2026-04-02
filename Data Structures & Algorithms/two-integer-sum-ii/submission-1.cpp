class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //  int n = nums.size();
        // for(int i =0;i<n-1;i++){
        //     for(int j = i+1;j<n;j++){
        //         int  sum = nums[i]+nums[j];
        //         if(sum==target){
        //             return {i+1,j+1};
        //         }
        //     }
        // }
        // return {404};
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                return {left + 1, right + 1}; // 1-based index
            }
            else if (sum < target) {
                left++;   // need bigger sum
            }
            else {
                right--;  // need smaller sum
            }
        }

        return {};
    }
};
