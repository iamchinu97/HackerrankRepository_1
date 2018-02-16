#include <iostream>

using namespace std;

int main()
{
    int t,n;
    int time;
    cin>>t;
    int k[t],flag[t]={0};
    for(int i=0;i<t;i++)
    {
        cin>>n>>k[i];
        for(int j=0;j<n;j++)
        {
            cin>>time;
            if(time<=0)
            {
                flag[i]++;
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        cout<<"\nflag = "<<flag[i]<<"\tk = "<<k[i]<<endl;
        if(flag[i]<k[i])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
