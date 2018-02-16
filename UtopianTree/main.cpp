#include <iostream>

using namespace std;

int main()
{
    int num,height=1;
    cin>>num;
    int cycle[num];
    for(int i=0;i<num;i++)
    {
        cin>>cycle[i];
    }
    for(int i=0;i<num;i++)
    {
        height=1;
        for(int j=1;j<=cycle[i];j++)
        {
            if(j%2!=0)
            {
                height=height*2;
            }
            else if(j%2==0)
            {
                height=height+1;
            }
        }
        cout<<height<<endl;
    }
    return 0;
}
