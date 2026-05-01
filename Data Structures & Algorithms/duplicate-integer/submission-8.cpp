class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> v;
        for(int i = 0; i < nums.size(); i++) {
            if(v.count(nums[i])) {
                return true;
            } else {
                v.insert(nums[i]);
            }
        }
        return false;
    }
};