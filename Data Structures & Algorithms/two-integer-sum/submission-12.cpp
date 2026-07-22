class Solution {
public:
    vector<int> get_index(vector<int>& nums, int num1, int num2) {
        int index1, index2;
        index1 = index2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == num1) {
                index1 = i;
                break;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i == index1) {
                continue;
            }
            if (num2 == nums[i]) {
                index2 = i;
                break;
            }
        }
        return {min(index1, index2), max(index1, index2)};
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy(nums);
        sort(copy.begin(), copy.end());
        int i,j;
        j = (i = 0) + nums.size() - 1;
        while (i < j){
            int check = copy[i] + copy[j];
            if (check == target) {
                return get_index(nums, copy[i], copy[j]);
            }
            else if (check < target) {
                i++;
            }
            else {
                j--;
            }
        }
    }
};
