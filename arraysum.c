#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter the elements of first array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of second array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Elements of First Array:\n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	}
	printf("Elements of Second Array:\n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
	}
	printf("Elements of Added Array:\n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("Elements of Subtracted  Array:\n");
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
	
