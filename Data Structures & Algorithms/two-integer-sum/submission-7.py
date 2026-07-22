class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)-1):
            for j in range(i+1, len(nums)):
                num1 = nums[i]
                num2 = nums[j]
                if (num1 + num2) == target:
                    return [i, j]
                