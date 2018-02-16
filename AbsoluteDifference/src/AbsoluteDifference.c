/*
 ============================================================================
 Name        : AbsoluteDifference.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define max 10
int difference(int a[max][max],int size);
int difference(int a[max][max],int size)
{
	/*primary diagonal*/
	int i,j,sum1=0,sum2=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i==j)
			{
				sum1=sum1+a[i][j];
			}
			if(j==(size-i-1))
			{
				sum2=sum2+a[i][j];
			}
		}
	}
	return abs(sum1-sum2);

	/*secondary diagonal*/

}
int main(void) {
	int i,j,n;
	int a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int result;
	result=difference(a,n);
	printf("%d",result);

}
