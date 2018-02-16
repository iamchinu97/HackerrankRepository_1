#include <iostream>

using namespace std;

int main()
{
    int i,j,k,size;
    cout<<"Enter the size:";
    cin>>size;
    for(i=0;i<=size;i++)
    {
        for(j=0;j<=size-i;j++)
        {
            cout<<" ";
        }
        k=1;
        while(k<=i+1)
        {
        cout<<"* ";
        k++;
        }
        cout<<"\n";
    }
    return 0;
}
