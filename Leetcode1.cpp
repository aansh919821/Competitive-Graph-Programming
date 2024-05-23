class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int m = nums[0], n = nums.size();
        for(int i = 1;i<nums.size();i++){
            m = m ^ nums[i];
        }
        return m;
    }
};