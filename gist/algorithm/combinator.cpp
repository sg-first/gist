long factorial(long number)
{
    if(number<=1)
        return 1;
    else
        return number*factorial(number-1);
}

int combinator(int n,int m)
{
    int temp;
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    return factorial(n)/(factorial(m)*factorial(n-m));
}