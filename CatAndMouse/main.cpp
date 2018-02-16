#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int a[q],b[q],c[q];
    for(int i=0;i<q;i++)
    {
        cin>>a[i]>>b[i]>>c[i];;
    }
    for(int i=0;i<q;i++)
    {
         if(abs(c[i]-a[i])>abs(c[i]-b[i]))
            cout<<"Cat B"<<endl;
         else if(abs(c[i]-a[i])<abs(c[i]-b[i]))
            cout<<"Cat A"<<endl;
         else if(abs(c[i]-a[i])==abs(c[i]-b[i]))
            cout<<"Mouse C"<<endl;
    }
    return 0;
}
