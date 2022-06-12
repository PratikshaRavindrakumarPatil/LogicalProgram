/*
output:

Enter the size of array:
5
Enter the element:
2
1
2
1
2
the number having odd occurence:2


*/
#include<stdio.h>
#include<stdlib.h>


int Count(int Arr[],int iLength)
{
	int i=0,j=0,iCnt=0;
	int count=0;
	
	for(i=0;i<iLength;i++)
	{
		count=0;
		for(j=i;j<iLength;j++)
		{
			if(Arr[i]==Arr[j])
			{
				count++;
			}
		
		}
		if(count%2!=0)
		{
			return Arr[i];
		}
	}

	
}

int main()
{
	int iSize=0;
	int *Ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the size of array:\n");
	scanf("%d",&iSize);
	
	Ptr=(int *)malloc(sizeof(int) *iSize);
	
	printf("Enter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	
	iRet=Count(Ptr,iSize);
	printf("the number having odd occurence:%d",iRet);
	return 0;

}