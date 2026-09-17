/**
  \file      passe_temps.c
  \brief     
  \author    Pierre BRESSY
  \version   1.0
  \date      2020-09-14 18:10:22
  \details
    
**/

// Déclarations des bibliotheques utiles

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
int main(int argc, char *argv[])
{
    int returnCode = EXIT_SUCCESS;

    struct tm naissance;
    time_t actuel;
    long nombre_secondes_ecoule;
    const long journee_en_seconde = 24 * 60 * 60;

    printf("---------------------------------------------------------------\n");
    printf("------------------------ PASSE TEMPS  --------------------------\n");
    printf("----------------------------------------------------------------\n");

    // Saisie de la date de naissance
    printf("Entrez votre date de naissance JJ MM AAAA : ");
    scanf("%d %d %d", &(naissance.tm_mday), &(naissance.tm_mon), &(naissance.tm_year));
    printf("%d %d %d\n", (naissance.tm_mday), (naissance.tm_mon), (naissance.tm_year));
    naissance.tm_mon = naissance.tm_mon - 1;
    naissance.tm_year = naissance.tm_year - 1900;
    printf("Entrez votre heure de naissance hh mm ss : ");
    scanf("%d %d %d", &(naissance.tm_hour), &(naissance.tm_min), &(naissance.tm_sec));
    printf("%d %d %d\n", (naissance.tm_hour), (naissance.tm_min), (naissance.tm_sec));
    time(&actuel);
    nombre_secondes_ecoule = (long)difftime(actuel, mktime(&naissance));
    printf("\n");
    printf("Il s'est ecoule: \n");
    printf("%ld secondes, soit un peu plus de %ld jours depuis votre naissance.\n",
           nombre_secondes_ecoule, nombre_secondes_ecoule / journee_en_seconde);
    return returnCode;
}
