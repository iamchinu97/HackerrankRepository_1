#include <iostream>

using namespace std;
#define max 60
void grading(int a[max],int sz)
{
    int i,result[max],num,nexf;
    for(i=0;i<sz;i++)
        {
            if(a[i]>=38)
            {
                num=a[i]/5;
                nexf=(num*5)+5;
                if((nexf-a[i])<3)
                {
                  result[i]=nexf;
                }
                else
                {
                result[i]=a[i];
                }
            }
            else
            {
            result[i]=a[i];
            }
        }
        for(i=0;i<sz;i++)
        {
            cout<<result[i]<<endl;
        }
    }
int main()
{
    int n,i;
    cin>>n;
    int a[max];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    grading(a,n);
    return 0;
}
