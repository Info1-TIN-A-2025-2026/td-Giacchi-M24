#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  int word = 0; 
  char c;
  char oldvalue;
  if (strcmp(argv[1], "--uc")==0)
    printf("enter a text: \n");
              
    do
    {
      c=getchar();

        if (oldvalue==(' ') && (c !=' ') && (c != '\n'))
      {
        word++;
      }
      
      if (c >= 'a' && c <= 'z')     
        c = c - ('a' - 'A');

      putchar(c); 
      oldvalue=c;

    } while(c != '\n');     
    
  printf("\nNumber of words: %d\n", word);
  return 0;
}
