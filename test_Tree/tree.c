#include <stdio.h>
#define HEIGHT 10
#define TRONC 5

int main(int argc, const char *argv[])
{
	//tree

	for (int i = 0; i < HEIGHT; i++){
		for (int j = 0; j < HEIGHT - i; j++){
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++){
			printf("*");
		}
		printf("\n");
	}
	//tronc
	for (int i = 0; i < TRONC; i++){
		for (int j = 0; j < HEIGHT ; j++){
			printf(" ");
		}
		printf("|\n");
	}
		return 0;
}