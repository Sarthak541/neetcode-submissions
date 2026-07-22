class Solution {
public:
    bool isAnagram(string s, string t) {
        size_t ssize = s.size();
        size_t tsize = t.size();
        if (ssize != tsize) {
            return false;
        }

        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        for (size_t i = 0; i < ssize; i++) {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        return smap == tmap;

    }
};
