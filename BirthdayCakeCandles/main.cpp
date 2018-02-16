#include <iostream>

using namespace std;


int main()
{
    long n,max1;
    cin>>n;
    long long a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag=0;
    max1=a[0];
    for(i=0;i<n;i++)
    {
        if(max1<=a[i])
        {
            max1=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max1)
        {
            flag++;
        }
    }
    cout<<flag;
    return 0;

}
