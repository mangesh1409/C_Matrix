#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkIdentity(int** arr, int iRow, int iCol)
{
	int iSum=0, i=0, j=0;
	BOOL flag=TRUE;
	
	for(i=0;i<iRow&&flag==TRUE;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if((arr[i][j]!=0)&&(arr[i][j]!=1))
			{
				flag=FALSE;
				break;
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
	
	bRet=ChkIdentity(p,iRow,iCol);
	
	if(bRet==TRUE)
	{
		printf("Given matrix is identity matrix\n");
	}
	else
	{
		printf("Given matrix is not identity matrix\n");
	}
	
	for(i=0;i<iRow;i++)
	{
		free(p[i]);
	}
	
	free(p);
	
	getch();
	return 0;
}