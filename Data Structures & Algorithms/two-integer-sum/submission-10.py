class Solution:
    def get_index(self, nums: List[int], value1, value2) -> List[int]:
        val1index, val2index = 0, 0
        for i in range(len(nums)):
            if (nums[i] == value1):
                val1index = i
                break
        for i in range(len(nums)):
            if (i == val1index and value1==value2):
                continue
            if(nums[i] == value2):
                val2index = i
        return [min(val1index, val2index), max(val1index, val2index)]

    def twoSum(self, nums: List[int], target: int) -> List[int]:
        copy = nums[:]
        nums.sort()
        num_len = len(nums)
        i, j = 0, num_len - 1
        while i < j: 
            check = nums[i] + nums[j]
            if check == target:
                return self.get_index(copy, nums[i], nums[j])
            elif check < target:
                i+=1
            else:
                j-=1
