class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> mp1 = {'a', 'e', 'i', 'o', 'u'};
        int l = 0, r = 0, vowel = 0, maxVowel = 0;
        int n = s.size();


        for (int i = 0; i < k; i++) {
            if (mp1.count(s[i])) vowel++;
        }
        maxVowel = vowel;

        for (r = k; r < n; r++) {
            if (mp1.count(s[r])) vowel++;
            if (mp1.count(s[l])) vowel--;
            l++;
            maxVowel = max(maxVowel, vowel);
        }

        return maxVowel;
    }
};
