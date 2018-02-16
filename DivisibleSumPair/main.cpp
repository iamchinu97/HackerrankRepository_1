#include <iostream>

using namespace std;
int main()
{
    int n,k,flag=0;
    cin>>n>>k;
    int a[n];
    if(n>=2 && n<=100 && k>=1 && k<=100)
    {
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j && ((a[i]+a[j])%k)==0)
            {
                flag++;
            }
        }
    }
    }
    cout<<flag;
    return 0;
}
