#include <stdio.h>

int main(int argc, const char *argv[])
{
	//	int Num_in = 0;
	//	int N_digit = 0;
	//
	//	printf("enter a number:	");
	//	scanf("%d", &Num_in);
	//
	//	while (Num_in > 0){
	//	Num_in = Num_in / 10;
	//	N_digit = N_digit + 1;

	int nf = 0;
	int n = 0;

	printf("enter a number: ");
	scanf("%d", &n);

	do{
		
		nf *= 10;
		nf += n % 10;
		n /= 10;

	} while (n > 0);

	//	printf("%d digits",N_digit);

	printf("%d", nf);
}
