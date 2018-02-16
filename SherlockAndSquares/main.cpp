#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            int temp=sqrt(j);
            if(temp*temp==j)
            {
                flag++;
                j=j+(temp*2);
            }
        }
        cout<<flag<<"\n";
        flag=0;
    }
    return 0;
}
