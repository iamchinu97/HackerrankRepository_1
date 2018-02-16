#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    int players[n],max1,ranked[n];
    for(int i=0;i<n;i++)
        cin>>players[i];
 /*   cin>>m;
    int alice[m];
    for(int i=0;i<m;i++)
        cin>>alice[i];*/
    max1=players[0];
    ranked[0]=1;
    for(int i=1;i<n;i++)
    {
        if(max1>players[i])
        {
            max1=players[i];
            ranked[i]=(ranked[i-1]+1);
        }
        else if(max1==players[i])
        {
            ranked[i]=ranked[i-1];
        }
    }
    return 0;
}
