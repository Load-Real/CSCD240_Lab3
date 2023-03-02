#include <stdio.h>
int main()
{
	char name[100];
	printf("Please enter a name:");
	fgets(name, 10, stdin); /*the new fgets() function has a max of 10, and is specified to receive stdin*/
	printf("The name you entered is %s", name);

	return 0;
}
