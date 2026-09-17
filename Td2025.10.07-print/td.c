#include <stdio.h>
#include <stdbool.h>	

int main(int argc, const char *argv[])
{

	long volume = 42;  // M3
	long pression = -4; // Bar
	double pi = 3.141592653589793;
	double absolute_zero = -459.67;
	double Lightspeed = 299792458;
	int Num_digits = 3;
	int width = 8;

	printf("volume =[%ld]\n", volume);
	printf("volume =[%7ld]\n", volume);
	printf("volume =[%-7ld]\n", volume);
	printf("volume =[%+ld]\n", volume);
	printf("volume =[%+7ld]\n", volume);
	printf("volume =[%+ld]\n", volume);

	printf("pression =%-7ld\n", pression);

	printf("π =[%lf]\n", pi);
	printf("π =[%.2lf]\n", pi);
	printf("π =[%+.2lf]\n", pi);

	printf("Zero abs=[%.1lf]\n", absolute_zero);

	printf("Zero abs=[%+10.2lf]\n", pi);
	printf("Zero abs=[%+10.2lf]\n", absolute_zero);
	printf("[%+10.2lf]\n", Lightspeed);

	printf("π=[%.3lf]\n", pi);
	printf("π=[%.*lf]\n", Num_digits, pi);

	Num_digits = 12;

	printf("π=[%.*lf]\n", Num_digits, pi);

	Num_digits = 3;
	
	printf("π=[%+*.*lf]\n",width, Num_digits, pi);	
}