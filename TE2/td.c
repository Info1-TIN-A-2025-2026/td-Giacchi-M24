#include <stdio.h>
#include <math.h>
 
#define PARTIE_ENTIERE 10
#define PARTIE_DECIMALE 12
 
int main(int argc, const char *argv[])
{
    long a = 123456;
    long b = 29;
    char q[PARTIE_ENTIERE+1+PARTIE_DECIMALE+1]={0};
 
	long partie_entiere = a / b;
	long reste = a % b;
	q[PARTIE_ENTIERE+1] = '.';
	//partie entiere
	for(int i=PARTIE_ENTIERE-1; i>=0; i--) {
		q[i] = '0' + (partie_entiere % 10);
		partie_entiere /= 10;
	}
	//partie decimale
	for(int i=PARTIE_ENTIERE+2; i<PARTIE_ENTIERE+1+PARTIE_DECIMALE+1; i++) {
		reste *= 10;
		q[i] = '0' + (reste / b);
		reste = reste % b;
	}
 
	printf("%s\n", q);
 
	return 0;
}