#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();

        for(int i=0;i<n;i++){
            bool flag=0;
            for(int j=0;j<m;j++){
                if(ransomNote[i]==magazine[j]){
                    magazine[j]=' ';
                    flag=1;
                    break;
                }
            }
            if(!flag)return false;
        }
        return true;
    }
};