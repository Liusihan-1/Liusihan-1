double P(int n, double x)
{
    if(n == 0)
        return 1;
    else if(n == 1)
        return x;
    else if(n>1)
    {
        return ((2*n-1)*P(n-1,x)-(n-1)*P(n-2,x))/n;
    }
}
