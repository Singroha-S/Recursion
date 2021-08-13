#include<iostream>
using namespace std;

void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char c=s[0];
    int code=c;
    string reststr = s.substr(1);
    subseq(reststr,ans);
    subseq(reststr,ans+c);
    subseq(reststr,ans + to_string(code));
}

int main()
{
    subseq("AB","");
    return 0;
}
