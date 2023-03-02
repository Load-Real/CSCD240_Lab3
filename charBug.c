#include <stdio.h>
int main()
{
	int c;
	char dummy[10];

	printf("Enter a value :");
	c = getchar();

	while (c != 'q' && c != 'Q')
	{
		printf("You entered: ");
		putchar(c);
		printf("\n");
		printf("Enter a value :");
		c = getchar();
		while ((c = getchar()) == '\n');
		/*while loop created to solve issue, newline input becomes a requisite for the loop to continue*/
	}
	return 0;
}
