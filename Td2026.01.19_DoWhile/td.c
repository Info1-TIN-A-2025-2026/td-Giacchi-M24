#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	const int M_Rocket = 750; 		// Mass of the rocket in T
	const int M_Rocketempty = 90; 	// Mass of the empty rocket in T
	const int Conso = 4; 			// Consumption in T/s
	const int V_exhaust = 4;		// Exhaust velocity in Km/s
	const int Space = 100;			// Height of space in Km

	double H=0;						// Height in Km
	double Vkh=0;					// Velocity in Km/s
	double Vms=0;					// Velocity in m/s
	double M=M_Rocket;				// Current mass in T
	double t=0;						// Time in s
	
	int good=0; 					//

	// t=V_exhaust*log(M_Rocket/M_Rocketempty); // Total burn time

	do{
		M = M - Conso;
		Vkh = V_exhaust * log(M_Rocket / M);
		Vms = Vkh * 1000;
		H = H + Vkh;

		printf("Time: %.2f s - Mass: %.2f T - Velocity: %.2f Km/s %.2f m/s - Mass: %.2f T - height: %.2f Km\n", t, M, Vkh, Vms, M-M_Rocketempty, H);
		if (H>=Space && good==0)
		{
			printf("The rocket has reached space!\n");
			good=1;
		}

		t=t+1;
	} while (M > M_Rocketempty);

	return 0;
}