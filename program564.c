/*

Enter the count of number:
6
Enter the number:
11
21
24
26
25
30
Enter the start of limit:
20
Enter the end of limit:
30
21      24      26      25      30


*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength,int iStart,int iEnd)
{
	static int iCnt=0;

	
	
	if(iCnt<iLength)
	{
		if((Arr[iCnt]>iStart)&&(Arr[iCnt<iEnd]))
		{
			printf("%d\t",Arr[iCnt]);
		}
		
		iCnt++;
		
		Display(Arr,iLength,iStart,iEnd);
	}
	

}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	int start=0;
	int end=0;
	
	printf("Enter the count of number:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the start of limit:\n");
	scanf("%d",&start);
	
	printf("Enter the end of limit:\n");
	scanf("%d",&end);
	
	
	Display(ptr,iSize,start,end);
	
	
	
	
	return 0;
}