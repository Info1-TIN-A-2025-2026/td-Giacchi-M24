#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>

double generate_random_real_value(const double min_value, const double max_value);
double compute_distance_2D(const double x1, const double y1, const double x2, const double y2);

//determinate pi/4
int main(int argc, char* argv[])
{
  const double min_value = 0.0;
  const double max_value = 1;
  double x = 0.0;
  double y = 0.0;
  int i = 0;
  double pi = 3.14159265358979323846;
  double erreur = 0.0;
  double Points_in_circle = 0;
  double Total_points = 0;
  char* instructions;

  srand(0);

    //control number of arguments
  if (argc != 3)
  {
    printf("Bad option.\n");
    return 2;
  }

  //get arguments
  int n = atoi(argv[1]);
  double e = strtod(argv[2], &instructions);

  //control arguments
  if (((n==0) && (e==0)))
  {
    printf("bad arguments\n");
    return 1;
  }

  //if n input is 0
  else if (n==0)
  {
    do {
      x = generate_random_real_value(min_value, max_value);
      // printf("x=%f\n",x);
      y = generate_random_real_value(min_value, max_value);
      // printf("y=%f\n",y);
      if (compute_distance_2D(0.0, 0.0, x, y)<=1)
      {
        Points_in_circle++;
      }
      Total_points++;

      i++;
      erreur = sqrt((pi-(4*Points_in_circle/Total_points))*(pi-(4*Points_in_circle/Total_points)));

    } while (e<erreur);

    printf("   Iter = %.0f\n",Total_points);
    printf(" * Err  = %.15f\n",erreur); 
    printf("   PI   = %.15f\n",4*Points_in_circle/Total_points);
  }
  //if error input is 0
  else if (e==0)
  {
    do { 
      x = generate_random_real_value(min_value, max_value);
      // printf("x=%f\n",x);
      y = generate_random_real_value(min_value, max_value);
      // printf("y=%f\n",y);
      if (compute_distance_2D(0.0, 0.0, x, y)<=1)
      {
        Points_in_circle++;
      }
      Total_points++;

      i++;
      erreur = sqrt((pi-(4*Points_in_circle/Total_points))*(pi-(4*Points_in_circle/Total_points)));

    } while (i<n);

    printf(" * Iter = %.0f\n",Total_points);
    printf("   Err  = %.15f\n",erreur); 
    printf("   PI   = %.15f\n",4*Points_in_circle/Total_points); 
  }
  //base function
  else
  {
    // printf("n=%d e=%f\n",n,e);
    do
    {
      x = generate_random_real_value(min_value, max_value);
      // printf("x=%f\n",x);
      y = generate_random_real_value(min_value, max_value);
      // printf("y=%f\n",y);
      if (compute_distance_2D(0.0, 0.0, x, y)<=1)
      {
        Points_in_circle++;
      }
      Total_points++;

      i++;
      erreur = sqrt((pi-(4*Points_in_circle/Total_points))*(pi-(4*Points_in_circle/Total_points)));

    } while (( i<n) && (e<erreur));
    
    if (n==i)
    {
      printf(" * Iter = %.0f\n",Total_points);
      printf("   Err  = %.15f\n",erreur); 
    }
    else
    {
      printf("   Iter = %.0f\n",Total_points);
      printf(" * Err  = %.15f\n",erreur); 
    } 
      printf("   PI   = %.15f\n",4*Points_in_circle/Total_points);
  }
  return 0;
}

//entre 0 et 1 
double generate_random_real_value(double min_value,double max_value)
{
  return min_value + (rand() / (double)RAND_MAX) * (max_value - min_value);
}

double compute_distance_2D(double x1, double y1, double x2, double y2)
{
  return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
