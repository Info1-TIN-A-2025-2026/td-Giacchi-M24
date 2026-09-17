#include <stdio.h>
#include <stdbool.h>	

int main(int argc, const char *argv[])
{

	float x = 0.f;
	float y = 0.f;
	int ret = 0;

	// printf("enter a floating point value: ");
	// ret = scanf("%f", &x);
	// printf("x=%.4f\n", x);
	// printf("ret=%d\n", ret);

	// printf("enter a floating point value: ");
	// ret = scanf("%f", &y);
	// printf("x=%.4f\n", y);
	// printf("ret=%d\n", ret);

	// printf("Enter two floating pints value (space separated): ", ret);

	// ret = scanf("%f %f", &x, &y);
	// printf("ret=%d\n", ret);
    // printf("x=%.4f\n", x);
	// printf("x=%.4f\n", y);

	printf("Enter two floating pints value (space separated): ", ret);

	ret = scanf("%f:%f", &x, &y);
	printf("ret=%d\n", ret);
    printf("x=%.4f\n", x);
	printf("x=%.4f\n", y);

	char a =0;
	scanf("%hhd", &a);
}