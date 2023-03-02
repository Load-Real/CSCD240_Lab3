#include <stdio.h>
int main()
{
	short sInt = 20; /*short*/
	int oInt = 20; /*int*/
	char ch = 'A'; /*char*/
	double dInt = 20; /*double*/
	long lInt = 20; /*long*/
	long double ldInt = 20; /*long double*/

	printf("Size of short is: %zu\n", sizeof(sInt));
	printf("Size of int is: %zu\n", sizeof(oInt));
	printf("Size of char is: %zu\n", sizeof(ch));
	printf("Size of double is: %zu\n", sizeof(dInt));
	printf("Size of long is: %zu\n", sizeof(lInt));
	printf("Size of long double is: %zu\n", sizeof(ldInt));

	printf("\n"); /*newline to make format nicer*/

	printf("Doing Boolean checks (non-zero = true):\n");
	printf("%d\n", sizeof(short) < sizeof(int));
	printf("%d\n", sizeof(char) < sizeof(short));
	printf("%d\n", sizeof(long) > sizeof(int));
	printf("%d\n", sizeof(long double) > sizeof(double));

	return 0;
}
