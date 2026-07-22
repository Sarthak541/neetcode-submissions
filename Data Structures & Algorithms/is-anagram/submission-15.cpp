class Solution {
public:
    bool isAnagram(string s, string t) {
        size_t ssize = s.size();
        if (ssize != t.size()) {
            return false;
        }

        array<int, 26> counts;
        for (size_t i = 0; i < 26; i++) {
            counts[i] = 0;
        }

        for (size_t i = 0; i < ssize; i++) {
            int char_pos1 = s[i] - 'a';
            int char_pos2 = t[i] - 'a';
            counts[char_pos1] += 1;
            counts[char_pos2] -= 1;
        }

        for (size_t i = 0; i < 26; i++) {
            if (counts[i] != 0) {
                return false;
            }
        }
        return true;



    }
};
