#include <iostream>

using namespace std;
void maxmin(long long);
void maxmin(long long a[5])
{
    int i,j;
    long long sum=0;
    long long large=0,small=10000;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
             j++;
            }
            if(j<5)
            {
            sum=sum+a[j];
            }
        }
        if(sum>large)
        {
            large=sum;
        }
        if(sum<small)
        {
            small=sum;
        }
        sum=0;
    }

    cout<<small<<" "<<large;
}
int main()
{
    long long arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    maxmin(arr);
    return 0;
}
