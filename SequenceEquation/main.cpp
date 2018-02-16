#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    int p[n],ans[n+1];
    ans[0]=0;
    for(int i=0;i<n;i++)
        cin>>p[i];
    for(int i=0;i<n;i++)
    {
        x=p[i];
        y=i+1;
        for(int j=0;j<n;j++)
        {
            if(y==p[j])
            {
                ans[x]=j+1;
                break;
            }
        }
    }
    for(int i=1;i<n+1;i++)
        cout<<ans[i]<<endl;
    return 0;
}
