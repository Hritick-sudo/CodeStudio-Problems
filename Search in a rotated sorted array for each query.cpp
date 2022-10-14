int pivotIndex(int* arr, int n)
{
    int s = 0;
    int e = n - 1;
    while(s<e)
    {
        int mid = s + ((e-s)/2);
        if(arr[mid] > arr[e])
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
int binarysearch(int* arr, int s, int e ,int key)
{
    int ans = -1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            return ans;
        }
        else if(arr[mid]>key)
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
int search(int* arr, int n, int key) {
    int pivot = pivotIndex(arr,n);
    if(key >= arr[pivot] && key <= arr[n-1])
    {
        return binarysearch(arr, pivot,n-1,key);
    }
    else
    {
        return binarysearch(arr, 0,pivot-1,key);
    }
}
