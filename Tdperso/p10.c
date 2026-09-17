#include <stdlib.h> 
#include <stdbool.h> 
#include <math.h> 
#include <stdio.h>
#include <string.h>

char instruction;

int ligne_1 (int y);
int interligne (int y);
int ligne_r (int xy,int X , char sign);
int colone_1(int xy, char sign);

int main(int argc, char* argv[])  {

   int a = atoi(argv[1]);
    char Sign = strcmp(argv[2],&instruction);

   printf(" X%cY",Sign);
   ligne_1(a);
   colone_1(a,Sign);
   return 0;
}

//première ligne 
int ligne_1 (int y){

  int n=0;
  do
    {
      
      printf("|%*d ",3,n);
      n++;
    } while (n<y);
    printf("\n");
    printf("----");
    interligne(y);
    return y;
}

//interligne
int interligne (int y){

  int n=0;
  do
  {
    
    printf("+----");
    n++;
  } while (n<y);

  printf("\n");
  return y; 
}

//1ère colonne 
int colone_1(int xy, char sign){
  int X=0;
  int Y=0;
  int n=0;
  do
  {
    
    printf("%*d ",3,n);
      ligne_r(xy,X,sign);
      printf("----");
      interligne(xy);
      X++;
    n++;
  } while (n<xy);

  return xy;
}

//resultat ligne
int ligne_r (int xy,int x , char sign){

  int n=0;
  int y=0;
  int r=0;
  do
  {
    switch (sign)
    {
    case '+' :
        r=x+y;
      break;

    case '-' :
        r=x-y;
      break;

    case '*' :
        r=x*y;
      break;

    case '/' :
        if (y != 0)
          r=x/y;
        else
          r=0;
      break;

    case '%' :
        if (y != 0)
          r=x%y;
        else
          r=0;
      break;

       case '|' :
        r=x||y;
      break;

      case '^' :
        pow(x,y);
      break;
     
    default:
      break;
    }
    printf("|%*d ",3,r);
    n++;
    y++;
  } while (n<xy);
  
  printf("\n");
  return xy;
}



