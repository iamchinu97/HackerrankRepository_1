#include <iostream>

using namespace std;
void binarysearch(int a[1000],int left,int right,int num)
{
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==num)
        {
            cout<<mid;
            break;
        }
        else if(num > a[mid])
        {
            left=mid+1;
        }
        else if(num < a[mid])
        {
            right=mid-1;
        }
    }
}
int main()
{
    int n,num,a[1000];
    cin>>num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    binarysearch(a,0,n-1,num);
    return 0;
}
