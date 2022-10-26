bool possiblemid(vector<int> &boards, int k, int mid)
{
    int sum = 0;
    int count = 1;
    for(int i = 0; i < boards.size(); i++)
    {
        if(sum + boards[i]<=mid)
        {
            sum = sum + boards[i];
        }
        else
        {
            count++;
            if(count>k||boards[i]>mid)
            {
                return false;
            }
            sum = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int sum = 0;
    for(int i = 0; i < boards.size(); i++)
    {
        sum = sum + boards[i];
    }
    int s = 0;
    int e = sum;
    int ans = 0;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(possiblemid(boards,k,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
