#include<stdio.h>
 
int main()
{
	int no1 = 10;
	const int no2 = 10;
	
	printf("%d\n",no1);
	printf("%d\n",no2);
	
	no1++;	//allowed;
	no2++;	//not allowed;
	
	no1 = 20;	//allowed;
	no2 = 20;	//not allowed;
	
	no1--;	//allowed;
	no2--;	//not allowed;
	
	return 0;
}
	