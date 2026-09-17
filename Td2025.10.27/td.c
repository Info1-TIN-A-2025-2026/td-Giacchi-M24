#include <stdio.h>

int main(int argc, const char *argv[])
{
	//int a = 0;
	//int b = 0;
	//int q = 0;
	//int r = 0;

	//printf("enter a: ");
	//scanf("%d", &a);

	//printf("enter b: ");
	//scanf("%d", &b);

	//q = a / b;
	//r = a % b;

	//printf("a/b=%d\n", q);
	//printf("a%%b=%d\n", r);

	//int a = 10;

	//printf("%d\n", a++);	//afficher 10 puis incrémenter
	//printf("%d\n", ++a);	//incrémenter 12(10+1+1) puis afficher
    //return 0;


	unsigned int cpt = 0;
	unsigned int a = 0;
	unsigned int is_prime = 0;

	for (cpt = 2; cpt <= 100; cpt++)
	{
		is_prime = 1;

			for (a = 2; a <= cpt-1; a++)
			{
				if (cpt % a==0)
				{
					is_prime = 0;
				}
			}	
		
			if (is_prime != 0)
		{
		printf("%d, ", cpt);
		}
	}
}