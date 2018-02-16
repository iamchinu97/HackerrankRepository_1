#include <iostream>

using namespace std;

int main()
{
    int n,p=5,total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        total=total+p/2;
        p=(p/2)*3;
    }
    cout<<total;
    return 0;
}
