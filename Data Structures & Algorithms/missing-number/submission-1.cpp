class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor_all =  0;
        for(int i =0;i<=nums.size();i++){
            xor_all = xor_all^i;
        }
        for(int i=0;i<nums.size();i++){
            xor_all ^= nums[i];
        }
        return xor_all;
    }
};
