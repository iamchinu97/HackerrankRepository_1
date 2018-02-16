#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    //cout<<"Enter the tc:";
    cin>>t;
    long b,w,x,y,z;
    long long result;
    for(int i=0;i<t;i++)
    {
        //cout<<"\nEnter data:";
        cin>>b>>w;
        cin>>x>>y>>z;
        if(x>(y+z))
        {
            x=y+z;
        }
        if(y>x+z)
        {
            y=x+z;
        }
        result=((b*x)+(w*y));
        cout<<result<<endl;
    }
    return 0;
}