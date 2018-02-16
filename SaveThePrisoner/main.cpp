#include <iostream>

using namespace std;

int main()
{
    int n,num,m,id,cal;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num>>m>>id;
        cal=((id+m-1)%num);
        if(cal==0)
            cout<<num<<endl;
        else
            cout<<cal<<endl;
    }
    return 0;
}
