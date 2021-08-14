#include<bits/stdc++.h>
using namespace std;

int countPath(int s,int e)
 {
     if(s==e)
         return 1;
     if(s>e)
         return 0;

     int ans=0;
     for(int i=1;i<=6;i++)
     {
         ans+=countPath(s+i,e);
     }
     return ans;
 }

int main()
{
    cout<<countPath(0,3);
    return 0;
}
