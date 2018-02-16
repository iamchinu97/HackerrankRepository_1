#include <iostream>

using namespace std;

int main()
{
    int n,birdf;
    cin>>n;
    int flock[n],flag=0,max1=0;
    for(int i=0;i<n;i++)
    {
        cin>>flock[i];
    }
    for(int i=1;i<=5;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(i==flock[j])
            {
              flag++;
            }
        }
        if(max1<flag)
        {
            max1=flag;
            birdf=i;
        }flag=0;
    }
    cout<<birdf;
    return 0;
}
