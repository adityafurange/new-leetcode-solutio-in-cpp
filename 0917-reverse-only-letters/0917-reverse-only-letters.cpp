class Solution {
public:
    string reverseOnlyLetters(string s) {
        int first = 0;
        int last = s.length() - 1;

        while (first < last) {
            if (!isalpha(s[first])) {
                first++;
            }
            else if (!isalpha(s[last])) {
                last--;
            }
            else {
                swap(s[first], s[last]);
                first++;
                last--;
            }
        }

        return s;
    }
};