#include <iostream>

using namespace std;

int main()
{
    int n,flag=0,level=0,valley=0;
    cin>>n;
    string c;
    cin>>c;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='U')
            level++;
        else if(c[i]=='D')
            level--;

        if(flag==0 && level<0)
        {
            valley++;
            flag=1;
        }
        if(level>=0)
            flag=0;

    }
    cout<<valley;
    return 0;
}
