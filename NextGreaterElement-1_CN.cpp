#include <bits/stdc++.h> 
vector<int> nextGreaterElement(int n, vector<int> A, int m, vector<int> B) {
    // Write your code here.
   stack<int> st;
   vector<int> nextgreater(B.size());


   for(int i = B.size() -1 ; i >=0; --i){
       while(!st.empty() && st.top() <= B[i]){
           st.pop();
       }
       if(st.empty()){
           nextgreater[B[i]] = -1;
       }else{
           nextgreater[B[i]] = st.top();
       }

       st.push(B[i]);
   }
   vector<int>result;
   for(int a :A){
       result.push_back(nextgreater[a]);

   }
 return result;
}
