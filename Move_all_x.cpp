#include<bits/stdc++.h>
using namespace std;

string moveX(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char c=s[0];
    string ans = moveX(s.substr(1));
    if(c=='x')
    {
        return (ans+'x');
    }
    else
        return (c+ans);
}

int main()
{
    string s="axanbxaadxdfuxr";
    cout<<moveX(s);
    return 0;
}
