#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char* argv[])
{
  int return_code = 0; // code du programm
    float h,L,a,Lat,Latmin=0;
    float d=23.4364;
    int amin=0;

   printf("enter hauteur:");
   scanf("%f", &h);
   printf("enter longueur ombre:");
   scanf("%f", &L);
  printf("\n\n");

  if ((h<=0) && (L<0))
  {
    printf("unabletocompute,theheightisnotvalid.\n");
    printf("unabletocompute,thelengthisnotvalid.\n");
    return 3;
  }
  

  if (h<=0)
  {
    printf("unabletocompute,theheightisnotvalid.\n");
    return 1;
  }

  if (L<0)
  {
    printf("unabletocompute,thelengthisnotvalid.\n");
    return 2;
  }
  
  
  if (atan(h/L)*180/3.14159265358979323846 == 90)
  {
    printf("THE SUN IS AT THE ZENITH.\n");
  }

  if (h<0)
  {
    return_code = 1;
    printf("Unable to compute, the height is not valid.");
  }
  
  if (L<0)
  {
    return_code = 2;
  }
  
  if (h<0 && L<0)
  {
    return_code = 3;
  }
  
  if (return_code>0)
 {
    return return_code;
  }
  
  a=atan(h/L)*180/3.14159265358979323846;
  printf("Angle    = %.2f°\n",a);

  Lat=90-a-d;
  
  if (Lat<0)
  {
   Lat=-Lat;
   printf("latitude = %.2f° ",Lat);
   printf("SOUTH\n");

   amin= (int)Lat;
   Latmin=(Lat-amin)*60;

   printf("latitude = %d° %.1f' ",amin,Latmin);
   printf("SOUTH\n");
  }
  else 
  {
    printf("latitude = %.2f° ",Lat);
    printf("NORTH\n");
    amin= (int)Lat;
    Latmin=(Lat-amin)*60;

    printf("latitude = %d° %.1f' ",amin,Latmin);
    printf("NORTH\n");
  }
  
  return return_code;
}