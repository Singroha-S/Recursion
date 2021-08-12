#include<bits/stdc++.h>
using namespace std;

int pow(int n,int p)
{
    if(p==0)
        return 1;
    return n*pow(n,p-1);
}

int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}

int fac(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fac(n-1);
}

int sum(int n)
{
    if(n==0)
        return 0;
    int prevsum=sum(n-1);
    return n+prevsum;
}

int main()
{
    int n;
    cin>>n;
    //cout<<sum(n);
    //cout<<fac(n);
    //cout<<fib(n);

    int p;
    cin>>p;
    cout<<pow(n,p);

    return 0;
}
