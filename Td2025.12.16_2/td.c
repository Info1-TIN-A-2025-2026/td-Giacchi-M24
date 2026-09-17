#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define H 16
#define W 16
#define NUM_GRAYS 256

/* Prototypes */
void display_matrix(unsigned char matrix[H][W]);
void dilatation(unsigned char matrix[H][W]);


int main(int argc, const char *argv[])
{
    unsigned char f[H][W] = {0};
    for (unsigned long row = 4; row < 12; row++)
    {
        for (unsigned long col = 4; col < 12; col++)
        {
            f[row][col] = 255;
        }
        display_matrix(f);

        unsigned char g[H][W] = {0};
        for (unsigned long row = 4; row < 12; row++)
        {
        for (unsigned long col = 4; col < 12; col++)
            {
            g[row][col] = 255;
            }
    
        }
    display_matrix(g);
    return 0;
    }
}

/* Affiche la matrice */
void display_matrix(unsigned char matrix[H][W])
{
    for (unsigned long row = 0; row < H; row++)
    {
        for (unsigned long col = 0; col < W; col++)
        {
            printf("%4d ", matrix[row][col]);
        }
        puts("");   
    }
}

void dilatation(unsigned char matrix[H][W])
{
    for (unsigned long row = 0; row < H; row++)
    {
        for (unsigned long col = 0; col < W; col++)
        {
            printf("%4d ", matrix[row][col]);
        }
        puts("");   
    }
}





