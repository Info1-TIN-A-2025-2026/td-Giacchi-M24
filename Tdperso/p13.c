#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int args_are_ok(int argc, char *argv[]);
int solve_equation(const double a1, const double b1, const double c1, const double a2, const double b2, const double c2, double *x, double *y);

int main(int argc, char* argv[])
{
  int i = 0;
  
  if (args_are_ok(argc, argv) == 0)
  {
    printf("Bad arguments\n");      
    return 1;
  }

  double m = atof (argv[2]);
  double v = atof (argv[3]);

  return 0;
}

int args_are_ok(int argc, char *argv[])
{

  if ((argc != 4) && (argc != 2))
  {
    printf("1\n");
    return 0;
  }
   else if (((strcmp(argv[1],"-s") != 0) && (strcmp(argv[1],"-h") != 0)))
  {
    printf("2\n");
    return 0;
  }
  else if (atof (argv[2]) < 0)
  {
    printf("3\n");
    return 0;
  }
  else if (atof (argv[3]) < 0)
  {
    printf("4\n");
    return 0;
  }
  else 
  {
    return 1;
  }
}

int solve_equation(const double a1, const double b1, const double c1, const double a2, const double b2, const double c2, double *x, double *y)
{
  
  return 0;
} 
// pas fini
