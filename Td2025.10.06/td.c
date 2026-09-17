#include <stdio.h>
#include <string.h> 
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	char a = 'A';									// ASCII code of A(65)
	unsigned char Num_Students=23;					// num.student
	unsigned char Num_Chair=32;						// num.chair
	short delta =Num_Students - Num_Chair;			// delta num.student/num.chair
	bool SW1 = true;								// Lampes Prof alumée
	bool SW2 = true;								// lampes salle alumée
	char State =(SW2 << 4)+ SW1; 					// SW1(Lampe) au BIT 0 et SW2 au BIT 4
	char b = 112;

	printf("Number of student=%u ", Num_Students);
	printf("Number of chair=%u ", Num_Chair);
	printf("Delta=%hd ", delta);
	printf("SW1=%d ", SW1);
	printf("SW2=%d ", SW2);
	printf("state=%X ", State);
	printf("a=%c ", a);
	printf("b=%c ", b);
	return 0;
}
