// Using Bianry Search

#include <bits/stdc++.h> 
bool isPossibleSolution(unsigned long long int mid,vector<int> time,int m,int n)
{
    unsigned long long int totaltime = 0;
    unsigned long long int daycount = 1;
    for(int i = 0; i < m; i++)
    {
        if(totaltime + time[i] <= mid)
        {
            totaltime += time[i];
        }
        else
        {
            daycount++;
            if(daycount>n || time[i] > mid)
            {
                return false;
            }
            totaltime = time[i];
        }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	unsigned long long int s = 0;
    unsigned long long int sum = 0;
    for(int i = 0; i < m; i++)
    {
        sum = sum + time[i];
    }
    unsigned long long int e = sum;
    unsigned long long int ans = -1;
    unsigned long long int mid = s+((e-s)/2);
    while(s<=e)
    {
        
        if(isPossibleSolution(mid,time,m,n))
        {
            ans = mid;
            e = mid -1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s+((e-s)/2);
    }
    return ans;
}
