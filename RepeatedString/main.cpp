#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    long n,counta=0,total,factor;
    int i=0,len,remain;
    cin>>s;
    cin>>n;
    len=s.length();
    for(i=0;i<len;i++)
    {
        if(s[i]=='a')
            counta++;
    }
    factor=n/s.length();
    total=factor*counta;
    remain=n%s.length();
    for(i=0;i<remain;i++)
    {
        if(s[i]=='a')
            total++;
    }
    cout<<total;
    return 0;
}
