#include<stdio.h>

int main()
{
	int drr[3+2]={7+9,3*2,78,9-1};
	int crr[]={10,20,30};
	int arr[3]={21,43,54};
	int x=0;
	
	x=arr[2]+21+arr[0];
	x++;
	
	printf("%d\n",sizeof(crr));
	printf("%d\n",drr[3]);
	printf("%d\n",x);
	
	return 0;
}
