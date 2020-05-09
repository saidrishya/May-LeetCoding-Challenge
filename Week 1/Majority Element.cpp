class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int size = floor(nums.size()/2);
        
        std::nth_element(nums.begin(), nums.begin() + size, nums.end() );
        return nums[floor(nums.size()/2)];
        
        
    }
};
