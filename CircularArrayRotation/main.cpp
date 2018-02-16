#include <iostream>

using namespace std;

int main()
{
    int n,k,q,newin;
    cin>>n>>k>>q;
    int arr[n],input[q],output[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>input[i];
    }
    for(int j=0;j<n;j++)
    {
            newin=((j+k)%n);
            output[newin]=arr[j];
    }
    for(int i=0;i<q;i++)
    {
        int in=input[i];
        cout<<output[in]<<endl;
    }
    return 0;
}
