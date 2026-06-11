//LONGEST COMMON PREFIX
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int n = strs.size();
        string a;
        string b;
        a=strs[0];
        b=strs[n-1];

        for(int i=0;i<min(a.length(),b.length());i++){
            if(a[i]==b[i]){
                ans.push_back(b[i]);
            }
            else break;
        }
        return ans;
    }
};
