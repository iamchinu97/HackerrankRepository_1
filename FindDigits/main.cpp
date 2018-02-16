#include <iostream>

using namespace std;

int main()
{
    int t,num,digit,flag=0;
    cin>>t;
    int test[t];
    for(int i=0;i<t;i++)
        cin>>test[i];
    for(int i=0;i<t;i++)
    {
        num=test[i];
        while(num>0)
        {
            digit=num%10;
            if(digit>0)
            {
                if(test[i]%digit==0)
                    flag++;
            }
            num=num/10;
        }
        cout<<flag<<endl;
        flag=0;
    }
    return 0;
}
