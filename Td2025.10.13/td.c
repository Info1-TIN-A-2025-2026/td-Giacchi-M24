#include <stdio.h>
#include <stdbool.h>
#include <math.h>



int main(int argc, const char *argv[])
{
	float c= 0;			// Call
	float p = 0;		// Prix
	float S = 0;		// Strike
	float T = 0;		// jour
	float vol = 27.4;	// volatiliti
	float i = 1.5;		// Intérêt

	float pi = 3.1415;
	float e = 2.71828;
	float a1 = 0.319381530;
	float a2 = -0.356563782;
	float a3 = 1.781477937;
	float a4 = -1.821255978;
	float a5 = 1.330274429;

c = 
S * (1 - (1 / sqrtf(2 * pi)) * powf(e, -0.5f * powf((logf(S / p) + ((i / 100) + 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365)), 2)) *
    (a1 * (1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) + 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365))))) +
     a2 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) + 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365))))), 2) +
     a3 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) + 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365))))), 3) +
     a4 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) + 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365))))), 4) +
     a5 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) + 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365))))), 5)
    )
) 
- p * powf(e, - (i / 100) * (T / 365)) * (1 - (1 / sqrtf(2 * pi)) * powf(e, -0.5f * powf((logf(S / p) + ((i / 100) - 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365)), 2)) *
    (a1 * (1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) - 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365)))) ) +
     a2 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) - 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365)))) ), 2) +
     a3 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) - 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365)))) ), 3) +
     a4 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) - 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365)))) ), 4) +
     a5 * powf((1 / (1 + 0.2316419f * ((logf(S / p) + ((i / 100) - 0.5f * powf(vol / 100, 2)) * (T / 365)) / ((vol / 100) * sqrtf(T / 365)))) ), 5)
    )
);//version gpt
	
	//c = p * (1 - (1/sqrt(2*pi)*exp((-1/2) * pow( ln( p/S+(i-(1/2)*pow(vol,2)*T) ) ,2))))	;//version perso pas terminé

	return 0;
}