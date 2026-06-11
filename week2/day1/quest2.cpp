#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
       int n=s.size();
       for(int i=0;i<n;i++){
          bool ans=0;
           int j=0;
           while(j<n){
            if(s[i]==s[j]&&i!=j){ans=1;break;}
            j++;
           }
           if(ans==0)return i;
       } 
       return -1;
    }
};