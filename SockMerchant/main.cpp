#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int total=0,flag1=0;
    int sock[n],flag[n];
    for(int i=0;i<n;i++)
    {
        cin>>sock[i];
        flag[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        flag1=0;
        for(int j=0;j<n;j++)
        {
            if(sock[i]==sock[j] && flag[j]==0)
            {
                flag[j]=1;
                flag1++;
            }
        }
        total=total+(flag1/2);
    }
    cout<<total;
    return 0;
}
