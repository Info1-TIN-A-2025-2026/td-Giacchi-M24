#include <stdio.h>

double delta(const double a,const double b, const double c);

int main(int argc, const char *argv[])
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	printf("enter parameter a,b,c\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = delta(a, b, c);
	printf("delta=%lf\n", d);
	return 0;
}

double delta(const double a, const double b, const double c){
	double d;
	d = b * b - 4. * a * c;
	return d;
}
