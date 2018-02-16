#include <iostream>
using namespace std;

int main()
{
    int i,n,max1,min1,flag1=0,flag2=0;
    cin>>n;
    int game[n];
    for(i=0;i<n;i++)
    {
        cin>>game[i];
    }
    max1=game[0];
    min1=game[0];
    for(i=0;i<n;i++)
    {
        if(max1<game[i])
        {
            max1=game[i];
            flag1++;
        }
        if(min1>game[i])
        {
            min1=game[i];
            flag2++;
        }
    }
    cout<<flag1<<" "<<flag2;

    return 0;
}
