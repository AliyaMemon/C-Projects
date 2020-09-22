//C Program for giving Grades
#include<stdio.h>
#include<conio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	printf("Enter your marks for 5 subjects(Out of 100): \n");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	int total = m1 + m2 + m3 + m4 + m5;
	printf("\nTotal Score: %d",total);
	int percent = total * 100 / 500;
	printf("\nPercentage: %d",percent);
	if(percent >= 85)
		printf("\nYour Grade is A. \nCongratulations!");
	else if(percent >= 70)
		printf("\nYour Grade is B. \nVery Good!");
	else if(percent >= 55)
		printf("\nYour Grade is C. \nGood!");
	else if(percent >= 40)
		printf("\nYour Grade is D. \nWork Hard!");
	else 
		printf("\nYour Grade is E. \nFail!");
}
