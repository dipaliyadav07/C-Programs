#include<stdio.h>
#include<stdbool.h>

// %  Mod Operator
// == Equality Operator

bool CheckEven(int iNo)
{
	if(iNo % 2 == 0)
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
	int iValue = 0;
	bool bRet;
	
	printf("Enter one number\n");
	scanf("%d",&iValue);
	
	bRet = CheckEven(iValue);
	if(bRet == true)
	{
		printf("It is a even number\n");
	}
	else
	{
		printf("It is a odd number\n");
	}
	return 0;
}