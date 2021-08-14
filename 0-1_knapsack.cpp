#include <iostream>
using namespace std;

int knapsack(int wt[],int val[],int W,int n)
{
    if(n==0||W==0)
    {
        return 0;
    }
    if(wt[n-1]<=W)
    {
        return max((val[n-1]+knapsack(wt,val,W-wt[n-1],n-1)),knapsack(wt,val,W,n-1));
    }
    else{
        knapsack(wt,val,W,n-1);
    }
}

int main()
{
    int wt[]= {10,20,30};
    int val[]= {100,50,150};
    int W=50;
    int n=sizeof(wt)/sizeof(wt[0]);
    cout << "answer is:"<<knapsack(wt,val,W,n)<<endl;
    return 0;
}
