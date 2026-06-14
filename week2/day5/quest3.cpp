#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        string ans = "";

        for (int i = 0; i < n; i++) {

            // -------- Odd length palindrome --------
            int j = i, k = i;
            while (k >= 0 && j < n && s[k] == s[j]) {
                if (j - k + 1 > ans.size())
                    ans = s.substr(k, j - k + 1);
                k--;
                j++;
            }

            // -------- Even length palindrome --------
            k = i;
            j = i + 1;
            while (k >= 0 && j < n && s[k] == s[j]) {
                if (j - k + 1 > ans.size())
                    ans = s.substr(k, j - k + 1);
                k--;
                j++;
            }
        }
        return ans;
    }
};
