// Three pointer approach
// we are interested only in shifting 0 towords the left and shifting 2 toward the right , 1s will automatically get shifted to the middle

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int i = 0;
    int mid = 0;
    int k = n - 1;
    
    while ( mid <= k ) {
        if(arr[mid] == 0) {
            swap(arr[i], arr[mid]);
            i++;
            mid++;
        }
       else if(arr[mid] == 1) {
            mid++;
        }
        else if(arr[mid] == 2) {
            swap(arr[mid], arr[k]);
            k--;
        }
    }
}
