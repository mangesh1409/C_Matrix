#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<malloc.h>

void SumCol(int** arr, int iRow, int iCol)
{
	int iSum=0, i=0, j=0;
	
	for(i=0;i<iCol;i++)
	{
		for(j=0;j<iRow;j++)
		{
			iSum=iSum+arr[j][i];
		}
		printf("%d ",iSum);
		
		iSum=0;
	}
}

int main()
{
	int iCol=0, iRow=0, i=0, j=0;
	int** p=NULL;
			
	printf("Enter number of rows: \n");
	scanf("%d",&iRow);
		
	printf("Enter number of colomns: \n");
	scanf("%d",&iCol);
		
	p=(int**)malloc(iRow*sizeof(int*));
	
	for(i=0;i<iRow;i++)
	{
		p[i]=(int*)malloc(iCol*sizeof(int));
	}
		
	printf("Enter %d elements\n", iCol*iRow);
		
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&(p[i][j]));
		}
	}
		
	printf("Entered elements as\n");
		
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d  ,",p[i][j]);
		}
		printf("\n");
	}
	
	SumCol(p,iRow,iCol);
	
	for(i=0;i<iRow;i++)
	{
		free(p[i]);
	}
	
	free(p);
	
	getch();
	return 0;
}
