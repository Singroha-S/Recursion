#include<bits/stdc++.h>
using namespace std;

bool sort(int a[],int s)
{
    if(s==1)
    {
        return 1;
    }
   // bool resarr=sort(a+1,s-1);
    return (a[0]<a[1] && sort(a+1,s-1));
}

int main()
{
    int a[]={1,2,3,4,5};
    cout<<sort(a,5);
    return 0;
}
