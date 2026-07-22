class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        my_list = [0 for _ in range(26)]
        for i in range(len(s)):
            index_1 = ord(s[i]) - ord('a')
            index_2 = ord(t[i]) - ord('a')
            my_list[index_1] += 1
            my_list[index_2] -= 1

        for num in my_list:
            if num != 0:
                return False
        return True
