// REVERSE STRING 

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        //using extra memory
    //    vector<char>p;
    //     int n=s.size();
    //     for(int i=n-1;i>=0;i--){
    //         p.push_back(s[i]);
    //     }
    //     s=p;

    //using stack
    //  int n=s.size();
    //  stack<char>st;
    //  int i=0;
    //  while(i<n){
    //     st.push(s[i]);
    //     i++;
    //  }
    //   i=0;
    //  while(i<n){
    //     s[i]=st.top();
    //     st.pop();
    //     i++;
    //  }
   
   //optimal approach in 0(1)space

   int n=s.size();
   int i=0;
   int j=n-1;
   while(i<=j){
     char temp=s[i];
     s[i]=s[j];
     s[j]=temp;
        i++;
        j--;
   }
    
    }
};