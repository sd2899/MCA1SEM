#include<stdio.h>
#include<conio.h>
void main()
{
	int a1[3][3],a2[3][3],a3[3][3],i,j;
	clrscr();
	printf("\n enter the elements of 1st matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\n enter the elements of second matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a1[i][j]);
			//printf("\t%d ",a2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	printf("\n ADDITION ::\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a3[i][j]=a1[i][j]+a2[i][j];
			printf("%d ",a3[i][j]);
		}
		printf("\n");
	}
	getch();
}