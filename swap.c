//C Program to perform the swapping of 2 numbers without using a temporary variable.
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("\nHello Mentors!");
	printf("\nEnter any two numeric values you want to swap:\n");
	scanf("%d %d",&a,&b);
	printf("\nBefore swapping \n First value: %d \n Second value: %d",a,b);
	a= a-b;
	b= a+b;
	a= b-a;
	printf("\nAfter swapping \n First value: %d \n Second value: %d",a,b);
	return 0;
}
