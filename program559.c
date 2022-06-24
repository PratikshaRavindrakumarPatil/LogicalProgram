/*


Enter the count of number:
4
Enter the number:
21
51
101
121
11 is not present


*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Display(int Arr[],int iLength)
{
	static int iCnt=0;
	static bool flag=false;
	
	if(iCnt<iLength)
	{
		if(Arr[iCnt]==0)
		{
			flag=true;
		}
		
		iCnt++;
		
		Display(Arr,iLength);
	}
	
	if(flag==true)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	bool bRet=false;
	
	printf("Enter the count of number:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet=Display(ptr,iSize);
	if(bRet==true)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is not present\n");
	}
	
	
	return 0;
}