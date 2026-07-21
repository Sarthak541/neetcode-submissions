class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> conv = unordered_set<int>(nums.begin(), nums.end());
        return conv.size() < nums.size();
    }
};