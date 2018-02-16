#include <iostream>
using namespace std;

int main()
{
    int i,n;
    int num[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int hops=0;
    for(i=0;i<n-2;i++){
        if (num[i+2]==0){
            i++;
            hops++;
            continue;
        }
        hops++;
    }
    if(i<n-1)
        hops++;
    cout<<hops;
    return 0;
}
