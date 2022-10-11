// using binary search
#include <bits/stdc++.h> 
int sqrtN(long long int N)
{
  long long int s=0,ans=-1;
  long long int e=N;
  unsigned long long int mid=s+(e-s)/2;
   
   while(s<=e){
       if(mid*mid == N){
           return mid;
       }
       else if(mid*mid<N){
           ans= mid;
           s=mid+1;
       }
       else{
           e=mid-1;
       }
       mid=s+(e-s)/2;
   }
   return ans;
   
}
