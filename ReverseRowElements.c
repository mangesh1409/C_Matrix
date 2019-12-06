#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<malloc.h>

void ReverRow(int** arr, int iRow, int iCol)
{
	int iTemp=0, i=0, j=0;
	int iEnd=0;
	
	for(i=0;i<iRow;i++)
	{	
		iEnd=iCol-1;
		
		for(j=0;j<iCol;j++,iEnd--)
		{
			if(j<iEnd)
			{
				iTemp=arr[i][j];
				arr[i][j]=arr[i][iEnd];
				arr[i][iEnd]=iTemp;
			}
			else
			{
				break;
			}
		}
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
		
	printf("Entered elements before reversing as\n");
		
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d  ,",p[i][j]);
		}
		printf("\n");
	}
	
	ReverRow(p,iRow,iCol);
	
	printf("Entered elements after reversing as\n");
		
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d  ,",p[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<iRow;i++)
	{
		free(p[i]);
	}
	
	free(p);
	
	getch();
	return 0;
}
