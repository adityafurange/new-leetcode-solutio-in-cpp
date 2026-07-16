class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> ad;

      
        for (int x : nums) {
            ad[x]++;
        }

        int sum = 0;

       
        for (auto p : ad) {
            if (p.second == 1) {
                sum += p.first;
            }
        }

        return sum;
    }
};