#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int da,ma,ya,de,me,ye,fine=0;
    cin>>da>>ma>>ya;
    cin>>de>>me>>ye;
    if(ya==ye)
    {
        if(ma==me)
        {
            if(da<=de)
            {
                fine=0;
            }
            else if(da>de)
            {
                fine=(da-de)*15;
            }
        }
        else if(ma>me)
        {
            fine=500*(ma-me);
        }
    }
    else if(ya>ye)
    {
        fine=10000;
    }
    cout<<fine;
    return 0;
}
