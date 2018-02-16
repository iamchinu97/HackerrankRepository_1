#include <stdio.h>
#include <stdlib.h>
#define max 100
void plusminus(int a[max],int size);
void plusminus(int a[max],int size)
{
    float po=0.0,ne=0.0,ze=0.0;
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]>0)
        {
            po++;
        }
        if(a[i]<0)
        {
            ne++;
        }
        if(a[i]==0)
        {
            ze++;
        }
    }
    float ans1,ans2,ans3;
    ans1=po/size;
    ans2=ne/size;
    ans3=ze/size;
    printf("%f",ans1);
    printf("\n%f",ans2);
    printf("\n%f",ans3);
}
int main()
{
    int i,n;
    int a[max];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    plusminus(a,n);
    return 0;
}
