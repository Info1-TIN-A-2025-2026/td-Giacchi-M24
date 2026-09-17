#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Number of seconds:	");
	signed int s = 0; // signed INT

	scanf("%d", &s);

	if (s < 0)
	{
		printf("Error");
	}

	else if (s >= 86400)

	{
		printf("Overflaw");
	}
	else
	{
		unsigned int hours = 0;
		unsigned int minutes = 0;
		unsigned int seconds = 0;

		hours = s / 3600; // Int=int/int
		minutes = s / 60 - hours * 60;
		seconds = s - minutes * 60 - hours * 3600;

		printf("%02u:%02u:%02u:", hours, minutes, seconds);
	}
}