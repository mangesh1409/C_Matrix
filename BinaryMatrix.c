#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkBinary(int** arr, int iRow, int iCol)
{
	int i=0, j=0;
	BOOL flag=TRUE;
	
	if(iRow!=iCol)
	{
		return FALSE;
	}
	
	for(i=0;i<iRow&&flag==TRUE;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if(i==j)
			{
				if(arr[i][j]!=1)
				{
					flag=FALSE;
					break;
				}
			}
			else
			{
				if(arr[i][j]!=0)
				{
					flag=FALSE;
					break;
				}
			}
		}
	}
	return flag;	
}

int main()
{
	int iCol=0, iRow=0, i=0, j=0;
	int** p=NULL;
	BOOL bRet=FALSE;
	
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
	
	bRet=ChkBinary(p,iRow,iCol);
	
	if(bRet==TRUE)
	{
		printf("Given matrix is binary matrix\n");
	}
	else
	{
		printf("Given matrix is not binary matrix\n");
	}
	
	for(i=0;i<iRow;i++)
	{
		free(p[i]);
	}
	
	free(p);
	
	getch();
	return 0;
}