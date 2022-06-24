/*

Enter the count of number:
5
Enter the number:
10
21
15
40
55
10      40

*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	static int iCnt=0;
	while(iCnt<iLength)
	{
		if(((Arr[iCnt]%5)==0)&&((Arr[iCnt]%2)==0))
		{
			printf("%d\t",Arr[iCnt]);
		}
		iCnt++;
		
		Display(Arr,iLength);
	}
	
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
	
	Display(ptr,iSize);
	
	return 0;
}