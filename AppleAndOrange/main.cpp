#include <iostream>
using namespace std;
#define max 100000

int main()
{
    int i,j;
    int flag1=0,flag2=0;
    int s,t;
    int a,b;
    int m,n;
    int apples,oranges;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        cin>>apples;
        if(a+apples>=s && a+apples<=t)
        {
            flag1++;
        }
    }
    for(j=0;j<n;j++)
    {
        cin>>oranges;
        if(b+oranges>s && b+oranges<=t)
        {
            flag2++;
        }
    }
    cout<<flag1<<endl;
    cout<<flag2;
    return 0;
}
