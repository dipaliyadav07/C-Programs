#include<stdio.h>

int X=10;		//global variable(data)

void Demo()
{
  int B=30;		//local variable(stack)

  printf("Value of B from Demo: %d\n", B);
  printf("Value of X from Demo: %d\n", X);

  //print("%d",A);	  //not allowed   

}

int main()
{
  int A=20;		//local variable(stack)

  printf("Value of A from Main: %d\n", A);
  printf("Value of X from Main: %d\n", X);

  //printf("%d",B);	//not allowed

  Demo();		//function call

  return 0;
}