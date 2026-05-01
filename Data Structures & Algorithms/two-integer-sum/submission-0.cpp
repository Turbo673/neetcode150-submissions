class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2 || nums.size() > 1000) return {};
        if (target < -10000000 || target > 10000000) return {};
        unordered_map<int, int> set;
        int index = 0;
        for (auto iterator = nums.begin(); iterator != nums.end(); iterator++) {
            int curr = *iterator;
            int needed = target - curr;
            if (set.find(needed) != set.end()) return {set[needed], index};

            set[curr] = index;
            index++;
        }
        return {};
    }
};
