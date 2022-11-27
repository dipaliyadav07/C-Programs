/*
	Steps to develop the application
	Step 1 : Understand the problem statement
	Step 2 : Write the algorithm
	Step 3 : Decide the programming language(C/C++/Java/Python/____)
	Step 4 : Write the program 
	Step 5 : Test the program 
*/

//Accept N numbers from user and perform the addition

//Input 
//Value of N = 5
//Values : 10 20 30 40 50 

//Output 
//Addition is : 150

//Algorithm
/*
	START
		Accept the number of elements from user
		Allocate the memory to store that numbers
		Accept the numbers from user
		Perform addition of all numbers
		Display the addition 
	END
*/

#include<stdio.h>		//for printf and scanf
#include<stdlib.h>		//for malloc and free

/////////////////////////////////////////////////////////
//
// Application Name : Addition of N numbers 
// Input : N numbers
// Output : Addition
// Author : Dipali Yadav
// Date : 18 September 2022
//
////////////////////////////////////////////////////////

int main()
{
	int *Arr = NULL;		//pointer to hold address of array
	int iSize = 0;		//Variable to hold size of array
	register int i = 0;			//Loop counter
	int iSum = 0;		//to hold the addition
	
	printf("Please enter how many elements you want?\n");
	scanf("%d",&iSize);
	
	// Allocate the memory
	Arr = (int *)malloc(iSize * sizeof(int));
	
	printf("Memory allocation is successful\n");
	printf("Please Enter the elements\n");
	
	for(i = 0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	//Perform addition
	for(i = 0; i < iSize; i++)
	{
		iSum = iSum + Arr[i];
	}
	
	printf("Addition is : %d\n",iSum);
	
	free(Arr);
	printf("Memory gets deallocated\n");
	
	return 0;
}