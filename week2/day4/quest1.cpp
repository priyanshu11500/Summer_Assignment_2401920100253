#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    void reverseString(string &s, int left, int right){

        while(left < right){

            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    string reverseWords(string s) {

        int n = s.size();
        int start = 0;

        for(int i = 0; i <= n; i++){

            if(i == n || s[i] == ' '){

                reverseString(s, start, i - 1);

                start = i + 1;
            }
        }

        return s;
    }
};