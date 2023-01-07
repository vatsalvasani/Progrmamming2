int Solution::solve(vector<int> &A, int B) {
    int max = INT_MIN,sum=0;
    for(int i = 0;i<B;i++)
    {
        sum+=A[i];
    }
    if(sum>=max)
    {
        max = sum;
    }
    int k = A.size()-1;
    int i = B-1;
    while(i>=0)
    {
        sum=sum-A[i]+A[k];
        if(sum>=max)
        {
            max=sum;
        }
        i--;k--;
    }
    
    return max;
}