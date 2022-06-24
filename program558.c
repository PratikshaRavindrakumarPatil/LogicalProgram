/*

Enter the count of number:
5
Enter the number:
11
20
25
30
40
Differnce between count of even and odd number is:1

*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	static int iCnt=0;
	static int iCountE=0;
	static int iCountO=0;
	
	if(iCnt<iLength)
	{
		if((Arr[iCnt]%2)==0)
		{
			iCountE++;
		}
		else
		{
			iCountO++;
		}
		
		iCnt++;
		
		Display(Arr,iLength);
	}
	
	return (iCountE-iCountO);
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the count of number:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Display(ptr,iSize);
	printf("Differnce between count of even and odd number is:%d\n",iRet);
	
	
	return 0;
}