#include<bits/stdc++.h>
using namespace std;

int  firstocc(int a[],int s,int i,int tar)
{
    if(i==s)
    {
        return -1;
    }
    if(a[i]==tar)
        return i;
    return firstocc(a,s,i+1,tar);
}

int  lastocc(int a[],int s,int i,int tar)
{
    if(i==s)
    {
        return -1;
    }
    int baki=lastocc(a,s,i+1,tar);
    if(baki!=-1)
        return baki;
    if(a[i]==tar)
    {
        return i;
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,2,4,2,9,6};
    cout<<firstocc(a,8,0,2)<<" ";
    cout<<lastocc(a,8,0,2);
    return 0;
}
