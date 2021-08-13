#include<bits/stdc++.h>
using namespace std;

void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char c=s[0];
    string reststr = s.substr(1);
    subseq(reststr,ans);
    subseq(reststr,ans+c);
}

int main()
{
    string s="abc";
    string a="";
    subseq(s,a);
    return 0;
}
