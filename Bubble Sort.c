#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the Size:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{


		for(j=0; j<n-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
    printf("%d ",a[i]);
	}
}