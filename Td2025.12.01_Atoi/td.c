#include <stdio.h>
#include <stdlib.h>
#include <math.h>	

int main(int argc, const char *argv[])
{
	// int n = atoi (argv[1]);
	// int i = 0;
	// int a = 0;
	// int b = 1;
	// int c = 0;
	// int d = 0;

	// if (n % 2 == 0)
	// {
	// 	puts("pair");
	// return 0;
	// }

	// for (i = 0; i < n-1; i++)
	// {
	// 	printf(" ");
	// }

	// printf("*\n");

	// for (i = 1; i <= n; i++)
	// {
	// 		for (c = 0; c < n-1; c++) putchar(" ");	

	// 		for (c = 0; c < 2*i-1; c++) putchar("A");
		
	// 	printf("\n");
	// }


	int n = atoi (argv[1]);
	double a = 0;
	double p = 0;

	for (size_t i = 0; i <= n; i++)
	{
		double f=(pow(-1,i))/(2*i+1);
		a=a+f;
	}
	p=4*a;
	printf("approximation de pi avec %d termes : %.10f\n",n,p);
}