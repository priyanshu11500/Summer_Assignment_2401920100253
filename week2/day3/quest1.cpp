#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
     int n=haystack.size();
     int m=needle.size();
     if (m==0) return -1;
     int i=0;
     int j=0;
     int idx=0;
     while(i<n&&j<m)
     {
        if(haystack[i]==needle[j]){
            if(j==0)idx=i;
            j++;
           if(j==m)return idx;
           i++;
        }
        else
        {
         j=0;
         i=idx+1;
         idx=i;
        }
      } 
      return -1;
    }
};
