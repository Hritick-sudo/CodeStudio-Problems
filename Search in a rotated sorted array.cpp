#include <bits/stdc++.h> 
int findpivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = arr.size()-1;
    while(s<e)
    {
        int mid = s + ((e-s)/2);
        if(arr[mid]>=arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int binarysearch(vector<int>& arr, int s, int e, int k )
{
    int ans = -1;
    while(s <= e)
    {
        int mid = s + ((e-s)/2);
        if(arr[mid] == k)
        {
            ans = mid;
            return ans;
        }
        else if(arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = findpivot(arr,n);
    if(k >= arr[pivot] && k<= arr[n-1])
    {
        return binarysearch(arr, pivot, n-1, k );
    }
    else
    {
        return binarysearch(arr, 0, pivot-1, k );
    }
}

