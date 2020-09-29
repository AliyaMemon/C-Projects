#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of stairs you want:\t");
	scanf("%d",&n);
	printf("\nThe %d number of stairs are shown below:\n",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
