// VALID PALINDROM

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    //**********************brute force requires extra space**********************************


    // bool Check(string s){
    //     int i = 0;
    //     int j = s.size() - 1;

    //     while(i < j){
    //         if(s[i] != s[j]) return false;
    //         i++;
    //         j--;
    //     }
    //     return true;
    // }

    // bool isPalindrome(string s) {
    //     string dummy = "";

    //     for(int i = 0; i < s.size(); i++){

    //         if((s[i] >= 'A' && s[i] <= 'Z') ||
    //            (s[i] >= 'a' && s[i] <= 'z') ||
    //            (s[i] >= '0' && s[i] <= '9'))
    //         {
    //             dummy.push_back(tolower(s[i]));
    //         }
    //     }

    //     return Check(dummy);

    //********************optimal for these question*************************************

    bool isPalindrome(string s) {

        int i = 0;
        int j = s.size() - 1;

        while(i < j) {

            while(i < j && !isalnum(s[i])) {
                i++;
            }

            while(i < j && !isalnum(s[j])) {
                j--;
            }

            if(tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};