#include<stdio.h>

struct Demo1
{
	int no;
	struct Demo1 next;	//we cannot create object of same structure inside the structure
	//hence, line no. 6 will give error
};

struct Demo2
{
	int no;
	struct Demo2 *next;
};

int main()
{
	struct Demo1 obj1;
	struct Demo2 obj2;
	
	return 0;
}