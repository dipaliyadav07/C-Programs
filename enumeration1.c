include<stdio.h>

enum days {Monday = 2, Tuesday, Wednesday, Thursday};

int main()
{
	enum days obj;
	
	int Salary[] = {200,450,250,700};
	
	printf("Size of enum %d\n",sizeof(obj));
	printf("Monday : %d\n",Monaday);
	printf("Tuesday : %d\n",Tuesday);
	printf("Wednesday : %d\n",Wednesday);
	printf("Thursday : %d\n",Thursday);
	
	Monday++;	//it will give error as every value in enumeration 
				//is integral constant
	
	printf("%d/n",&Monday);	//this will also give error
							//as we cannot create pointer for enumeration
	
	return 0;
}