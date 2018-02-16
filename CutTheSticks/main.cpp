#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0;
    while(i<n)
    {
        if(a[i]==0)
        {
            i++;
        }
        else
        {
            int temp=a[i];
            for(int j=0;j<n;j++)
            {
                if(a[j]>0)
                {
                a[j]=a[j]-temp;
                flag++;
                }
            }
            cout<<flag<<"\n";
            flag=0;
        }
    }
    return 0;
}
