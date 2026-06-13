#include<bits/stdc++.h>

using namespace std;
class Solution {
public:

    string decode(string &s, int &i) {
        string result = "";
        while(i < s.length() && s[i] != ']') {
            if(s[i] >= '0' && s[i] <= '9') {
                int num = 0;
                while(i < s.length() && s[i] >= '0' && s[i] <= '9') {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i++; 
                string temp = decode(s, i);
                i++; 
                for(int j = 0; j < num; j++) {
                    result += temp;
                }
            }
            else {
                result += s[i];
                i++;
            }
        }
        return result;
    }


    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }
};