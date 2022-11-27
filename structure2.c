#include<stdio.h>

struct Student
{
	int Marks;
	int Age;
	char Division;
};

int main()
{
	struct Student obj;		//9byte
	struct Student *ptr = NULL;		//8byte
	
	ptr = &obj;
	
	//indirect accessing operator
	ptr -> Marks = 91;
	ptr -> Age = 21;
	ptr -> Division = 'A';
	
	return 0;
}