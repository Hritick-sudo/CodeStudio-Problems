#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
   sort(a.begin(),a.end());
   vector <int> result;
   for(int i=n-k;i<a.size();i++){
       result.push_back(a[i]);
   }
   return result;
}
