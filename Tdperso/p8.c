#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(int argc, char* argv[])
{

  //declaration variable d'entrée
  char instruction;
  double a =  strtod(argv [2], &instruction);           //a
  double b =  strtod(argv [3], &instruction);           //b
  double c =  strtod(argv [4], &instruction);           //c
  double y = 0;                                         //y
  int ReturnCode = 0;

  double Delta;
  double RE=0;
  double IM=0;
  double x1=0;
  double x2=0;

  // printf("a=%f\n",a);
  // printf("b=%f\n",b);
  // printf("c=%f\n",c);

  if (isnan(a))
  {
    ReturnCode=1;
    printf("|problème sur le ou les arguments | %d | `Bad argument(s).` |\n", ReturnCode);
    return 1;
  }
   
  if (strcmp(argv[1], "--compute")==0)
  {
    double x =  strtod(argv [5], &instruction);           //x
    
    if ((argc != 6))
    {
      ReturnCode = 1;
      printf("|problème sur le ou les arguments | %d | `Bad argument(s).` |\n", ReturnCode);
      return 1;
    }

    y = (a * x * x) + (b * x) + c;
    printf("y = %+.5f\n",y);
  }  
 
  else if (strcmp(argv[1], "--solve")==0)
  {
    if ((argc != 5))
    {
      ReturnCode=1;
      printf("|problème sur le ou les arguments | %d | `Bad argument(s).` |\n");
      return 1;
    }

    if (a == 0)
    {
      ReturnCode=1;
      printf("|problème sur le ou les arguments | %d | `Bad argument(s).` |\n", ReturnCode);
      return 1;
    }

    Delta=(b*b)-(4*a*c);

    // printf("Delta = %.5f \n",Delta);

    if (Delta==0)
    {
      x1=-b/2*a;
      printf("x1 = x2 = %+.5f \n",x1);
    }
     
    if (Delta>0)
    {
      if (Delta<pow(1,1/6)){
        Delta=0;
      }

      // printf("Delta = %f \n",Delta);

      x1=(-b+sqrt(Delta))/(2*a);
      x2=(-b-sqrt(Delta))/(2*a);
      printf("x1 = %+.5f \n", x1);
      printf("x2 = %+.5f \n", x2);
    }

    if (Delta<0)
    {

      if (Delta>-pow(1,1/6)){
        Delta=0;
      }
      
      // printf("Delta = %f \n",Delta);

      RE=-b / (2 * a);
      IM= sqrt(-Delta) / (2 * a);

      // printf("RE=%f\n",RE);
      // printf("IM=%f\n",IM);

      RE=round(RE*100000)/100000;
      IM=round(IM*100000)/100000;

      if ((RE!=0) && (IM!=0)) {
      printf("x1 = %+.5f + %.5fj\n", RE, IM);
      printf("x2 = %+.5f - %.5fj\n", RE, IM);
      }
      
      else if ((RE==0) && (IM!=0))
      {
      printf("x1 = %+.5fj\n", IM);
      printf("x2 = %+.5fj\n", -IM);
      }
    
      else if ((RE!=0) && (IM==0))
      {
      printf("x1 = %+.5f\n", RE);
      printf("x2 = %+.5f\n", RE);
      }

      else if ((RE!=0) && (IM==1))
      {
      printf("x1 = %+.5f +j\n", RE);
      printf("x2 = %+.5f -j\n", RE);
      }

      else if ((RE==0) && (IM==1))
      {
      printf("x1 = +j\n");
      printf("x2 = -j\n");
      }

    }
  }

  if (ReturnCode==0)
  {
    printf("|déroulement correct du programme | %d | |\n",ReturnCode);
  }
  
  return 0;
}
