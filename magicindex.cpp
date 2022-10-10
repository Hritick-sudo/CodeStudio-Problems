int magicIndex(vector<int> a, int n) {
	int result = -1;
    for(int i = 0; i < n ; i++)
    {
        if(a[i] == i)
        {
            return i;
        }
    }
    return result;
}
