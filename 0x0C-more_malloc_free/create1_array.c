#include <stdio.h>
#include <stdlib.h>
/**
 * main _ creating an array
 * Return: nothing
 */
int main(void)
{
	int n;
	int i;
	printf("enter the value of your array\n");
	scanf("%d", &n);

	int *A = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	int *B = realloc(A, 2*n*sizeof(int));/*this taking twice the size of the memoryA to B*/
	printf("the address of old %p, the new address %p", A, B);
	for (i = 5; i < 2*n; i++)
	{
		B[i] = i + 1;
	}
	for (i = 5; i < 2*n; i++)
	{
		printf("%d \n", B[i]);
	}
	printf("\n");
	return (0);
}
		


