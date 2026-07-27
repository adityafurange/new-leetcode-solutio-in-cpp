class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.size()<=2)
        return nums.size();
        else
        return 1 << static_cast<int>(floor(log2(nums.size())) + 1);
        
    }
};