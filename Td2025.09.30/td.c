#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	double m1=0, m2=0, d=0, f=0;
	const double g= 0.0000000000667; // Constante gravitasionnel

	printf("m1,m2,d"); //

	scanf("%lf,%lf,%lf", &m1, &m2, &d); //entrée des valeur m1,m2,d

	if ((m1 < 0) || (m2 < 0) || (d < 0)) //controlle erreur
	{
		printf("error"); //afficher erreur
	}
	
    else
	{
	f = g * m1 * m2 / (d*d); // calcul force

	printf("force gravitationnel = %lf", f); //affichage force
	}
}