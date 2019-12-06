#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<malloc.h>

int AddDiagonal(int** arr, int iRow, int iCol)
{
	int iSum=0, i=0, j=0;
	
	if(iRow!=iCol)
	{
		return -1;
	}
	
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if(i==j)
			{
				iSum=iSum+arr[i][j];
			}
		}
	}
	
	return iSum;	
}

int main()
{
	int iCol=0, iRow=0, i=0, j=0, iRet=0;
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
	
	iRet=AddDiagonal(p,iRow,iCol);
	
	printf("Addition of diagonal elements is %d\n",iRet);
	
	for(i=0;i<iRow;i++)
	{
		free(p[i]);
	}
	
	free(p);
	
	getch();
	return 0;
}
