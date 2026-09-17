#include <stdio.h>

// int f(unsigned int t, int* a, int* b, int* c);		// a,b,c continnent les adresses d'une variable de type int$

void c2p(double x, double y, double *p, double *Theta);

int main(int argc, const char *argv[])
{

	// int h=0;
	// int m=1000000000;
	// int s=0;
	// // printf("h=%p\n", &argc);
	// // printf("h=%p\n", &argv);
	// printf("h=%p\n", &h);
	// printf("h=%p\n", &m);
	// printf("h=%p\n", &s);


	// unsigned int t=423455;

	// int r=f(t, &h, &m, &s);

	int x=3;
	int y=4;
	double p=0;
	double Theta=0;

   c2p(x,y, &p, &Theta);

	printf("p=%lf\n", p);
	printf("Theta=%lf\n", Theta);
	return 0;
}

// int f(unsigned int t, int *a, int *b, int *c)		// a,b,c continnent les adresses d'une variable de type int
// {

// 	int h = t / 3600;
// 	int m =t / 60 - h * 60;
// 	int s =t - h * 3600 - m * 60;

// 	*a = h;
// 	*b = m;
// 	*c = s;
// 	printf("a=%p\n", *a);
// 	printf("b=%p\n",*b);
// 	printf("c=%p\n", *c);

// 	return t;
// }

void c2p(double x, double y, double *p, double *Theta) {

	*p = sqrt(x*x + y*y);
	*Theta = atan2(y, x);
	return;
}