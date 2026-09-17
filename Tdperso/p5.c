#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  
  if (argc < 7)
  {
    printf("Invalid exit status.1\n "  );
    printf("Error, not enough arguments.");
    return 0;
  }
    if (argc > 7)
  { 
    printf("2\n "  );
    printf("Error,too many arguments.");
    return 0;
  }
  //declaration variable d'entrée

  double PCB_m = atof(argv [1]);   //mm
  double PCB_l = atof(argv [2]);   //mm
  double lay  =  atof(argv [3]);   //qty
  double Diod =  atof(argv [4]);   //qty
  double Capa =  atof(argv [5]);   //qty
  double Res  =  atof(argv [6]);   //qty
  
  double PCB_s = 0;      //cm2
  double Vernis_s = 0; 
  int nRes = 0;

  double PCB_costunit = 0;
  double layder_costunit = 0.05;
  double Vernis_costunit = 0.01 ;
  double Diodes_costunit = 0 ;
  double Condo_costunit = 0 ;
  double Res_costunit = 1 ;
  double TVA = 8/100;

  double PCB_Price = 0;
  double layder_Price = 0;
  double Vernis_Price = 0;
  double Diodes_Price = 0;
  double Condo_Price = 0;
  double Res_Price = 0;

  double Total_SubPrice = 0;
  double Total_taxes = 0;
  double Total_Price = 0;

  PCB_s = PCB_m/10 * PCB_l/10;
  Vernis_s = PCB_s * 2;
  nRes = (Res+9)/10;

  //Pcb price__________________________
  if (PCB_s<200)
  {
    PCB_costunit = 0.12;
  }
  else  {
    PCB_costunit = 0.10;
  }
  
  //diode price________________________
  if (Diod<10)
  {
    Diodes_costunit = 0.75;
  }
  else if (Diod<20)
  {
    Diodes_costunit = 0.70;
  }
  else
  {
    Diodes_costunit = 0.60;
  }
  
  //capacitor price___________________
  if (Capa<10)
  {
    Condo_costunit = 1.00;
  }
  else
  {
    Condo_costunit = 0.80;
  }
 
//price calaculator
  PCB_Price = PCB_costunit * PCB_s;
  layder_Price = PCB_s * layder_costunit * lay;
  Vernis_Price = PCB_s * Vernis_costunit*2;
  Diodes_Price = Diodes_costunit * Diod;
  Condo_Price = Condo_costunit *Capa;
  Res_Price = Res_costunit * nRes;

  Total_SubPrice = PCB_Price + layder_Price + Vernis_Price + Diodes_Price + Condo_Price + Res_Price;
  Total_taxes = Total_SubPrice * TVA;
  Total_Price = Total_taxes + Total_SubPrice;

  printf("+---------------------------------------------+\n");
  printf("|   ITEM          | QUANTITY |   PU  |   PT   |\n");
  printf("|-----------------+----------+-------+--------|\n");
  printf("| PCB [cm2]       |     %.lf  |  %.2lf |  %.2lf |\n", 47, PCB_s, PCB_costunit, PCB_Price);
  printf("| Layer           |       %.lf  |  %.2lf |   %.2lf |\n", 47, lay, layder_costunit, layder_Price);
  printf("| Coating         |     %.lf  |  %.2lf |   %.2lf |\n", 47, Vernis_s, Vernis_costunit, Vernis_Price);
  printf("| Diodes          |       %.lf  |  %.2lf |   %.2lf |\n", 47, Diod, Diodes_costunit, Diodes_Price);
  printf("| Capacitors      |       %.lf  |  %.2lf |   %.2lf |\n", 47, Capa ,Condo_costunit, Condo_Price);
  printf("| Resistors(x10)  |       %.lf  |  %.2lf |   %.2lf |\n", 47, nRes, Res_costunit, Res_Price);
  printf("|------------------------------------+--------|\n");
  printf("|                          sub total |  %.2lf |\n", 47, Total_SubPrice);
  printf("|                              taxes |   %.2lf |\n", 47,Total_taxes);
  printf("|                              total |  %.2lf |\n", 47,Total_Price);
  printf("+---------------------------------------------+\n");
  printf("```");

  return 0;
}
