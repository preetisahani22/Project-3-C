#include<stdio.h>

int main()
{
	int num,count=0;
	printf("Enter num: ");
	scanf("%d",&num);
	
	while(num!= 0)
	{
		count++;
		num= num / 10;	
	}
	
	printf("num of digit is: %d",count);
	return 0;
}
