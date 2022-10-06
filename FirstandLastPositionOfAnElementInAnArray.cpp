#include <bits/stdc++.h>
int firstoccurrance(vector<int>& arr,int n,int key)
{
    int start = 0;
    int end = n-1;
    int mid = start + ((end - start)/2);
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]>key)
        {
            end = mid - 1;
        }
        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;    
}
int lastoccurrance(vector<int>& arr,int n,int key)
{
    int start = 0;
    int end = n-1;
    int mid = start + ((end - start)/2);
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid]>key)
        {
            end = mid - 1;
        }
        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> result;
    result.first = firstoccurrance(arr,n,k);
    result.second = lastoccurrance(arr,n,k);
    return result;
}
