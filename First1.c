#include<stdio.h>

extern int no1,no2,Add();

int main()
{
	int ans=0;
	
	ans=Add(no1,no2);
	
	printf("Addition of numbers is %d\n",ans);
	
	return 0;
}
	
	