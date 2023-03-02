#include <stdio.h>
main()
{
	int a = 3;
	int b = 4;
	double c = ++a + b++;
	size_t size = sizeof(c/a);

	printf("Printing values:\n");
	printf("a = %d\n", a); /*use %d for decimals*/
	printf("b = %d\n", b);
	printf("c = %f\n", c); /*use %f for doubles*/
	printf("size = %zu\n", size); /*use %zu for size_t types*/

	return 0;
}
