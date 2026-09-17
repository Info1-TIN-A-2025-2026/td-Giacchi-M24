#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, const char *argv[])
{
	int i = 0;
	long a = 0;
	int num = 0;
	long N[1000];
	srand(0);

	do
	{
		N[i] = (((double) rand() / RAND_MAX) *200) - 100;
		i++;
	} while (i < 1000);

	printf("enter a number between -100 to 100: ");
	scanf("%d", &num);
	i = 0;

	do
	{
		a = N[i];
		i++;
	} while ((a==num) && (i<1000));
	
	if (a!=num)
	{
		printf("number not found\n");
	}
	else
	{
		printf("number %d found at index %d\n", num, i-1);
	}

	printf("enter a number between 0-1000: ");
	scanf("%d", &num);

	printf("The number at index %d is: %ld\n", num, N[num]);
	return 0;
}

