class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort(reverse = True)
        for i in range(1, len(nums)):
            num0 = nums[i - 1]
            num1 = nums[i]
            if num0 == num1:
                return True
        return False
