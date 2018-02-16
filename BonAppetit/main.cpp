#include <iostream>

using namespace std;

int main()
{
    int n,k,total=0;
    cin>>n>>k;
    int bcharged,bactual;
    int cost[n];
    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    cin>>bcharged;
    for(int i=0;i<n;i++)
    {
        if(i!=k)
        {
            total=total+cost[i];
        }
    }
    bactual=total/2;
    if(bactual==bcharged)
        cout<<"Bon Appetit";
    else
        cout<<bcharged-bactual;
    return 0;
}
