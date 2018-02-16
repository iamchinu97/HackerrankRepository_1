#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    scanf("%d",&n);//number of column
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
       while(j<n)
        {
            printf("#");
            j++;
        }
        printf("\n");
    }
    return 0;
}
