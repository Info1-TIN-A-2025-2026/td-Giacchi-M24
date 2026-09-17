#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char *t);

int main(int argc, const char *argv[])
{
	char s1[4] = "TXT";
	printf("Size of s1: %ld\n", sizeof(s1));
	printf("numcells: %ld\n", sizeof(s1) / sizeof(s1[0]));
	unsigned long count = 0;

	while (s1[count] != '\0')
	{
		count++;
	}
	printf("Length of s1: %lu\n", count);
	printf("Length of s1: %lu\n", strlen(s1));
	
	char s2[100] = "TXT";

	printf("Size of s2: %ld\n", sizeof(s2));
	printf("Length of s2: %lu\n", strlen(s2));

	char *s3 = "pipo a beaucoup fait pour l'infomatique en italie";

	printf("Size of s3: %ld\n", sizeof(s3));
	printf("Length of s3: %lu\n", strlen(s3));

	char *s4 = "Lorem ipsum dolor sit amet, \
		consectetur adipiscing elit. Sed non risus. \
		Suspendisse lectus tortor, dignissim sit amet,\
		 adipiscing nec, ultricies sed, dolor.";

	printf("Size of s4: %ld\n", sizeof(s4));
	printf("Length of s4: %lu\n", strlen(s4));

	void display(s5);
	char s5[] = "ABC";	
	display(s5);

	char s6[][10] = { //3*10 char
		"ABC",
		"DEF",
		"GHIJKL"
	};

	char *s7[] = {	//3*sizeof(adress) = 24 bytes
		"ABC",
		"DEF",
		"GHIJKL"
	};

	return 0;
}

void display(char *t){
	for (int i = 0; i < 4; i++)
	{
		printf("%3d ", t[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%2c  ", t[i]);
	}
	printf("\n");
}