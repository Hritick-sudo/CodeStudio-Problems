#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i = 0; i < n;i++)
    {
        for(int j = i + 1; j < n ; j++)
        {
            int s = j+1;
            int e = n-1;
            while(s<e)
            {
                if(arr[i] + arr[j] + arr[s] + arr[e] == target)
                {
                    return "Yes";
                }
                else if(arr[i] + arr[j] + arr[s] + arr[e] > target)
                {
                    e--;
                }
                else
                {
                    s++;
                }
            }
        }
    }
    return "No";
}
