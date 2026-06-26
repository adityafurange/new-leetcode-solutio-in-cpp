class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {

        if(nums.size() < 2)
            return nums.size();

        int pre_diff;
        int curr_diff = nums[1] - nums[0];

        int c = (curr_diff != 0) ? 2 : 1;

        for(int i = 2; i < nums.size(); i++)
        {
            pre_diff = nums[i] - nums[i - 1];

            if((pre_diff > 0 && curr_diff <= 0) ||
               (pre_diff < 0 && curr_diff >= 0))
            {
                c++;
                curr_diff = pre_diff;
            }
        }

        return c;
    }
};