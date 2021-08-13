#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)   //base case
        return;
    string ekcharkbad = s.substr(1);
    reverse(ekcharkbad );
    cout<<s[0];
}

int main()
{
    reverse("naveen singroha");
    return 0;
}
