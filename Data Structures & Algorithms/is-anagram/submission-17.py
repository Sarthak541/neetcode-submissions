class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): 
            return False
        
        
        anamap = {}
        for char in s:
            anamap[char] = anamap.get(char, 0) + 1
    
        for char in t:
            if anamap.get(char, 0) == 0:
                return False
            anamap[char] -= 1
        return True
        