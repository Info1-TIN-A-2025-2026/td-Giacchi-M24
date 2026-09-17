#include <stdio.h>

int main(int argc, const char *argv[])
{
	// int i = 0;
	// const int imax = 20;
	// const int imin = 10;

	// do {
	// 	int ret = 0;
	// 	printf("Enter a integer value in range [10...20]	");
	// 	ret = scanf("%d",&i);
	// 	if (ret != 1)
	// 	{	
	// 		while( getchar() != '\n') {}
	// 			// char c = 0;
	// 			// do{
	// 			// 	c = getchar();
	// 			// } while (c != '\n');
	// 	}

	// } while ((i < imin) || (i > imax));

	// printf("value = %d\n", i);

	int i = 0;

	printf("enter the state	");
	scanf("%d\n", &i);

	switch (i)
	{
	case 1 :
		puts("ON");
		break;
	case 2 : 
		puts("OFF");
		break;
	case 4 : 
		puts("BLINK");
		break;
	default : 
		puts("ERROR");
		break;
	
	}
}