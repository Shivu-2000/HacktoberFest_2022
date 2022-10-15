#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int result=0;
	for(j=1;j<n;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
			result=j;
		}
	}
	printf("%d",result);
}
