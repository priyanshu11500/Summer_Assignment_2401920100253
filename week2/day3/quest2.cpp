#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();

        int i = 0;
        int j = 0;
        int counter = 0;
        while(i < n && j < m){

            if(s[i] == t[j]){
                i++;
                j++;
                counter++;
            }
            else j++;
        }
        if(counter == n) return 1;
        return 0;
    }
};