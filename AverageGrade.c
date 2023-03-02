#include <stdio.h>

int main()
{
	int i = 0;
	int grade;
	double sum = 0; /*vars initialized*/
	double avg = 0;

	printf("Please input a number of grades :\n");
	scanf("%d", &grade);

	while(grade != -1000) /*If user inputs -1000, program terminates*/
	{
		i++; /*i acts as a counter of iterations*/
		sum += grade; /*sum takes in each grade and adds it on*/
		avg = sum / i; /*avg takes the value of sum and divides it by the number of iterations*/
		printf("Sum is: %f\n", sum); /*print statement for sum*/
		printf("Average is: %f\n", avg); /*print statement for avg*/
		scanf("%d", &grade);
	}

	return 0;
}
