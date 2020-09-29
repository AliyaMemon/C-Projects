#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2;
	int op;
	printf("Enter any two values to calculate:\n");
	scanf("%d %d",&n1,&n2);
	agn:
	printf("Now select the operation to perform:\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Modulo Division(Remainder)\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1 : printf("The Addition of %d and %d is %d",n1,n2,n1+n2);
					break;
		case 2 : printf("The Subtraction of %d and %d is %d",n1,n2,n1-n2);
					break;
		case 3 : printf("The Multiplication of %d and %d is %d",n1,n2,n1*n2);
					break;
		case 4 : printf("The Division of %d and %d is %d",n1,n2,n1/n2);
					break;
		case 5 : printf("The Modulo Division of %d and %d is %d",n1,n2,n1%n2);
					break;
		default: printf("Your Choice is invalid. Please select again");
					goto agn;
	}
	return 0;
}
